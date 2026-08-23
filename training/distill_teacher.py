#!/usr/bin/env python3
"""Generate label-constrained Chinese intent data with a local LLM teacher."""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import subprocess
import time
import urllib.error
import urllib.request
from collections import Counter, defaultdict
from contextlib import contextmanager
from datetime import datetime, timezone
from pathlib import Path

from intent_resolver import match_keywords
from isp_features import normalize_text
from validate_dataset import load_intents, load_jsonl
from validate_teacher_data import teacher_phrase_error, validate_teacher_records


ROOT = Path(__file__).resolve().parent
DEFAULT_MODEL = ROOT / "models/qwen2.5-1.5b-instruct-q4_k_m.gguf"
DEFAULT_SERVER = ROOT / "tools/llama-b10019/llama-server"
DEFAULT_OUTPUT = ROOT / "data/teacher_distilled.jsonl"

LABEL_RULES = {
    "UNKNOWN": "与 ISP 图像调整无关，且不是问候、身份或功能询问，例如天气、音乐、音量、文件和普通闲聊。",
    "NOOP": "明确要求保持当前画面不变、取消操作或暂时不要处理。",
    "CHAT_HELLO": "只表达简短问候、打招呼或询问是否在线。",
    "BRIGHT_UP": "觉得画面黑、暗、亮度不足，或要求提亮、增加亮度。黑和暗都属于此类。",
    "BRIGHT_DOWN": "觉得画面太亮、刺眼、过曝，或要求调暗、降低亮度。",
    "CONTRAST_UP": "觉得明暗层次弱、发灰或要求提高对比度。",
    "CONTRAST_DOWN": "觉得反差太强、生硬或要求降低对比度。",
    "FILTER_ON": "画面有噪点、颗粒，或要求开启滤波、降噪、去噪。不要混入模糊或锐化诉求。",
    "FILTER_OFF": "要求关闭滤波或降噪、保留未滤波细节。",
    "SHARPEN_ON": "画面模糊、轮廓虚，或要求锐化、变清晰。不是边缘检测。",
    "SHARPEN_OFF": "锐化过强、有光晕，或要求关闭锐化。",
    "GRAY_ON": "要求切换成灰度、灰阶或普通黑白图像。不是二值化。",
    "GRAY_OFF": "要求退出灰度并恢复彩色；只关闭灰度，不重置其他参数。",
    "EDGE_DETECT_ON": "要求检测、提取或只显示物体边缘和轮廓。不是普通锐化。",
    "EDGE_DETECT_OFF": "要求关闭边缘检测并退出只看轮廓的显示。",
    "RESET_ISP": "要求恢复原图、初始状态或重置全部 ISP 参数。",
    "REPEAT_LAST": "要求重复、继续或再执行一次上一个图像调整动作。",
    "QUERY_STATUS": "询问当前亮度、对比度、已开启功能或全部 ISP 配置，不要求修改。",
    "BINARIZE_ON": "要求开启二值化、阈值分割或两级黑白输出。不是普通灰度。",
    "BINARIZE_OFF": "要求关闭二值化或阈值分割。",
    "GAMMA_ON": "明确要求开启 Gamma/伽马/灰度响应校正。",
    "GAMMA_OFF": "明确要求关闭 Gamma/伽马校正。",
    "CHAT_NAME": "询问助手是谁、是什么、叫什么或要求自我介绍。",
    "CHAT_HELP": "询问助手能做什么、支持哪些 ISP 图像功能或有哪些可用操作。",
}


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as source:
        for chunk in iter(lambda: source.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def request_json(url: str, payload: dict, timeout: float) -> dict:
    request = urllib.request.Request(
        url,
        data=json.dumps(payload, ensure_ascii=False).encode("utf-8"),
        headers={"Content-Type": "application/json", "Connection": "close"},
        method="POST",
    )
    with urllib.request.urlopen(request, timeout=timeout) as response:
        return json.load(response)


def wait_for_server(base_url: str, process: subprocess.Popen | None, timeout: float) -> None:
    deadline = time.monotonic() + timeout
    health_url = f"{base_url}/health"
    while time.monotonic() < deadline:
        if process is not None and process.poll() is not None:
            raise RuntimeError(f"teacher server exited with code {process.returncode}")
        try:
            with urllib.request.urlopen(health_url, timeout=2) as response:
                if response.status == 200:
                    return
        except (OSError, urllib.error.HTTPError):
            pass
        time.sleep(1)
    raise TimeoutError(f"teacher server was not ready after {timeout:.0f}s")


@contextmanager
def local_server(args):
    args.log.parent.mkdir(parents=True, exist_ok=True)
    with args.log.open("w", encoding="utf-8") as log:
        command = [
            str(args.server),
            "--model", str(args.model),
            "--alias", "qwen-teacher",
            "--host", "127.0.0.1",
            "--port", str(args.port),
            "--ctx-size", str(args.context),
            "--batch-size", "512",
            "--ubatch-size", "256",
            "--gpu-layers", "all",
            "--device", args.device,
            "--parallel", "1",
            "--threads", str(args.threads),
            "--reasoning", "off",
            "--no-webui",
            "--offline",
        ]
        process = subprocess.Popen(command, stdout=log, stderr=subprocess.STDOUT)
        try:
            wait_for_server(args.server_url, process, args.startup_timeout)
            yield process
        finally:
            process.terminate()
            try:
                process.wait(timeout=10)
            except subprocess.TimeoutExpired:
                process.kill()
                process.wait()


def parse_phrases(content: str) -> list[str]:
    stripped = content.strip()
    if stripped.startswith("```"):
        lines = stripped.splitlines()
        stripped = "\n".join(lines[1:-1]).strip()
    candidates = [stripped]
    for opening, closing in (("{", "}"), ("[", "]")):
        start = stripped.find(opening)
        stop = stripped.rfind(closing)
        if start >= 0 and stop > start:
            candidates.append(stripped[start : stop + 1])
    for candidate in candidates:
        try:
            document = json.loads(candidate)
        except json.JSONDecodeError:
            continue
        phrases = document.get("phrases") if isinstance(document, dict) else document
        if isinstance(phrases, list) and all(isinstance(item, str) for item in phrases):
            return phrases
    raise ValueError("teacher response does not contain a JSON phrase array")


def build_prompt(intent: dict, examples: list[str], count: int) -> str:
    quoted_examples = "、".join(f"“{text}”" for text in examples)
    return f"""请为小型 ISP 意图分类器生成 {count} 条中文用户输入。

固定目标类别：{intent['label']}
类别边界：{LABEL_RULES[intent['label']]}
已有正例：{quoted_examples}

要求：
1. 每条只表达目标类别，不混合第二个操作，也不要生成助手回答。
2. 使用自然中文，覆盖口语短句、完整请求、带上下文描述的说法和少量标点/空格变化。
3. 不复制已有正例；不同句子的语义和措辞要有明显变化。
4. 图像中的“黑/暗”表示需要提亮；“亮/刺眼”表示需要调暗；“原图”表示重置全部参数。
5. 严格输出 JSON：{{"phrases":["句子1","句子2"]}}，不要 Markdown、标签或解释。"""


def write_records(path: Path, records: list[dict]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    temporary = path.with_suffix(path.suffix + ".tmp")
    with temporary.open("w", encoding="utf-8") as target:
        for record in records:
            target.write(json.dumps({"text": record["text"], "label": record["label"]}, ensure_ascii=False))
            target.write("\n")
    temporary.replace(path)


def generate(args) -> None:
    intents = load_intents(args.intents)
    manual = load_jsonl(args.manual)
    label_to_id = {intent["label"]: intent["id"] for intent in intents}
    requested_labels = set(args.labels) if args.labels else set(label_to_id)
    unknown = requested_labels - set(label_to_id)
    if unknown:
        raise ValueError(f"unknown requested labels: {sorted(unknown)}")

    existing = load_jsonl(args.output) if args.output.exists() else []
    validate_teacher_records(intents, existing, manual)
    records = [{"text": item["text"], "label": item["label"]} for item in existing]
    by_label: dict[str, list[str]] = defaultdict(list)
    seen = {normalize_text(record["text"]) for record in manual}
    for record in records:
        by_label[record["label"]].append(record["text"])
        seen.add(normalize_text(record["text"]))

    manual_examples: dict[str, list[str]] = defaultdict(list)
    for record in manual:
        manual_examples[record["label"]].append(record["text"])
    args.raw_dir.mkdir(parents=True, exist_ok=True)

    for intent in intents:
        label = intent["label"]
        if label not in requested_labels:
            continue
        print(f"label={label} existing={len(by_label[label])} target={args.per_label}", flush=True)
        for attempt in range(1, args.max_attempts + 1):
            remaining = args.per_label - len(by_label[label])
            if remaining <= 0:
                break
            request_count = min(48, remaining + 12)
            examples = [*manual_examples[label][:8], *by_label[label][-12:]]
            prompt = build_prompt(intent, examples, request_count)
            payload = {
                "model": "qwen-teacher",
                "messages": [
                    {
                        "role": "system",
                        "content": "你是严谨的中文训练数据蒸馏教师，只输出用户要求的 JSON。",
                    },
                    {"role": "user", "content": prompt},
                ],
                "temperature": args.temperature,
                "top_p": 0.9,
                "seed": args.seed + intent["id"] * 101 + attempt,
                "max_tokens": args.max_tokens,
                "stream": False,
            }
            response = request_json(
                f"{args.server_url}/v1/chat/completions", payload, args.request_timeout
            )
            content = response["choices"][0]["message"]["content"]
            raw_path = args.raw_dir / f"{intent['id']:02d}_{label}_{attempt}.json"
            with raw_path.open("w", encoding="utf-8") as target:
                json.dump(
                    {"request": payload, "response": response},
                    target,
                    ensure_ascii=False,
                    indent=2,
                )
                target.write("\n")
            try:
                candidates = parse_phrases(content)
            except ValueError as error:
                print(f"  attempt={attempt} parse_error={error}", flush=True)
                continue

            accepted = 0
            rejected = Counter()
            for text in candidates:
                text = text.strip()
                normalized = normalize_text(text)
                if not normalized or len(text) > args.max_chars:
                    rejected["length"] += 1
                    continue
                if normalized in seen:
                    rejected["duplicate"] += 1
                    continue
                keyword_id = match_keywords(normalized, label_to_id)
                if keyword_id is not None and keyword_id != label_to_id[label]:
                    rejected["keyword_conflict"] += 1
                    continue
                quality_error = teacher_phrase_error(label, normalized)
                if quality_error is not None:
                    rejected[f"semantic_{quality_error}"] += 1
                    continue
                records.append({"text": text, "label": label})
                by_label[label].append(text)
                seen.add(normalized)
                accepted += 1
                if len(by_label[label]) >= args.per_label:
                    break
            write_records(args.output, records)
            print(
                f"  attempt={attempt} candidates={len(candidates)} accepted={accepted} "
                f"total={len(by_label[label])} rejected={dict(rejected)}",
                flush=True,
            )
        if len(by_label[label]) < args.per_label:
            raise RuntimeError(
                f"{label}: generated {len(by_label[label])}, expected {args.per_label}; "
                f"partial data preserved at {args.output}"
            )

    if not args.labels:
        counts = validate_teacher_records(intents, records, manual)
        missing = [label for label in label_to_id if counts[label] < args.per_label]
        if missing:
            raise RuntimeError(f"incomplete teacher dataset: {missing}")
        metadata = {
            "generated_at": datetime.now(timezone.utc).isoformat(),
            "teacher_config": json.loads(args.teacher_config.read_text(encoding="utf-8")),
            "generation": {
                "records": len(records),
                "per_label": args.per_label,
                "seed": args.seed,
                "temperature": args.temperature,
                "max_tokens": args.max_tokens,
                "device": args.device,
                "quality_filter": "teacher_phrase_error_v1",
            },
            "dataset_sha256": sha256_file(args.output),
        }
        args.metadata.write_text(
            json.dumps(metadata, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
        print(f"PASS distilled_records={len(records)} labels={len(counts)} output={args.output}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--intents", type=Path, default=ROOT / "intents.json")
    parser.add_argument("--manual", type=Path, default=ROOT / "data/manual_seeds.jsonl")
    parser.add_argument("--output", type=Path, default=DEFAULT_OUTPUT)
    parser.add_argument(
        "--metadata", type=Path, default=ROOT / "data/teacher_distilled.meta.json"
    )
    parser.add_argument("--teacher-config", type=Path, default=ROOT / "teacher_model.json")
    parser.add_argument("--model", type=Path, default=DEFAULT_MODEL)
    parser.add_argument("--server", type=Path, default=DEFAULT_SERVER)
    parser.add_argument("--server-url")
    parser.add_argument("--port", type=int, default=18080)
    parser.add_argument("--device", default="Vulkan0")
    parser.add_argument("--context", type=int, default=4096)
    parser.add_argument("--threads", type=int, default=max(1, min(8, (os.cpu_count() or 2) // 2)))
    parser.add_argument("--per-label", type=int, default=20)
    parser.add_argument("--labels", nargs="*")
    parser.add_argument("--max-attempts", type=int, default=12)
    parser.add_argument("--max-tokens", type=int, default=768)
    parser.add_argument("--max-chars", type=int, default=96)
    parser.add_argument("--temperature", type=float, default=0.75)
    parser.add_argument("--seed", type=int, default=20260715)
    parser.add_argument("--startup-timeout", type=float, default=180.0)
    parser.add_argument("--request-timeout", type=float, default=300.0)
    parser.add_argument("--log", type=Path, default=ROOT / "logs/teacher_server.log")
    parser.add_argument("--raw-dir", type=Path, default=ROOT / "logs/teacher_responses")
    args = parser.parse_args()

    if args.per_label < 1:
        raise ValueError("per-label must be positive")
    if args.server_url:
        args.server_url = args.server_url.rstrip("/")
        wait_for_server(args.server_url, None, args.startup_timeout)
        generate(args)
        return
    args.server_url = f"http://127.0.0.1:{args.port}"
    if not args.model.is_file() or not args.server.is_file():
        raise FileNotFoundError("run training/setup_teacher.sh first")
    with local_server(args):
        generate(args)


if __name__ == "__main__":
    main()
