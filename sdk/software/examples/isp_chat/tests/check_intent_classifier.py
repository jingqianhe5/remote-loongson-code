#!/usr/bin/env python3
"""Compare the portable C implementation with the Python Q8.8 reference."""

from __future__ import annotations

import argparse
import json
import struct
import subprocess
import sys
from pathlib import Path

import numpy as np


ROOT = Path(__file__).resolve().parents[5]
TRAINING = ROOT / "training"
sys.path.insert(0, str(TRAINING))

from isp_features import text_to_features  # noqa: E402
from intent_resolver import match_keywords  # noqa: E402
from test_direction_cases import DIRECTION_CASES  # noqa: E402
from validate_dataset import load_intents  # noqa: E402


def load_cases() -> list[tuple[str, str]]:
    cases = list(DIRECTION_CASES)
    with (TRAINING / "data/manual_seeds.jsonl").open(encoding="utf-8") as source:
        for line in source:
            record = json.loads(line)
            cases.append((record["text"], record["label"]))
    return cases


def load_model(path: Path, expected_classes: int):
    image = path.read_bytes()
    magic, version, feature_dim, classes, ngram_min, ngram_max = struct.unpack_from(
        "<4s5I", image
    )
    if (magic, version, feature_dim, ngram_min, ngram_max) != (
        b"ISPL", 1, 2048, 1, 3
    ) or classes != expected_classes:
        raise ValueError("unexpected model header")
    weights = np.frombuffer(image, dtype="<i2", count=classes * feature_dim, offset=24)
    weights = weights.reshape(classes, feature_dim).astype(np.int64)
    bias = np.frombuffer(
        image, dtype="<i2", count=classes, offset=24 + classes * feature_dim * 2
    ).astype(np.int64)
    return weights, bias


def reference_scores(text: str, weights: np.ndarray, bias: np.ndarray) -> np.ndarray:
    features = (text_to_features(text, weights.shape[1]) * 256.0).astype(np.int64)
    scores = bias.copy()
    for start in range(0, weights.shape[1], 64):
        accumulator = weights[:, start : start + 64] @ features[start : start + 64]
        magnitude = np.abs(accumulator)
        rounded = (magnitude + 128) >> 8
        rounded = np.where(accumulator < 0, -rounded, rounded)
        scores += np.clip(rounded, -32768, 32767)
    return scores


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--classifier", type=Path, required=True)
    parser.add_argument("--model", type=Path, required=True)
    args = parser.parse_args()

    cases = load_cases()
    intents = load_intents(TRAINING / "intents.json")
    labels = {intent["label"] for intent in intents}
    if len(intents) != 24 or not {"CHAT_HELLO", "CHAT_NAME", "CHAT_HELP"} <= labels:
        raise AssertionError("deployment label set must keep all three bounded chat classes")
    label_to_id = {intent["label"]: intent["id"] for intent in intents}
    weights, bias = load_model(args.model, len(intents))
    completed = subprocess.run(
        [str(args.classifier), str(args.model)],
        input="".join(f"{text}\n" for text, _ in cases),
        text=True,
        capture_output=True,
        check=True,
    )
    lines = completed.stdout.splitlines()
    if len(lines) != len(cases):
        raise AssertionError(f"C output lines={len(lines)}, expected={len(cases)}")

    failures = []
    for (text, expected), line in zip(cases, lines):
        resolved, raw, keyword, score_text = line.split("|", 3)
        c_scores = np.asarray([int(value) for value in score_text.split(",")])
        python_scores = reference_scores(text, weights, bias)
        python_keyword_id = match_keywords(text, label_to_id)
        python_keyword = (
            intents[python_keyword_id]["label"] if python_keyword_id is not None else "SKIPPED"
        )
        if not np.array_equal(c_scores, python_scores):
            failures.append(f"score mismatch text={text!r}")
        if resolved != expected:
            failures.append(
                f"intent mismatch expected={expected} actual={resolved} raw={raw} text={text!r}"
            )
        if keyword != python_keyword:
            failures.append(
                f"keyword mismatch c={keyword} python={python_keyword} text={text!r}"
            )
    if failures:
        print("\n".join(failures[:20]))
        return 1
    print(f"PASS c_python_parity={len(cases)} scores=exact keywords=exact intents=exact")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
