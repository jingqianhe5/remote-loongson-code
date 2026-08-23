#!/usr/bin/env python3
"""Validate intent metadata and the manually curated JSONL dataset."""

from __future__ import annotations

import argparse
import json
from collections import Counter
from pathlib import Path

from isp_features import normalize_text


ROOT = Path(__file__).resolve().parent


def load_intents(path: Path) -> list[dict]:
    with path.open(encoding="utf-8") as source:
        document = json.load(source)
    intents = document.get("intents")
    if not isinstance(intents, list) or not intents:
        raise ValueError("intents.json must contain a non-empty intents array")
    return intents


def load_jsonl(path: Path) -> list[dict]:
    records = []
    with path.open(encoding="utf-8") as source:
        for line_number, line in enumerate(source, 1):
            try:
                record = json.loads(line)
            except json.JSONDecodeError as error:
                raise ValueError(f"{path}:{line_number}: {error}") from error
            if set(record) != {"text", "label"}:
                raise ValueError(f"{path}:{line_number}: expected text and label fields")
            if not isinstance(record["text"], str) or not isinstance(record["label"], str):
                raise ValueError(f"{path}:{line_number}: text and label must be strings")
            records.append({**record, "line": line_number})
    return records


def validate(intents: list[dict], records: list[dict], minimum: int) -> None:
    ids = [intent.get("id") for intent in intents]
    labels = [intent.get("label") for intent in intents]
    if ids != list(range(len(intents))):
        raise ValueError("intent IDs must be contiguous and ordered from zero")
    if len(labels) != len(set(labels)):
        raise ValueError("intent labels must be unique")

    known_labels = set(labels)
    counts = Counter()
    normalized_seen: dict[str, tuple[str, int]] = {}
    for record in records:
        text = normalize_text(record["text"])
        label = record["label"]
        line = record["line"]
        if not text:
            raise ValueError(f"empty normalized text at line {line}")
        if label not in known_labels:
            raise ValueError(f"unknown label {label!r} at line {line}")
        previous = normalized_seen.get(text)
        if previous is not None:
            previous_label, previous_line = previous
            raise ValueError(
                f"normalized duplicate at lines {previous_line} and {line}: "
                f"{previous_label} / {label}"
            )
        normalized_seen[text] = (label, line)
        counts[label] += 1

    missing = [label for label in labels if counts[label] < minimum]
    if missing:
        details = ", ".join(f"{label}={counts[label]}" for label in missing)
        raise ValueError(f"labels below minimum {minimum}: {details}")

    print(f"PASS records={len(records)} labels={len(labels)} minimum={minimum}")
    for intent in intents:
        print(f"{intent['id']:2d} {intent['label']:<24} {counts[intent['label']]:3d}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--intents", type=Path, default=ROOT / "intents.json")
    parser.add_argument("--data", type=Path, default=ROOT / "data/manual_seeds.jsonl")
    parser.add_argument("--minimum", type=int, default=10)
    args = parser.parse_args()
    validate(load_intents(args.intents), load_jsonl(args.data), args.minimum)


if __name__ == "__main__":
    main()
