#!/usr/bin/env python3
"""Regression tests for ISP target and direction recognition."""

from __future__ import annotations

from pathlib import Path

import numpy as np

from benchmark_intent import fit_centroid
from generate_synthetic import generate_records
from intent_resolver import match_keywords, resolve_intent
from isp_features import texts_to_features
from train_intent import q8_matmul
from validate_dataset import load_intents, load_jsonl, validate


ROOT = Path(__file__).resolve().parent
FEATURE_DIM = 2048

DIRECTION_CASES = [
    ("亮度往上调一档", "BRIGHT_UP"),
    ("把整体画面调亮一些", "BRIGHT_UP"),
    ("画面好黑，亮度可以多提高一点", "BRIGHT_UP"),
    ("图像有点暗，帮我处理", "BRIGHT_UP"),
    ("再亮一点", "BRIGHT_UP"),
    ("大幅提高亮度", "BRIGHT_UP"),
    ("稍微增加亮度", "BRIGHT_UP"),
    ("亮度不够", "BRIGHT_UP"),
    ("亮度往下调一档", "BRIGHT_DOWN"),
    ("把整体画面调暗一些", "BRIGHT_DOWN"),
    ("画面太亮了，降低点亮度", "BRIGHT_DOWN"),
    ("图像有点亮，帮我处理", "BRIGHT_DOWN"),
    ("再暗一点", "BRIGHT_DOWN"),
    ("大幅降低亮度", "BRIGHT_DOWN"),
    ("稍微减小亮度", "BRIGHT_DOWN"),
    ("亮度过高", "BRIGHT_DOWN"),
    ("对比度往上微调一些", "CONTRAST_UP"),
    ("让黑白层次清楚一点", "CONTRAST_UP"),
    ("让暗处更暗亮处更亮，幅度大些", "CONTRAST_UP"),
    ("画面发灰，提高反差", "CONTRAST_UP"),
    ("大幅增加对比度", "CONTRAST_UP"),
    ("稍微增强明暗差别", "CONTRAST_UP"),
    ("对比度不足", "CONTRAST_UP"),
    ("把对比度往下调", "CONTRAST_DOWN"),
    ("把过强的明暗差别大幅压下来", "CONTRAST_DOWN"),
    ("画面反差太强，柔和一点", "CONTRAST_DOWN"),
    ("降低黑白区别", "CONTRAST_DOWN"),
    ("大幅减小对比度", "CONTRAST_DOWN"),
    ("稍微降低对比度", "CONTRAST_DOWN"),
    ("图像层次太硬", "CONTRAST_DOWN"),
    ("开启降噪", "FILTER_ON"),
    ("噪点太多，过滤一下", "FILTER_ON"),
    ("只做轻度平滑", "FILTER_ON"),
    ("进行强力降噪", "FILTER_ON"),
    ("清理画面颗粒", "FILTER_ON"),
    ("关闭降噪", "FILTER_OFF"),
    ("不要再做降噪处理", "FILTER_OFF"),
    ("取消噪声过滤", "FILTER_OFF"),
    ("停止平滑处理", "FILTER_OFF"),
    ("停用降噪模式", "FILTER_OFF"),
    ("打开锐化", "SHARPEN_ON"),
    ("增强图像清晰度", "SHARPEN_ON"),
    ("画面太模糊了", "SHARPEN_ON"),
    ("提高图像锐度", "SHARPEN_ON"),
    ("关闭锐化", "SHARPEN_OFF"),
    ("不要加强边缘", "SHARPEN_OFF"),
    ("锐化过头了", "SHARPEN_OFF"),
    ("取消清晰度增强", "SHARPEN_OFF"),
    ("打开灰度模式", "GRAY_ON"),
    ("转换成黑白画面", "GRAY_ON"),
    ("去掉图像颜色", "GRAY_ON"),
    ("只保留灰阶", "GRAY_ON"),
    ("关闭灰度模式", "GRAY_OFF"),
    ("恢复彩色画面", "GRAY_OFF"),
    ("重新显示彩色图像", "GRAY_OFF"),
    ("取消黑白效果", "GRAY_OFF"),
    ("打开边缘检测", "EDGE_DETECT_ON"),
    ("提取图像轮廓", "EDGE_DETECT_ON"),
    ("帮我显示图像边缘", "EDGE_DETECT_ON"),
    ("检测画面边界", "EDGE_DETECT_ON"),
    ("关闭边缘检测", "EDGE_DETECT_OFF"),
    ("不要显示轮廓", "EDGE_DETECT_OFF"),
    ("取消边缘提取", "EDGE_DETECT_OFF"),
    ("退出边缘检测模式", "EDGE_DETECT_OFF"),
    ("但是我现在希望你给我开启滤波算法", "FILTER_ON"),
    ("开启滤波", "FILTER_ON"),
    ("关闭滤波", "FILTER_OFF"),
    ("打开滤波算法", "FILTER_ON"),
    ("开启二值化", "BINARIZE_ON"),
    ("把画面转换成二值图", "BINARIZE_ON"),
    ("进行阈值分割", "BINARIZE_ON"),
    ("关闭二值化", "BINARIZE_OFF"),
    ("取消阈值化处理", "BINARIZE_OFF"),
    ("停用二值处理效果", "BINARIZE_OFF"),
    ("打开 Gamma 校正", "GAMMA_ON"),
    ("开启伽马处理", "GAMMA_ON"),
    ("关闭 Gamma 校正", "GAMMA_OFF"),
    ("取消伽马模式", "GAMMA_OFF"),
    ("现在我看到的画面很黑", "BRIGHT_UP"),
    ("现在看到的画面很黑", "BRIGHT_UP"),
    ("我现在看到很亮", "BRIGHT_DOWN"),
    ("现在看到的画面很亮", "BRIGHT_DOWN"),
    ("好暗", "BRIGHT_UP"),
    ("有点黑了", "BRIGHT_UP"),
    ("好黑啊", "BRIGHT_UP"),
    ("黑", "BRIGHT_UP"),
    ("好暗啊现在", "BRIGHT_UP"),
    ("好亮啊现在", "BRIGHT_DOWN"),
    ("太暗了", "BRIGHT_UP"),
    ("太亮了", "BRIGHT_DOWN"),
    ("你好", "CHAT_HELLO"),
    ("你叫什么 名字啊", "CHAT_NAME"),
    ("你是什么", "CHAT_NAME"),
    ("你能做什么", "CHAT_HELP"),
    ("现在这样就可以了", "NOOP"),
    ("原图", "RESET_ISP"),
    ("恢复", "RESET_ISP"),
    ("恢复原图", "RESET_ISP"),
    ("显示原始图像", "RESET_ISP"),
    ("怎么使用你的功能", "CHAT_HELP"),
    ("算了，什么也别改", "NOOP"),
    ("恢复正常图像，不看边缘", "EDGE_DETECT_OFF"),
    ("边缘不清晰，帮我增强", "SHARPEN_ON"),
    ("把物体边缘加强一些", "SHARPEN_ON"),
    ("对比度高得刺眼，直接降很多", "CONTRAST_DOWN"),
]

KEYWORD_FIRST_CASES = [
    ("但是我现在希望你给我开启滤波算法", "FILTER_ON"),
    ("开启滤波", "FILTER_ON"),
    ("开启降噪", "FILTER_ON"),
    ("关闭滤波", "FILTER_OFF"),
    ("开启二值化", "BINARIZE_ON"),
    ("关闭二值化", "BINARIZE_OFF"),
    ("停用二值处理效果", "BINARIZE_OFF"),
    ("打开 Gamma 校正", "GAMMA_ON"),
    ("关闭 Gamma 校正", "GAMMA_OFF"),
    ("现在我看到的画面很黑", "BRIGHT_UP"),
    ("我现在看到很亮", "BRIGHT_DOWN"),
    ("好暗", "BRIGHT_UP"),
    ("有点黑了", "BRIGHT_UP"),
    ("好黑啊", "BRIGHT_UP"),
    ("黑", "BRIGHT_UP"),
    ("好暗啊现在", "BRIGHT_UP"),
    ("好亮啊现在", "BRIGHT_DOWN"),
    ("你好", "CHAT_HELLO"),
    ("你叫什么 名字啊", "CHAT_NAME"),
    ("你是什么", "CHAT_NAME"),
    ("你能做什么", "CHAT_HELP"),
    ("现在这样就可以了", "NOOP"),
    ("原图", "RESET_ISP"),
    ("恢复", "RESET_ISP"),
    ("恢复原图", "RESET_ISP"),
    ("显示原始图像", "RESET_ISP"),
    ("怎么使用你的功能", "CHAT_HELP"),
    ("算了，什么也别改", "NOOP"),
    ("恢复正常图像，不看边缘", "EDGE_DETECT_OFF"),
    ("边缘不清晰，帮我增强", "SHARPEN_ON"),
    ("把物体边缘加强一些", "SHARPEN_ON"),
    ("对比度高得刺眼，直接降很多", "CONTRAST_DOWN"),
    ("打开灰度", "GRAY_ON"),
    ("打开边缘检测", "EDGE_DETECT_ON"),
]


def check_action_contract(intents: list[dict]) -> None:
    by_label = {intent["label"]: intent["action"] for intent in intents}
    assert len(intents) == 24
    assert {"CHAT_HELLO", "CHAT_NAME", "CHAT_HELP"} <= by_label.keys()
    assert by_label["CHAT_HELLO"] == {"type": "none"}
    assert by_label["CHAT_NAME"] == {"type": "none"}
    assert by_label["CHAT_HELP"] == {"type": "none"}
    assert by_label["BRIGHT_UP"] == {"type": "brightness_delta", "value": 8}
    assert by_label["BRIGHT_DOWN"] == {"type": "brightness_delta", "value": -8}
    assert by_label["CONTRAST_UP"] == {"type": "contrast_delta", "value": 8}
    assert by_label["CONTRAST_DOWN"] == {"type": "contrast_delta", "value": -8}
    assert by_label["FILTER_ON"] == {"type": "filter", "value": "default"}
    assert by_label["FILTER_OFF"] == {"type": "filter", "value": "off"}
    assert by_label["EDGE_DETECT_ON"]["value"] is True
    assert by_label["EDGE_DETECT_OFF"]["value"] is False
    assert by_label["BINARIZE_ON"]["value"] is True
    assert by_label["BINARIZE_OFF"]["value"] is False
    assert by_label["GAMMA_ON"]["value"] is True
    assert by_label["GAMMA_OFF"]["value"] is False


def main() -> None:
    intents = load_intents(ROOT / "intents.json")
    manual_records = load_jsonl(ROOT / "data/manual_seeds.jsonl")
    validate(intents, manual_records, minimum=10)
    check_action_contract(intents)

    label_to_id = {intent["label"]: intent["id"] for intent in intents}
    for text, expected in KEYWORD_FIRST_CASES:
        actual_id = match_keywords(text, label_to_id)
        actual = intents[actual_id]["label"] if actual_id is not None else "MODEL_REQUIRED"
        if actual != expected:
            raise SystemExit(
                f"FAIL keyword expected={expected} actual={actual} text={text}"
            )
    train_records = [*manual_records, *generate_records(intents, manual_records)]
    train_x = texts_to_features([record["text"] for record in train_records], FEATURE_DIM)
    train_y = np.asarray([label_to_id[record["label"]] for record in train_records])
    weights, bias = fit_centroid(train_x, train_y, len(intents))

    test_x = texts_to_features([text for text, _ in DIRECTION_CASES], FEATURE_DIM)
    scores = q8_matmul(test_x, weights) + bias
    failures = []
    for (text, expected), score in zip(DIRECTION_CASES, scores):
        predicted_id = resolve_intent(text, score, label_to_id)
        predicted = intents[predicted_id]["label"]
        if predicted != expected:
            failures.append((text, expected, predicted))

    if failures:
        for text, expected, predicted in failures:
            print(f"FAIL expected={expected:<20} actual={predicted:<20} text={text}")
        raise SystemExit(f"FAIL cases={len(failures)}/{len(DIRECTION_CASES)}")
    print(
        f"PASS direction_cases={len(DIRECTION_CASES)} "
        f"keyword_first_cases={len(KEYWORD_FIRST_CASES)} "
        f"feature_dim={FEATURE_DIM} format=Q8.8"
    )


if __name__ == "__main__":
    main()
