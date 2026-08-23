"""Keyword-first intent resolution shared with the deployment firmware."""

from __future__ import annotations

import numpy as np

from isp_features import normalize_text


def _has(text: str, words: list[str]) -> bool:
    return any(word in text for word in words)


def match_keywords(text: str, label_to_id: dict[str, int]) -> int | None:
    """Return an unambiguous keyword intent, or None when the model is needed."""

    normalized = normalize_text(text)
    off_words = [
        "关闭", "关掉", "取消", "不要", "停止", "停用", "退出", "恢复正常", "不再",
        "不想只看", "不需要",
    ]

    if _has(normalized, [
        "不要调整", "不用调整", "别修改", "不要修改", "保持现在", "保持当前", "维持当前",
        "什么都不用", "不用处理", "停止调整", "先别调整", "现在这样就可以", "什么也别改",
        "算了", "别改", "别动", "不变",
    ]):
        return label_to_id["NOOP"]
    if _has(normalized, [
        "不要调亮", "别再调亮", "不要调暗", "别再调暗", "别再提高亮度", "别再降低亮度",
        "别再提高对比度", "别再降低对比度",
    ]):
        return label_to_id["NOOP"]
    if normalized in {"恢复", "还原", "重置", "原图", "原始图", "原始图像"} or _has(normalized, [
        "默认", "初始配置", "初始参数", "最初状态", "全部重置", "重置isp", "重置所有",
        "清除所有调整", "恢复原图", "恢复原始图", "恢复原始图像", "还原原图",
        "显示原图", "显示原始图像", "切回原图", "回到原图",
    ]):
        return label_to_id["RESET_ISP"]
    if _has(normalized, [
        "刚才", "上次", "上一步", "前一个", "重复", "再来一次", "再执行一遍", "延续前一次",
    ]):
        return label_to_id["REPEAT_LAST"]
    if normalized in {
        "你好", "您好", "嗨", "哈喽", "早上好", "下午好", "晚上好", "在吗", "你好呀", "你好啊",
        "你好能听到我说话吗", "嗨你好呀", "很高兴见到你", "见到你很高兴",
    }:
        return label_to_id["CHAT_HELLO"]
    if _has(normalized, [
        "你是什么", "你是谁", "叫什么", "你的名字", "名字是什么", "名字啊", "你叫什",
        "称呼你", "介绍一下你", "你的身份", "哪个助手", "什么系统", "什么助手",
        "你是干什么的",
    ]):
        return label_to_id["CHAT_NAME"]
    if _has(normalized, [
        "你能做什么", "能做些什么", "能帮我做", "你会做什么", "你可以做什么",
        "支持哪些功能", "支持什么功能", "控制哪些功能", "怎么使用", "使用方法", "你的功能",
        "可用指令", "支持的指令", "给我看看支持", "什么图像问题", "调整什么", "哪些操作",
    ]):
        return label_to_id["CHAT_HELP"]
    if _has(normalized, [
        "天气", "音量", "播放", "音乐", "电脑文件", "文档", "几点", "现在时间", "饱和度",
        "色温", "调暖", "暖色", "调冷", "冷色", "白平衡", "旋转", "裁剪", "无线网络",
    ]):
        return label_to_id["UNKNOWN"]
    if _has(normalized, [
        "多少", "设置是什么", "参数是什么", "模式是什么", "哪些处理", "查看当前", "查看现在",
        "查询", "读取", "读一下", "报告当前", "现在用的", "告诉我现在的", "当前设置",
        "开启了哪些功能", "开了哪些功能",
    ]):
        return label_to_id["QUERY_STATUS"]

    if _has(normalized, [
        "二值化", "二值图", "二值模式", "二值处理", "黑白二值", "阈值化", "阈值分割", "两级图像", "黑白两级",
    ]):
        binarize_off = ["关闭", "关掉", "取消", "不要", "停止", "停用", "退出", "恢复二值化之前"]
        return label_to_id["BINARIZE_OFF" if _has(normalized, binarize_off) else "BINARIZE_ON"]
    if _has(normalized, ["gamma", "伽马", "灰度校正", "灰阶校正"]):
        return label_to_id["GAMMA_OFF" if _has(normalized, off_words) else "GAMMA_ON"]

    if _has(normalized, [
        "对比", "反差", "明暗", "黑白区别", "层次", "暗部", "亮部", "暗处", "亮处",
    ]):
        down = _has(normalized, [
            "降低", "减弱", "减小", "压低", "调低", "往下", "柔和", "小一些", "太强", "过强",
            "过高", "偏高", "高得", "直接降", "降很多", "生硬", "太硬", "差得太远", "区别太明显", "压下来",
        ])
        up = _has(normalized, [
            "提高", "增强", "增加", "拉高", "调高", "往上", "分明", "更明显", "再明显",
            "明显一点", "清楚", "不足", "偏低", "太平", "发灰", "不明显", "混在一起", "缺乏",
            "暗处更暗", "亮处更亮",
        ])
        if down and not up:
            return label_to_id["CONTRAST_DOWN"]
        if up and not down:
            return label_to_id["CONTRAST_UP"]
        return None

    if _has(normalized, [
        "边缘检测", "轮廓检测", "边缘提取", "轮廓提取", "检测图像边缘", "检测画面边缘",
        "提取图像轮廓", "提取画面轮廓", "只显示边缘", "只看物体的外轮廓", "显示轮廓",
        "显示图像边缘", "显示画面边缘", "图像边界", "画面边界", "边界特征", "轮廓模式",
        "不看边缘", "恢复正常图像",
    ]):
        return label_to_id["EDGE_DETECT_OFF" if _has(normalized, off_words) else "EDGE_DETECT_ON"]

    if _has(normalized, [
        "滤波", "噪点", "噪声", "颗粒", "杂点", "椒盐", "降噪", "去噪", "噪声过滤",
        "平滑处理", "做平滑", "平滑",
    ]):
        filter_off = [
            "关闭", "关掉", "取消", "不要", "停止", "停用", "恢复未降噪", "保留原始噪声",
            "不需要降噪", "不需要滤波", "细节被滤掉", "恢复原图",
        ]
        return label_to_id["FILTER_OFF" if _has(normalized, filter_off) else "FILTER_ON"]

    if _has(normalized, ["灰度", "灰阶", "黑白", "彩色"]):
        gray_off = [
            "恢复彩色", "显示颜色", "彩色画面", "彩色模式", "关闭灰度", "取消黑白", "不要黑白",
            "改回彩色", "恢复颜色", "重新显示彩色", "恢复原始彩色", "原始彩色",
        ]
        return label_to_id["GRAY_OFF" if _has(normalized, gray_off) else "GRAY_ON"]

    if _has(normalized, [
        "锐化", "清晰", "模糊", "锐度", "细节发虚", "边缘太虚", "轮廓有点糊", "清晰度增强",
        "加强边缘", "增强边缘", "边缘加强", "边缘不清晰", "边缘有光晕",
    ]):
        sharpen_off = ["关闭", "关掉", "取消", "不要", "停止", "太锐", "过头", "光晕", "生硬"]
        return label_to_id["SHARPEN_OFF" if _has(normalized, sharpen_off) else "SHARPEN_ON"]

    if normalized == "黑":
        return label_to_id["BRIGHT_UP"]
    if _has(normalized, [
        "亮度", "调亮", "提亮", "明亮", "调暗", "亮一点", "亮一些", "暗一点", "暗一些",
        "更亮", "更暗", "刺眼", "太黑", "太暗", "好亮", "过亮", "全黑", "全白", "偏暗",
        "偏亮", "有点暗", "有点亮", "好暗", "很暗", "很黑", "很亮", "有点黑", "好黑",
        "画面黑", "图像黑", "图片黑", "屏幕黑", "黑了", "发黑", "暗了", "亮了",
    ]):
        down = _has(normalized, [
            "降低", "减小", "调低", "调暗", "往下", "降一点", "压低", "暗一点", "暗一些",
            "更暗", "刺眼", "过亮", "太亮", "好亮", "偏亮", "有点亮", "亮度高", "亮度过高",
            "全白", "降下来", "很亮", "亮了",
        ])
        up = _has(normalized, [
            "提高", "增加", "调高", "提亮", "往上", "拉高", "调亮", "明亮", "亮一点", "亮一些",
            "更亮", "太暗", "太黑", "好暗", "很暗", "很黑", "偏暗", "有点暗", "暗了", "全黑",
            "有点黑", "好黑", "画面黑", "图像黑", "图片黑", "屏幕黑", "黑了", "发黑",
            "亮度低", "亮度不足", "亮度不够", "不够亮",
        ])
        if down and not up:
            return label_to_id["BRIGHT_DOWN"]
        if up and not down:
            return label_to_id["BRIGHT_UP"]
        return None

    return None


def resolve_intent(text: str, scores: np.ndarray, label_to_id: dict[str, int]) -> int:
    keyword_intent = match_keywords(text, label_to_id)
    return keyword_intent if keyword_intent is not None else int(np.argmax(scores))
