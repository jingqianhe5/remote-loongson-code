#!/usr/bin/env python3
"""Regression cases for the generated-data semantic gate."""

from __future__ import annotations

from validate_teacher_data import teacher_phrase_error


GOOD_CASES = [
    ("UNKNOWN", "帮我播放一首音乐"),
    ("NOOP", "不修改任何设置"),
    ("BRIGHT_UP", "把亮度提上去一点"),
    ("BRIGHT_DOWN", "画面太亮了，稍微调暗"),
    ("CONTRAST_UP", "画面发灰，提高一下对比度"),
    ("FILTER_ON", "画面有噪点，做一下降噪"),
    ("SHARPEN_ON", "把物体边缘加强一些"),
    ("GRAY_ON", "把原图转换成灰度"),
    ("GRAY_OFF", "关闭灰度并恢复彩色"),
    ("REPEAT_LAST", "再执行上次的调暗操作"),
    ("BINARIZE_ON", "开启二值化处理"),
    ("GAMMA_OFF", "关闭 Gamma 校正"),
    ("CHAT_NAME", "请介绍一下你自己"),
    ("CHAT_HELP", "请问你支持哪些图像功能"),
]

BAD_CASES = [
    ("UNKNOWN", "请把图像调整为原图"),
    ("BRIGHT_DOWN", "原图，不需要调暗"),
    ("FILTER_ON", "画面有颗粒，稍微提亮处理"),
    ("SHARPEN_ON", "原图，重置参数"),
    ("GRAY_ON", "原图，恢复到原色"),
    ("GRAY_OFF", "切换到彩色并恢复所有参数"),
    ("REPEAT_LAST", "再按照原图处理一下"),
    ("BINARIZE_ON", "把画面还原为原图"),
    ("GAMMA_ON", "对图像进行亮度调整"),
    ("GAMMA_OFF", "调整对比度"),
    ("CHAT_NAME", "我叫什么名字"),
    ("CHAT_HELP", "我支持哪些 ISP 功能"),
]


def main() -> None:
    for label, text in GOOD_CASES:
        error = teacher_phrase_error(label, text)
        if error is not None:
            raise SystemExit(f"FAIL rejected good case label={label} error={error}: {text}")
    for label, text in BAD_CASES:
        if teacher_phrase_error(label, text) is None:
            raise SystemExit(f"FAIL accepted bad case label={label}: {text}")
    print(f"PASS teacher_quality good={len(GOOD_CASES)} bad={len(BAD_CASES)}")


if __name__ == "__main__":
    main()
