#!/usr/bin/env python3
"""Generate balanced, label-constrained training phrases without an LLM."""

from __future__ import annotations

import argparse
import json
from pathlib import Path

from isp_features import normalize_text
from validate_dataset import load_intents, load_jsonl


ROOT = Path(__file__).resolve().parent
TARGET_PER_LABEL = 50


STATE_COMMANDS = {
    "BRIGHT_UP": (
        ["画面偏暗", "图像亮度不够", "图片看起来暗", "整体不够明亮", "画面太黑了", "画面有点黑", "图像发黑", "当前亮度偏低"],
        ["提亮画面", "提高图像亮度", "亮度往上调", "增加亮度", "让图片更明亮", "把画面调亮", "亮度加一点", "把亮度拉高"],
    ),
    "BRIGHT_DOWN": (
        ["画面偏亮", "图像亮度过高", "图片看起来太亮", "整体亮度偏高", "画面亮得刺眼", "当前画面过亮"],
        ["调暗画面", "降低图像亮度", "亮度往下调", "减小亮度", "让图片暗一些", "把画面压暗", "亮度减一点", "把亮度调低"],
    ),
    "CONTRAST_UP": (
        ["画面有点发灰", "明暗层次太弱", "对比度偏低", "黑白区别不明显", "图像看起来太平", "暗部亮部混在一起"],
        ["提高对比度", "增强明暗反差", "增加对比度", "让层次更分明", "把对比度往上调", "增强黑白差别", "拉高画面对比度"],
    ),
    "CONTRAST_DOWN": (
        ["画面反差太强", "明暗层次太硬", "对比度偏高", "黑白区别过于明显", "图像看起来生硬", "暗部亮部相差太远"],
        ["降低对比度", "减弱明暗反差", "减小对比度", "让层次更柔和", "把对比度往下调", "减弱黑白差别", "压低画面对比度"],
    ),
    "FILTER_ON": (
        ["画面有噪点", "图像有颗粒", "背景出现杂点", "噪声比较明显", "图片看起来不干净", "画面里有椒盐噪声"],
        ["开启滤波", "打开滤波算法", "开启降噪", "清除图像噪声", "平滑画面杂点", "过滤噪点", "打开图像去噪", "启用降噪模式"],
    ),
    "FILTER_OFF": (
        ["我不需要降噪", "需要保留原始噪声", "画面已经很平滑", "细节被滤掉了", "当前降噪不合适"],
        ["关闭滤波", "关掉滤波算法", "关闭降噪", "取消噪声过滤", "停止平滑处理", "关掉图像去噪", "停用降噪模式", "不要过滤噪点"],
    ),
    "SHARPEN_ON": (
        ["画面边缘有点虚", "图像细节不清楚", "物体轮廓比较模糊", "图片看起来偏软", "边缘细节不够明显"],
        ["开启图像锐化", "增强画面清晰度", "加强物体边缘", "把细节变清楚", "提高图像锐度", "让轮廓更清晰"],
    ),
    "SHARPEN_OFF": (
        ["画面边缘太生硬", "图像锐化过头了", "物体轮廓出现光晕", "图片看起来太锋利", "边缘增强得太明显"],
        ["关闭图像锐化", "取消清晰度增强", "不要再加强边缘", "把锐化功能关掉", "恢复柔和的细节", "停止锐化处理"],
    ),
    "GRAY_ON": (
        ["我不需要彩色", "画面颜色可以去掉", "只想看明暗信息", "需要黑白显示", "图像改用灰阶"],
        ["打开灰度模式", "转换成黑白画面", "只保留灰度信息", "去掉图像颜色", "切换到灰阶显示", "把彩色改成灰度"],
    ),
    "GRAY_OFF": (
        ["我不想看黑白", "画面需要恢复颜色", "不要继续灰度显示", "需要彩色图像", "灰阶模式可以关了"],
        ["关闭灰度模式", "恢复彩色画面", "取消黑白效果", "重新显示图像颜色", "切换回彩色模式", "把灰度改回彩色"],
    ),
    "EDGE_DETECT_ON": (
        ["我想查看物体轮廓", "需要分析图像边界", "只想看主要边缘", "画面中的边界不明显", "需要提取轮廓特征"],
        ["打开边缘检测", "提取图像轮廓", "显示物体边界", "检测画面边缘", "只保留轮廓线", "突出显示边界特征"],
    ),
    "EDGE_DETECT_OFF": (
        ["我不想只看轮廓", "需要恢复正常图像", "不再分析图像边界", "当前正在显示边缘", "轮廓模式不需要了"],
        ["关闭边缘检测", "取消轮廓提取", "停止检测图像边界", "关掉轮廓显示", "退出边缘检测模式", "不要只显示边缘"],
    ),
    "BINARIZE_ON": (
        ["需要黑白两级输出", "只想保留两个灰度级", "需要按阈值分割画面", "当前要生成二值图", "画面需要二值处理"],
        ["开启二值化", "打开二值模式", "生成二值图像", "进行阈值化", "启用阈值分割", "切换到黑白二值显示"],
    ),
    "BINARIZE_OFF": (
        ["不需要黑白两级输出", "需要退出二值图", "不要继续阈值分割", "当前二值效果不合适", "画面不需要二值处理"],
        ["关闭二值化", "关掉二值模式", "取消二值图像", "停止阈值化", "停用阈值分割", "退出黑白二值显示"],
    ),
    "GAMMA_ON": (
        ["需要做灰度校正", "当前需要伽马处理", "灰阶需要Gamma调整", "图像需要Gamma效果", "需要校正灰度响应"],
        ["开启Gamma校正", "打开Gamma处理", "启用Gamma模式", "开启伽马校正", "进行灰度校正", "打开灰阶校正"],
    ),
    "GAMMA_OFF": (
        ["不需要灰度校正", "当前不需要伽马处理", "不要继续Gamma调整", "Gamma效果不合适", "停止校正灰度响应"],
        ["关闭Gamma校正", "关掉Gamma处理", "停用Gamma模式", "关闭伽马校正", "取消灰度校正", "关闭灰阶校正"],
    ),
}


SIMPLE_PHRASES = {
    "UNKNOWN": [
        "查询今天的天气", "把声音调大", "播放一首音乐", "打开电脑文件", "告诉我现在时间",
        "提高颜色饱和度", "调整图像色温", "把图片旋转一下", "裁剪画面", "连接无线网络",
    ],
    "NOOP": [
        "不要调整任何参数", "保持现在的效果", "先别修改画面", "维持当前配置", "什么都不用做",
        "不要提高亮度", "别再降低对比度", "停止图像调整", "保留当前设置", "暂时不要处理",
    ],
    "CHAT_HELLO": [
        "你好", "您好", "嗨", "哈喽", "早上好", "下午好", "晚上好", "在吗", "你好呀",
        "很高兴见到你", "见到你很高兴",
    ],
    "CHAT_NAME": [
        "你是什么", "你是谁", "你叫什么", "你的名字是什么", "我该怎么称呼你",
        "介绍一下你自己", "你是什么助手", "告诉我你的身份", "你是哪个系统",
        "怎么称呼你比较好", "你是干什么的",
    ],
    "CHAT_HELP": [
        "你能做什么", "你支持哪些图像功能", "可以控制哪些功能", "怎么使用你的功能",
        "列出你能执行的操作", "你会处理什么图像问题", "可以帮我调整什么",
        "给我看看支持的指令", "有哪些图像操作可用", "介绍一下你的功能",
    ],
    "RESET_ISP": [
        "恢复全部默认设置", "重置所有图像参数", "回到初始画面配置", "清除所有调整", "重置ISP",
        "让参数恢复默认", "全部回到最初状态", "还原图像处理设置", "取消所有配置并重置", "恢复原始参数",
    ],
    "REPEAT_LAST": [
        "重复刚才的操作", "再来一次", "继续上一步", "按照上次方式处理", "把前一个动作再做一遍",
        "和刚才一样再调整", "重复上次设置", "刚才那个继续", "再执行一遍上个操作", "延续前一次处理",
    ],
    "QUERY_STATUS": [
        "查看当前图像参数", "现在开启了哪些功能", "读取目前的ISP配置", "告诉我当前亮度", "显示现在的对比度",
        "当前使用什么滤波", "查询图像处理状态", "目前画面设置是什么", "报告当前处理模式", "读出所有现有参数",
    ],
}


def state_command_candidates(states: list[str], commands: list[str]) -> set[str]:
    candidates = set()
    for command in commands:
        candidates.update({command, f"请{command}", f"麻烦{command}", f"{command}一下", f"{command}可以吗"})
        for state in states:
            candidates.update({f"{state}，{command}", f"{state}，请{command}", f"因为{state}，{command}"})
    return candidates


def simple_candidates(phrases: list[str], label: str) -> set[str]:
    candidates = set()
    for phrase in phrases:
        if label == "CHAT_HELLO":
            candidates.update({phrase, f"{phrase}呀", f"{phrase}啊", f"{phrase}，在吗", f"嗨，{phrase}", f"{phrase}，能听见吗"})
        elif label in {"CHAT_NAME", "CHAT_HELP", "QUERY_STATUS"}:
            candidates.update({phrase, f"请问{phrase}", f"我想知道{phrase}", f"能告诉我{phrase}", f"{phrase}呢", f"{phrase}可以吗"})
        else:
            candidates.update({phrase, f"请{phrase}", f"麻烦{phrase}", f"帮我{phrase}", f"{phrase}一下", f"{phrase}可以吗"})
    return candidates


def generate_records(intents: list[dict], manual_records: list[dict], target: int = TARGET_PER_LABEL) -> list[dict]:
    manual_text = {normalize_text(record["text"]) for record in manual_records}
    output = []
    for intent in intents:
        label = intent["label"]
        if label in STATE_COMMANDS:
            states, commands = STATE_COMMANDS[label]
            candidates = state_command_candidates(states, commands)
        else:
            candidates = simple_candidates(SIMPLE_PHRASES[label], label)

        usable = sorted(
            (text for text in candidates if normalize_text(text) not in manual_text),
            key=lambda text: (len(text), text),
        )
        unique = []
        seen = set()
        for text in usable:
            normalized = normalize_text(text)
            if normalized in seen:
                continue
            seen.add(normalized)
            unique.append({"text": text, "label": label})
            if len(unique) == target:
                break
        if len(unique) != target:
            raise ValueError(f"{label}: generated {len(unique)} records, expected {target}")
        output.extend(unique)
    return output


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--intents", type=Path, default=ROOT / "intents.json")
    parser.add_argument("--manual", type=Path, default=ROOT / "data/manual_seeds.jsonl")
    parser.add_argument("--output", type=Path, default=ROOT / "data/synthetic_train.jsonl")
    parser.add_argument("--per-label", type=int, default=TARGET_PER_LABEL)
    args = parser.parse_args()

    intents = load_intents(args.intents)
    manual_records = load_jsonl(args.manual)
    records = generate_records(intents, manual_records, args.per_label)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open("w", encoding="utf-8") as target:
        for record in records:
            target.write(json.dumps(record, ensure_ascii=False, separators=(",", ":")) + "\n")
    print(f"PASS records={len(records)} labels={len(intents)} per_label={args.per_label}")
    print(f"wrote={args.output}")


if __name__ == "__main__":
    main()
