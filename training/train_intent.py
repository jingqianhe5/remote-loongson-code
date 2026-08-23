#!/usr/bin/env python3
"""Train and export the small ISP command classifier using only NumPy."""

from __future__ import annotations

import argparse
import json
import struct
from collections import defaultdict
from pathlib import Path

import numpy as np

from generate_synthetic import generate_records
from isp_features import FEATURE_DIM as DEFAULT_FEATURE_DIM
from isp_features import NGRAM_MAX, NGRAM_MIN, normalize_text, texts_to_features
from validate_dataset import load_intents, load_jsonl, validate


ROOT = Path(__file__).resolve().parent
HIDDEN_DIM = 64
MODEL_MAGIC = b"ISPC"
MODEL_VERSION = 1


def split_records(records: list[dict], label_to_id: dict[str, int], seed: int):
    grouped: dict[int, list[dict]] = defaultdict(list)
    for record in records:
        grouped[label_to_id[record["label"]]].append(record)

    rng = np.random.default_rng(seed)
    train, validation, test = [], [], []
    for label_id in sorted(grouped):
        group = grouped[label_id]
        order = rng.permutation(len(group))
        shuffled = [group[index] for index in order]
        test.extend(shuffled[:2])
        validation.extend(shuffled[2:3])
        train.extend(shuffled[3:])
    return train, validation, test


def augmented_variants(text: str, label: str) -> list[str]:
    if label == "CHAT_HELLO":
        return [f"{text}呀", f"嗨，{text}"]
    if label in {"CHAT_NAME", "CHAT_HELP"}:
        return [f"请问{text}", f"能告诉我{text}"]
    if label == "QUERY_STATUS":
        return [f"请{text}", f"我想知道{text}"]
    if label == "UNKNOWN":
        return [f"请{text}", f"{text}可以吗"]
    return [f"请{text}", f"{text}可以吗"]


def augment_train(records: list[dict]) -> list[dict]:
    output: dict[tuple[str, str], dict] = {}
    for record in records:
        candidates = [record["text"], *augmented_variants(record["text"], record["label"])]
        for text in candidates:
            key = (normalize_text(text), record["label"])
            output[key] = {"text": text, "label": record["label"]}
    return list(output.values())


def records_to_arrays(records: list[dict], label_to_id: dict[str, int], feature_dim: int):
    texts = [record["text"] for record in records]
    features = texts_to_features(texts, feature_dim)
    labels = np.asarray([label_to_id[record["label"]] for record in records], dtype=np.int64)
    return features, labels, texts


def softmax_cross_entropy(logits: np.ndarray, labels: np.ndarray, smoothing: float = 0.02):
    shifted = logits - logits.max(axis=1, keepdims=True)
    probabilities = np.exp(shifted)
    probabilities /= probabilities.sum(axis=1, keepdims=True)
    classes = logits.shape[1]
    targets = np.full_like(probabilities, smoothing / classes)
    targets[np.arange(len(labels)), labels] += 1.0 - smoothing
    loss = -np.sum(targets * np.log(probabilities + 1e-12)) / len(labels)
    gradient = (probabilities - targets) / len(labels)
    return float(loss), gradient


def forward(features: np.ndarray, parameters: dict[str, np.ndarray]):
    hidden_pre = features @ parameters["w1"].T + parameters["b1"]
    hidden = np.maximum(hidden_pre, 0.0)
    logits = hidden @ parameters["w2"].T + parameters["b2"]
    return hidden_pre, hidden, logits


def accuracy(logits: np.ndarray, labels: np.ndarray) -> float:
    return float(np.mean(np.argmax(logits, axis=1) == labels))


def evaluate_float(features: np.ndarray, labels: np.ndarray, parameters: dict[str, np.ndarray]):
    _, _, logits = forward(features, parameters)
    loss, _ = softmax_cross_entropy(logits, labels, smoothing=0.0)
    return loss, accuracy(logits, labels), logits


def quantize_q8_8(values: np.ndarray) -> np.ndarray:
    magnitude = np.floor(np.abs(values.astype(np.float64)) * 256.0 + 0.5)
    signed = np.where(values < 0, -magnitude, magnitude)
    return np.clip(signed, -32768, 32767).astype(np.int16)


def _round_accumulator(accumulator: np.ndarray) -> np.ndarray:
    magnitude = np.abs(accumulator)
    rounded = (magnitude + 128) >> 8
    rounded = np.where(accumulator < 0, -rounded, rounded)
    return np.clip(rounded, -32768, 32767).astype(np.int16)


def q8_matmul(features: np.ndarray, weights: np.ndarray) -> np.ndarray:
    features_q = quantize_q8_8(features).astype(np.int64)
    weights_q = quantize_q8_8(weights).astype(np.int64)
    output = np.zeros((features.shape[0], weights.shape[0]), dtype=np.float32)
    for start in range(0, features.shape[1], 64):
        stop = min(start + 64, features.shape[1])
        accumulator = features_q[:, start:stop] @ weights_q[:, start:stop].T
        output += _round_accumulator(accumulator).astype(np.float32) / 256.0
    return output


def evaluate_q8(features: np.ndarray, labels: np.ndarray, parameters: dict[str, np.ndarray]):
    hidden = np.maximum(q8_matmul(features, parameters["w1"]) + parameters["b1"], 0.0)
    logits = q8_matmul(hidden, parameters["w2"]) + parameters["b2"]
    return accuracy(logits, labels), logits


def train_model(
    train_x: np.ndarray,
    train_y: np.ndarray,
    validation_x: np.ndarray,
    validation_y: np.ndarray,
    classes: int,
    seed: int,
    epochs: int,
    batch_size: int,
    learning_rate: float,
):
    rng = np.random.default_rng(seed)
    parameters = {
        "w1": (
            rng.standard_normal((HIDDEN_DIM, train_x.shape[1]))
            * np.sqrt(2.0 / train_x.shape[1])
        ).astype(np.float32),
        "b1": np.zeros(HIDDEN_DIM, dtype=np.float32),
        "w2": (rng.standard_normal((classes, HIDDEN_DIM)) * np.sqrt(2.0 / HIDDEN_DIM)).astype(np.float32),
        "b2": np.zeros(classes, dtype=np.float32),
    }
    first = {name: np.zeros_like(value) for name, value in parameters.items()}
    second = {name: np.zeros_like(value) for name, value in parameters.items()}
    best = {name: value.copy() for name, value in parameters.items()}
    best_key = (-1.0, float("-inf"))
    stale_epochs = 0
    step = 0

    for epoch in range(1, epochs + 1):
        for start in range(0, len(train_y), batch_size):
            if start == 0:
                order = rng.permutation(len(train_y))
                epoch_x = train_x[order]
                epoch_y = train_y[order]
            batch_x = epoch_x[start : start + batch_size]
            batch_y = epoch_y[start : start + batch_size]
            hidden_pre, hidden, logits = forward(batch_x, parameters)
            _, grad_logits = softmax_cross_entropy(logits, batch_y)

            gradients = {}
            gradients["w2"] = grad_logits.T @ hidden + 1e-4 * parameters["w2"]
            gradients["b2"] = grad_logits.sum(axis=0)
            grad_hidden = grad_logits @ parameters["w2"]
            grad_hidden[hidden_pre <= 0.0] = 0.0
            gradients["w1"] = grad_hidden.T @ batch_x + 1e-4 * parameters["w1"]
            gradients["b1"] = grad_hidden.sum(axis=0)

            step += 1
            for name in parameters:
                first[name] = 0.9 * first[name] + 0.1 * gradients[name]
                second[name] = 0.999 * second[name] + 0.001 * (gradients[name] ** 2)
                first_hat = first[name] / (1.0 - 0.9**step)
                second_hat = second[name] / (1.0 - 0.999**step)
                parameters[name] -= learning_rate * first_hat / (np.sqrt(second_hat) + 1e-8)

        validation_loss, validation_accuracy, _ = evaluate_float(
            validation_x, validation_y, parameters
        )
        key = (validation_accuracy, -validation_loss)
        if key > best_key:
            best_key = key
            best = {name: value.copy() for name, value in parameters.items()}
            stale_epochs = 0
        else:
            stale_epochs += 1

        if epoch == 1 or epoch % 25 == 0:
            train_loss, train_accuracy, _ = evaluate_float(train_x, train_y, parameters)
            print(
                f"epoch={epoch:3d} train_loss={train_loss:.4f} "
                f"train_acc={train_accuracy:.3f} val_loss={validation_loss:.4f} "
                f"val_acc={validation_accuracy:.3f}"
            )
        if stale_epochs >= 80:
            print(f"early_stop epoch={epoch} best_val_acc={best_key[0]:.3f}")
            break
    return best


def report_errors(name: str, logits: np.ndarray, labels: np.ndarray, texts: list[str], intents: list[dict]):
    predicted = np.argmax(logits, axis=1)
    errors = np.flatnonzero(predicted != labels)
    print(f"{name}_errors={len(errors)}/{len(labels)}")
    for index in errors[:20]:
        expected = intents[int(labels[index])]["label"]
        actual = intents[int(predicted[index])]["label"]
        print(f"  expected={expected:<24} actual={actual:<24} text={texts[index]}")


def export_model(output: Path, parameters: dict[str, np.ndarray], intents: list[dict], metrics: dict):
    output.mkdir(parents=True, exist_ok=True)
    np.savez(output / "intent_model_fp32.npz", **parameters)
    feature_dim = parameters["w1"].shape[1]

    header = struct.pack(
        "<4s6I",
        MODEL_MAGIC,
        MODEL_VERSION,
        feature_dim,
        HIDDEN_DIM,
        len(intents),
        NGRAM_MIN,
        NGRAM_MAX,
    )
    with (output / "intent_model_q8_8.bin").open("wb") as target:
        target.write(header)
        target.write(quantize_q8_8(parameters["w1"]).astype("<i2").tobytes())
        target.write(parameters["b1"].astype("<f4").tobytes())
        target.write(quantize_q8_8(parameters["w2"]).astype("<i2").tobytes())
        target.write(parameters["b2"].astype("<f4").tobytes())

    manifest = {
        "format": "isp-intent-q8.8-v1",
        "feature_dim": feature_dim,
        "hidden_dim": HIDDEN_DIM,
        "ngram_range": [NGRAM_MIN, NGRAM_MAX],
        "labels": [{"id": item["id"], "label": item["label"]} for item in intents],
        "metrics": metrics,
    }
    with (output / "intent_model_manifest.json").open("w", encoding="utf-8") as target:
        json.dump(manifest, target, ensure_ascii=False, indent=2)
        target.write("\n")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--intents", type=Path, default=ROOT / "intents.json")
    parser.add_argument("--data", type=Path, default=ROOT / "data/manual_seeds.jsonl")
    parser.add_argument("--output", type=Path, default=ROOT / "out")
    parser.add_argument("--seed", type=int, default=20260715)
    parser.add_argument("--epochs", type=int, default=500)
    parser.add_argument("--batch-size", type=int, default=128)
    parser.add_argument("--learning-rate", type=float, default=0.01)
    parser.add_argument("--feature-dim", type=int, default=2048)
    args = parser.parse_args()

    intents = load_intents(args.intents)
    records = load_jsonl(args.data)
    validate(intents, records, minimum=10)
    if args.feature_dim <= 0 or args.feature_dim & (args.feature_dim - 1):
        raise ValueError("feature-dim must be a positive power of two")
    label_to_id = {intent["label"]: intent["id"] for intent in intents}
    train_records, validation_records, test_records = split_records(records, label_to_id, args.seed)
    synthetic_records = generate_records(intents, records)
    augmented_train = [*augment_train(train_records), *synthetic_records]
    train_x, train_y, _ = records_to_arrays(augmented_train, label_to_id, args.feature_dim)
    validation_x, validation_y, _ = records_to_arrays(
        validation_records, label_to_id, args.feature_dim
    )
    test_x, test_y, test_texts = records_to_arrays(test_records, label_to_id, args.feature_dim)
    print(
        f"split train_manual={len(train_records)} train_augmented={len(augmented_train)} "
        f"validation={len(validation_records)} test={len(test_records)}"
    )

    parameters = train_model(
        train_x,
        train_y,
        validation_x,
        validation_y,
        len(intents),
        args.seed,
        args.epochs,
        args.batch_size,
        args.learning_rate,
    )
    _, float_validation_accuracy, _ = evaluate_float(validation_x, validation_y, parameters)
    _, float_test_accuracy, float_test_logits = evaluate_float(test_x, test_y, parameters)
    q8_validation_accuracy, _ = evaluate_q8(validation_x, validation_y, parameters)
    q8_test_accuracy, q8_test_logits = evaluate_q8(test_x, test_y, parameters)
    print(
        f"RESULT float_val={float_validation_accuracy:.3f} float_test={float_test_accuracy:.3f} "
        f"q8_val={q8_validation_accuracy:.3f} q8_test={q8_test_accuracy:.3f}"
    )
    report_errors("float_test", float_test_logits, test_y, test_texts, intents)
    report_errors("q8_test", q8_test_logits, test_y, test_texts, intents)

    metrics = {
        "seed": args.seed,
        "manual_records": len(records),
        "train_records": len(augmented_train),
        "validation_records": len(validation_records),
        "test_records": len(test_records),
        "float_validation_accuracy": float_validation_accuracy,
        "float_test_accuracy": float_test_accuracy,
        "q8_validation_accuracy": q8_validation_accuracy,
        "q8_test_accuracy": q8_test_accuracy,
    }
    export_model(args.output, parameters, intents, metrics)
    print(f"exported={args.output}")


if __name__ == "__main__":
    main()
