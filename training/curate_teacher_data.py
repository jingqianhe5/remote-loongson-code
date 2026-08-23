#!/usr/bin/env python3
"""Remove generated records that fail the conservative semantic gate."""

from __future__ import annotations

import argparse
import json
from collections import Counter
from pathlib import Path

from validate_dataset import load_intents, load_jsonl
from validate_teacher_data import teacher_phrase_error, validate_teacher_records


ROOT = Path(__file__).resolve().parent


def write_records(path: Path, records: list[dict]) -> None:
    temporary = path.with_suffix(path.suffix + ".tmp")
    with temporary.open("w", encoding="utf-8") as target:
        for record in records:
            target.write(json.dumps({"text": record["text"], "label": record["label"]}, ensure_ascii=False))
            target.write("\n")
    temporary.replace(path)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--intents", type=Path, default=ROOT / "intents.json")
    parser.add_argument("--manual", type=Path, default=ROOT / "data/manual_seeds.jsonl")
    parser.add_argument("--teacher", type=Path, default=ROOT / "data/teacher_distilled.jsonl")
    args = parser.parse_args()

    intents = load_intents(args.intents)
    manual = load_jsonl(args.manual)
    records = load_jsonl(args.teacher)
    kept = []
    rejected = Counter()
    for record in records:
        reason = teacher_phrase_error(record["label"], record["text"])
        if reason is None:
            kept.append(record)
        else:
            rejected[(record["label"], reason)] += 1
            print(f"reject label={record['label']} reason={reason} text={record['text']}")

    write_records(args.teacher, kept)
    counts = validate_teacher_records(intents, kept, manual)
    print(f"PASS kept={len(kept)} rejected={len(records) - len(kept)} labels={len(counts)}")
    for (label, reason), count in sorted(rejected.items()):
        print(f"  {label:<20} {reason:<28} {count}")


if __name__ == "__main__":
    main()
