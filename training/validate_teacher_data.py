#!/usr/bin/env python3
"""Validate teacher-generated records before student training."""

from __future__ import annotations

import argparse
from collections import Counter
from pathlib import Path

from intent_resolver import match_keywords
from isp_features import normalize_text
from validate_dataset import load_intents, load_jsonl, validate


ROOT = Path(__file__).resolve().parent


def _has(text: str, words: tuple[str, ...]) -> bool:
    return any(word in text for word in words)


def teacher_phrase_error(label: str, text: str) -> str | None:
    """Return a conservative semantic-quality rejection reason."""
    normalized = normalize_text(text)
    off = ("关闭", "关掉", "取消", "停止", "停用", "退出", "不要", "不需要")
    reset = ("原图", "默认", "初始", "重置", "清除所有", "恢复所有")

    if label == "UNKNOWN":
        bounded = (
            "亮度", "提亮", "调亮", "增亮", "调暗", "对比", "滤波", "降噪", "去噪",
            "噪点", "噪声", "颗粒", "锐化", "清晰度", "灰度", "灰阶", "彩色", "黑白",
            "边缘", "轮廓", "二值", "阈值", "gamma", "伽马", "原图", "默认设置",
            "初始状态", "再来一次", "上次", "当前参数", "你能做", "你是谁", "你叫什么",
            "你好", "您好", "哈喽",
        )
        return "bounded_intent" if _has(normalized, bounded) else None
    if label == "NOOP":
        required = ("不要", "别", "停止", "保持", "维持", "不变", "暂停", "不用", "算了", "别动", "不修改")
        return None if _has(normalized, required) else "missing_noop"
    if label == "CHAT_HELLO":
        required = (
            "你好", "您好", "嗨", "哈喽", "早上好", "下午好", "晚上好", "在吗", "在线吗",
            "能听", "见到你",
        )
        return None if _has(normalized, required) else "missing_greeting"
    if label == "BRIGHT_UP":
        if _has(normalized, ("不要", "不需要", "不用", "保持", "原图")):
            return "negated_or_reset"
        direct = ("提亮", "调亮", "增亮", "拉亮", "亮一点", "更亮", "不够亮", "亮度不足", "亮度低")
        dark_state = ("偏暗", "太暗", "有点暗", "好暗", "很暗", "太黑", "有点黑", "好黑", "很黑", "发黑")
        directed = "亮度" in normalized and _has(normalized, ("提高", "增加", "调高", "上调", "拉高", "提升", "提上"))
        return None if _has(normalized, direct + dark_state) or directed else "missing_brightness_up"
    if label == "BRIGHT_DOWN":
        if _has(normalized, ("不要", "不需要", "不用", "保持", "原图")):
            return "negated_or_reset"
        direct = ("调暗", "压暗", "暗一点", "暗一些", "太亮", "有点亮", "过亮", "亮度过高", "亮度高", "刺眼", "稍降")
        directed = "亮度" in normalized and _has(normalized, ("降低", "减小", "调低", "下降", "降一点", "压低"))
        return None if _has(normalized, direct) or directed else "missing_brightness_down"
    if label == "CONTRAST_UP":
        if _has(normalized, ("降低对比", "调低对比", "原图")):
            return "opposite_or_reset"
        subject = ("对比", "反差", "明暗", "层次")
        direction = ("提高", "增强", "增加", "调高", "拉高", "加一点", "分明")
        return None if _has(normalized, subject) and _has(normalized, direction) else "missing_contrast_up"
    if label == "CONTRAST_DOWN":
        if _has(normalized, ("提高对比", "增强对比", "原图")):
            return "opposite_or_reset"
        subject = ("对比", "反差", "明暗", "层次", "暗部", "亮部")
        direction = ("降低", "减弱", "减小", "调低", "降", "小一些", "柔和")
        return None if _has(normalized, subject) and _has(normalized, direction) else "missing_contrast_down"
    if label == "FILTER_ON":
        required = ("滤波", "降噪", "去噪", "噪点", "噪声", "颗粒", "杂点", "平滑")
        if _has(normalized, off + ("调暗", "提亮", "亮度")):
            return "off_or_mixed_operation"
        return None if _has(normalized, required) else "missing_filter"
    if label == "FILTER_OFF":
        required = ("滤波", "降噪", "去噪", "未降噪")
        if not _has(normalized, required):
            return "missing_filter"
        return None if _has(normalized, off + ("未降噪",)) else "missing_off"
    if label == "SHARPEN_ON":
        required = ("锐化", "锐度", "清晰", "清楚", "模糊", "偏软", "发虚", "轮廓有点糊", "边缘加强", "边缘增强")
        forbidden = off + reset + ("亮度", "检测", "提取", "只显示")
        if _has(normalized, forbidden):
            return "off_reset_or_mixed_operation"
        return None if _has(normalized, required) else "missing_sharpen"
    if label == "SHARPEN_OFF":
        required = ("锐化", "太锐", "锋利", "光晕", "生硬")
        if not _has(normalized, required):
            return "missing_sharpen"
        return None if _has(normalized, off + ("过头", "过强", "太强")) else "missing_off"
    if label == "GRAY_ON":
        required = ("灰度", "灰阶", "黑白", "去掉颜色", "去色", "不要彩色")
        forbidden = (
            "默认", "初始", "重置", "清除所有", "恢复所有", "原色", "恢复原图", "原图恢复",
            "恢复到原色", "调亮", "调暗", "显示黑", "显示亮", "显示暗",
        )
        if _has(normalized, forbidden):
            return "reset_or_brightness_mix"
        return None if _has(normalized, required + ("颜色去掉",)) else "missing_gray"
    if label == "GRAY_OFF":
        required = ("彩色", "颜色", "关闭灰度", "取消黑白", "去除灰阶")
        if _has(normalized, ("所有参数", "恢复所有", "重置", "原图")):
            return "full_reset_mix"
        return None if _has(normalized, required) else "missing_color_restore"
    if label == "EDGE_DETECT_ON":
        subject = ("边缘", "轮廓", "边界")
        action = ("检测", "提取", "显示", "只看", "找出", "找出来", "突出")
        if _has(normalized, off):
            return "off_request"
        return None if _has(normalized, subject) and _has(normalized, action) else "missing_edge_action"
    if label == "EDGE_DETECT_OFF":
        subject = ("边缘", "轮廓", "边界", "正常图像", "图像显示")
        if not _has(normalized, subject):
            return "missing_edge_subject"
        return None if _has(normalized, off + ("恢复正常", "恢复图像", "重置图像")) else "missing_off"
    if label == "RESET_ISP":
        required = ("原图", "默认", "初始", "重置", "清除所有", "所有参数恢复", "所有图像设置恢复")
        return None if _has(normalized, required) else "missing_reset"
    if label == "REPEAT_LAST":
        required = ("上次", "上一次", "刚才", "前一个", "再来一次", "继续")
        mixed = ("原图",)
        if _has(normalized, mixed):
            return "mixed_new_operation"
        return None if _has(normalized, required) else "missing_repeat"
    if label == "QUERY_STATUS":
        required = ("当前", "现在", "目前", "参数", "设置", "配置", "状态", "开启")
        query = ("查看", "查询", "告诉", "显示", "读", "多少", "是什么", "哪些", "如何")
        return None if _has(normalized, required) and _has(normalized, query) else "missing_status_query"
    if label == "BINARIZE_ON":
        required = ("二值", "阈值", "黑白两级")
        if _has(normalized, off + reset):
            return "off_or_reset"
        return None if _has(normalized, required) else "missing_binarize"
    if label == "BINARIZE_OFF":
        required = ("二值", "阈值", "黑白二值")
        if not _has(normalized, required):
            return "missing_binarize"
        return None if _has(normalized, off + ("恢复二值化之前",)) else "missing_off"
    if label == "GAMMA_ON":
        required = ("gamma", "伽马", "灰度校正", "灰阶校正")
        if _has(normalized, off + reset):
            return "off_or_reset"
        return None if _has(normalized, required) else "missing_gamma"
    if label == "GAMMA_OFF":
        required = ("gamma", "伽马", "灰度校正", "灰阶校正")
        if not _has(normalized, required):
            return "missing_gamma"
        return None if _has(normalized, off) else "missing_off"
    if label == "CHAT_NAME":
        required = (
            "你叫什么", "你的名字", "你的身份", "你是谁", "你是什么", "你是哪个", "称呼你",
            "称呼这个助手", "介绍一下你自己", "告诉我你的",
        )
        return None if _has(normalized, required) else "wrong_identity_subject"
    if label == "CHAT_HELP":
        subject = (
            "你能", "你支持", "你的", "你有哪些", "你会", "告诉我", "列出", "给我看看支持",
            "能帮我", "可以帮我", "请问你", "支持的",
        )
        capability = ("功能", "操作", "调整", "处理", "控制", "指令", "做什么", "做些什么")
        return None if _has(normalized, subject) and _has(normalized, capability) else "missing_capability_query"
    return "missing_quality_rule"


def validate_teacher_records(
    intents: list[dict], teacher_records: list[dict], manual_records: list[dict]
) -> Counter:
    label_to_id = {intent["label"]: intent["id"] for intent in intents}
    manual_text = {normalize_text(record["text"]) for record in manual_records}
    seen: dict[str, str] = {}
    counts = Counter()

    for record in teacher_records:
        normalized = normalize_text(record["text"])
        label = record["label"]
        if label not in label_to_id:
            raise ValueError(f"unknown teacher label: {label}")
        if normalized in manual_text:
            raise ValueError(f"teacher/manual duplicate: {record['text']}")
        previous = seen.get(normalized)
        if previous is not None:
            raise ValueError(f"duplicate teacher phrase: {record['text']} ({previous}/{label})")
        keyword_id = match_keywords(normalized, label_to_id)
        if keyword_id is not None and keyword_id != label_to_id[label]:
            actual = intents[keyword_id]["label"]
            raise ValueError(
                f"keyword conflict expected={label} actual={actual}: {record['text']}"
            )
        quality_error = teacher_phrase_error(label, normalized)
        if quality_error is not None:
            raise ValueError(
                f"teacher quality error={quality_error} label={label}: {record['text']}"
            )
        seen[normalized] = label
        counts[label] += 1
    return counts


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--intents", type=Path, default=ROOT / "intents.json")
    parser.add_argument("--manual", type=Path, default=ROOT / "data/manual_seeds.jsonl")
    parser.add_argument(
        "--teacher", type=Path, default=ROOT / "data/teacher_distilled.jsonl"
    )
    parser.add_argument("--minimum", type=int, default=10)
    args = parser.parse_args()

    intents = load_intents(args.intents)
    manual_records = load_jsonl(args.manual)
    teacher_records = load_jsonl(args.teacher)
    validate(intents, teacher_records, args.minimum)
    counts = validate_teacher_records(intents, teacher_records, manual_records)
    print(
        f"PASS teacher_records={sum(counts.values())} labels={len(counts)} "
        "manual_overlap=0 keyword_conflicts=0 semantic_errors=0"
    )


if __name__ == "__main__":
    main()
