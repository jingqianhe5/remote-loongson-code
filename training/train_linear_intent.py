#!/usr/bin/env python3
"""Train and export the selected single-layer Q8.8 intent classifier."""

from __future__ import annotations

import argparse
import json
import struct
from pathlib import Path

import numpy as np

from generate_synthetic import generate_records
from intent_resolver import resolve_intent
from isp_features import NGRAM_MAX, NGRAM_MIN, normalize_text, texts_to_features
from train_intent import augment_train, q8_matmul, quantize_q8_8, split_records
from validate_dataset import load_intents, load_jsonl, validate
from validate_teacher_data import validate_teacher_records


ROOT = Path(__file__).resolve().parent
MODEL_MAGIC = b"ISPL"
MODEL_VERSION = 1
DEFAULT_FEATURE_DIM = 2048
EVALUATION_SEEDS = [20260715, 20260716, 20260717, 20260718, 20260719]


def records_to_arrays(records: list[dict], label_to_id: dict[str, int], feature_dim: int):
    features = texts_to_features([record["text"] for record in records], feature_dim)
    labels = np.asarray([label_to_id[record["label"]] for record in records], dtype=np.int64)
    return features, labels


def fit_centroid(features: np.ndarray, labels: np.ndarray, classes: int):
    lengths = np.linalg.norm(features, axis=1, keepdims=True)
    normalized = features / np.maximum(lengths, 1.0)
    weights = np.stack([normalized[labels == label].mean(axis=0) for label in range(classes)])
    weights /= np.maximum(np.linalg.norm(weights, axis=1, keepdims=True), 1e-12)
    return weights.astype(np.float32), np.zeros(classes, dtype=np.float32)


def merge_unique(*groups: list[dict]) -> list[dict]:
    merged = []
    seen: dict[str, str] = {}
    for group in groups:
        for record in group:
            normalized = normalize_text(record["text"])
            previous = seen.get(normalized)
            if previous is not None:
                if previous != record["label"]:
                    raise ValueError(
                        f"conflicting training phrase {record['text']!r}: "
                        f"{previous}/{record['label']}"
                    )
                continue
            seen[normalized] = record["label"]
            merged.append(record)
    return merged


def evaluate(
    intents: list[dict],
    manual_records: list[dict],
    synthetic_records: list[dict],
    teacher_records: list[dict],
    feature_dim: int,
) -> dict:
    label_to_id = {intent["label"]: intent["id"] for intent in intents}
    results = []
    for seed in EVALUATION_SEEDS:
        train_records, _, test_records = split_records(manual_records, label_to_id, seed)
        combined_train = merge_unique(
            augment_train(train_records), synthetic_records, teacher_records
        )
        train_x, train_y = records_to_arrays(combined_train, label_to_id, feature_dim)
        test_x, test_y = records_to_arrays(test_records, label_to_id, feature_dim)
        weights, bias = fit_centroid(train_x, train_y, len(intents))
        scores = q8_matmul(test_x, weights) + bias
        raw = float(np.mean(np.argmax(scores, axis=1) == test_y))
        resolved_ids = np.asarray(
            [
                resolve_intent(record["text"], score, label_to_id)
                for record, score in zip(test_records, scores)
            ]
        )
        resolved = float(np.mean(resolved_ids == test_y))
        results.append({"seed": seed, "q8_raw_accuracy": raw, "q8_resolved_accuracy": resolved})

    raw_values = np.asarray([result["q8_raw_accuracy"] for result in results])
    resolved_values = np.asarray([result["q8_resolved_accuracy"] for result in results])
    return {
        "splits": results,
        "q8_raw_mean": float(raw_values.mean()),
        "q8_raw_min": float(raw_values.min()),
        "q8_resolved_mean": float(resolved_values.mean()),
        "q8_resolved_min": float(resolved_values.min()),
        "teacher_records": len(teacher_records),
    }


def export_model(
    output: Path,
    weights: np.ndarray,
    bias: np.ndarray,
    intents: list[dict],
    metrics: dict,
) -> None:
    output.mkdir(parents=True, exist_ok=True)
    feature_dim = weights.shape[1]
    weights_q8 = quantize_q8_8(weights)
    bias_q8 = quantize_q8_8(bias)

    np.savez(output / "intent_model_fp32.npz", weights=weights, bias=bias)
    header = struct.pack(
        "<4s5I",
        MODEL_MAGIC,
        MODEL_VERSION,
        feature_dim,
        len(intents),
        NGRAM_MIN,
        NGRAM_MAX,
    )
    model_path = output / "intent_model_q8_8.bin"
    with model_path.open("wb") as target:
        target.write(header)
        target.write(weights_q8.astype("<i2").tobytes())
        target.write(bias_q8.astype("<i2").tobytes())

    manifest = {
        "format": "isp-intent-linear-q8.8-v1",
        "classifier": "cosine_centroid",
        "feature_dim": feature_dim,
        "class_count": len(intents),
        "ngram_range": [NGRAM_MIN, NGRAM_MAX],
        "tile_width": 64,
        "model_bytes": model_path.stat().st_size,
        "macs_per_command": feature_dim * len(intents),
        "semantic_resolver_required": True,
        "labels": [
            {
                "id": intent["id"],
                "label": intent["label"],
                "action": intent["action"],
                "reply": intent["reply"],
            }
            for intent in intents
        ],
        "metrics": metrics,
    }
    with (output / "intent_model_manifest.json").open("w", encoding="utf-8") as target:
        json.dump(manifest, target, ensure_ascii=False, indent=2)
        target.write("\n")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--intents", type=Path, default=ROOT / "intents.json")
    parser.add_argument("--data", type=Path, default=ROOT / "data/manual_seeds.jsonl")
    parser.add_argument(
        "--teacher-data", type=Path, default=ROOT / "data/teacher_distilled.jsonl"
    )
    parser.add_argument("--output", type=Path, default=ROOT / "out")
    parser.add_argument("--feature-dim", type=int, default=DEFAULT_FEATURE_DIM)
    args = parser.parse_args()

    if args.feature_dim <= 0 or args.feature_dim & (args.feature_dim - 1):
        raise ValueError("feature-dim must be a positive power of two")
    intents = load_intents(args.intents)
    manual_records = load_jsonl(args.data)
    validate(intents, manual_records, minimum=10)
    teacher_records = load_jsonl(args.teacher_data) if args.teacher_data.is_file() else []
    if teacher_records:
        counts = validate_teacher_records(intents, teacher_records, manual_records)
        print(f"teacher_records={sum(counts.values())} labels={len(counts)}")
    else:
        print(f"teacher_records=0 path={args.teacher_data} (optional dataset not found)")
    synthetic_records = generate_records(intents, manual_records)
    metrics = evaluate(
        intents, manual_records, synthetic_records, teacher_records, args.feature_dim
    )

    label_to_id = {intent["label"]: intent["id"] for intent in intents}
    final_records = merge_unique(
        augment_train(manual_records), synthetic_records, teacher_records
    )
    final_x, final_y = records_to_arrays(final_records, label_to_id, args.feature_dim)
    weights, bias = fit_centroid(final_x, final_y, len(intents))
    export_model(args.output, weights, bias, intents, metrics)

    print(
        f"RESULT q8_raw_mean={metrics['q8_raw_mean']:.3f} "
        f"q8_raw_min={metrics['q8_raw_min']:.3f} "
        f"q8_resolved_mean={metrics['q8_resolved_mean']:.3f} "
        f"q8_resolved_min={metrics['q8_resolved_min']:.3f}"
    )
    print(f"exported={args.output}")


if __name__ == "__main__":
    main()
