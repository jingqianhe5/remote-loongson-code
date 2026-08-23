#!/usr/bin/env python3
"""Compare small-data classifiers before committing to a board model."""

from __future__ import annotations

from collections.abc import Callable

import numpy as np

from generate_synthetic import generate_records
from intent_resolver import resolve_intent
from isp_features import texts_to_features
from train_intent import ROOT, accuracy, augment_train, q8_matmul, split_records
from validate_dataset import load_intents, load_jsonl, validate


def arrays(records: list[dict], label_to_id: dict[str, int], feature_dim: int):
    features = texts_to_features([record["text"] for record in records], feature_dim)
    labels = np.asarray([label_to_id[record["label"]] for record in records], dtype=np.int64)
    return features, labels


def fit_multinomial(features: np.ndarray, labels: np.ndarray, classes: int):
    alpha = 1.0
    counts = np.stack([features[labels == label].sum(axis=0) for label in range(classes)])
    class_counts = np.bincount(labels, minlength=classes).astype(np.float64)
    weights = np.log((counts + alpha) / (counts.sum(axis=1, keepdims=True) + alpha * features.shape[1]))
    bias = np.log((class_counts + alpha) / (len(labels) + alpha * classes))
    return weights.astype(np.float32), bias.astype(np.float32)


def fit_bernoulli(features: np.ndarray, labels: np.ndarray, classes: int):
    alpha = 1.0
    class_counts = np.bincount(labels, minlength=classes).astype(np.float64)
    present = np.stack([features[labels == label].sum(axis=0) for label in range(classes)])
    probability = (present + alpha) / (class_counts[:, None] + 2.0 * alpha)
    weights = np.log(probability) - np.log1p(-probability)
    bias = np.log((class_counts + alpha) / (len(labels) + alpha * classes))
    bias += np.log1p(-probability).sum(axis=1)
    return weights.astype(np.float32), bias.astype(np.float32)


def fit_centroid(features: np.ndarray, labels: np.ndarray, classes: int):
    lengths = np.linalg.norm(features, axis=1, keepdims=True)
    normalized = features / np.maximum(lengths, 1.0)
    weights = np.stack([normalized[labels == label].mean(axis=0) for label in range(classes)])
    weights /= np.maximum(np.linalg.norm(weights, axis=1, keepdims=True), 1e-12)
    return weights.astype(np.float32), np.zeros(classes, dtype=np.float32)


METHODS: dict[str, Callable[[np.ndarray, np.ndarray, int], tuple[np.ndarray, np.ndarray]]] = {
    "multinomial": fit_multinomial,
    "bernoulli": fit_bernoulli,
    "centroid": fit_centroid,
}


def main() -> None:
    intents = load_intents(ROOT / "intents.json")
    records = load_jsonl(ROOT / "data/manual_seeds.jsonl")
    validate(intents, records, minimum=10)
    label_to_id = {intent["label"]: intent["id"] for intent in intents}
    seeds = [20260715, 20260716, 20260717, 20260718, 20260719]
    synthetic_records = generate_records(intents, records)

    for feature_dim in [512, 1024, 2048, 4096]:
        results = {name: [] for name in METHODS}
        quantized_results = {name: [] for name in METHODS}
        resolved_results = {name: [] for name in METHODS}
        for seed in seeds:
            train_records, _, test_records = split_records(records, label_to_id, seed)
            expanded_train = [*augment_train(train_records), *synthetic_records]
            train_x, train_y = arrays(expanded_train, label_to_id, feature_dim)
            test_x, test_y = arrays(test_records, label_to_id, feature_dim)
            for name, fit in METHODS.items():
                weights, bias = fit(train_x, train_y, len(intents))
                logits = test_x @ weights.T + bias
                q8_logits = q8_matmul(test_x, weights) + bias
                results[name].append(accuracy(logits, test_y))
                quantized_results[name].append(accuracy(q8_logits, test_y))
                resolved = np.asarray(
                    [
                        resolve_intent(record["text"], score, label_to_id)
                        for record, score in zip(test_records, q8_logits)
                    ]
                )
                resolved_results[name].append(float(np.mean(resolved == test_y)))

        for name in METHODS:
            values = np.asarray(results[name])
            q8_values = np.asarray(quantized_results[name])
            resolved_values = np.asarray(resolved_results[name])
            model_bytes = 24 + feature_dim * len(intents) * 2 + len(intents) * 2
            print(
                f"dim={feature_dim:4d} method={name:<11} bytes={model_bytes:6d} "
                f"float_mean={values.mean():.3f} float_min={values.min():.3f} "
                f"q8_mean={q8_values.mean():.3f} q8_min={q8_values.min():.3f} "
                f"resolved_mean={resolved_values.mean():.3f} resolved_min={resolved_values.min():.3f}"
            )

    train_records, _, test_records = split_records(records, label_to_id, seeds[0])
    train_x, train_y = arrays(
        [*augment_train(train_records), *synthetic_records], label_to_id, 4096
    )
    test_x, test_y = arrays(test_records, label_to_id, 4096)
    weights, bias = fit_centroid(train_x, train_y, len(intents))
    q8_logits = q8_matmul(test_x, weights) + bias
    predictions = np.asarray(
        [
            resolve_intent(record["text"], score, label_to_id)
            for record, score in zip(test_records, q8_logits)
        ]
    )
    print("best_primary_split_errors:")
    for record, expected, predicted in zip(test_records, test_y, predictions):
        if expected != predicted:
            print(
                f"  expected={intents[int(expected)]['label']:<24} "
                f"actual={intents[int(predicted)]['label']:<24} text={record['text']}"
            )

    print("candidate_2048_centroid_errors:")
    for seed in seeds:
        train_records, _, test_records = split_records(records, label_to_id, seed)
        train_x, train_y = arrays(
            [*augment_train(train_records), *synthetic_records], label_to_id, 2048
        )
        test_x, test_y = arrays(test_records, label_to_id, 2048)
        weights, bias = fit_centroid(train_x, train_y, len(intents))
        q8_logits = q8_matmul(test_x, weights) + bias
        predictions = np.asarray(
            [
                resolve_intent(record["text"], score, label_to_id)
                for record, score in zip(test_records, q8_logits)
            ]
        )
        for record, expected, predicted in zip(test_records, test_y, predictions):
            if expected != predicted:
                print(
                    f"  seed={seed} expected={intents[int(expected)]['label']:<24} "
                    f"actual={intents[int(predicted)]['label']:<24} text={record['text']}"
                )


if __name__ == "__main__":
    main()
