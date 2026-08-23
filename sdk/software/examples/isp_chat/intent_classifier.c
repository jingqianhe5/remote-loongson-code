#include "intent_classifier.h"

#include <limits.h>
#include <string.h>

#define MODEL_MAGIC_0 'I'
#define MODEL_MAGIC_1 'S'
#define MODEL_MAGIC_2 'P'
#define MODEL_MAGIC_3 'L'
#define MODEL_VERSION 1u

#define FNV_OFFSET 2166136261u
#define FNV_PRIME 16777619u
#define START_MARKER 0x110000u
#define END_MARKER 0x110001u

static uint32_t read_le32(const uint8_t *data)
{
    return (uint32_t)data[0] |
           ((uint32_t)data[1] << 8) |
           ((uint32_t)data[2] << 16) |
           ((uint32_t)data[3] << 24);
}

int intent_model_init(IntentModel *model, const void *image, size_t image_bytes)
{
    const uint8_t *bytes = (const uint8_t *)image;
    const size_t weight_count = INTENT_FEATURE_DIM * INTENT_CLASS_COUNT;
    const size_t expected = INTENT_MODEL_HEADER_BYTES +
                            (weight_count + INTENT_CLASS_COUNT) * sizeof(int16_t);

    if (model == NULL || bytes == NULL || image_bytes != expected) {
        return -1;
    }
    if (bytes[0] != MODEL_MAGIC_0 || bytes[1] != MODEL_MAGIC_1 ||
        bytes[2] != MODEL_MAGIC_2 || bytes[3] != MODEL_MAGIC_3) {
        return -2;
    }
    if (read_le32(bytes + 4) != MODEL_VERSION ||
        read_le32(bytes + 8) != INTENT_FEATURE_DIM ||
        read_le32(bytes + 12) != INTENT_CLASS_COUNT ||
        read_le32(bytes + 16) != INTENT_NGRAM_MIN ||
        read_le32(bytes + 20) != INTENT_NGRAM_MAX) {
        return -3;
    }

    model->weights = (const int16_t *)(const void *)(bytes + INTENT_MODEL_HEADER_BYTES);
    model->bias = model->weights + weight_count;
    model->image_bytes = image_bytes;
    return 0;
}

static int utf8_decode(const uint8_t **cursor, uint32_t *codepoint)
{
    const uint8_t *p = *cursor;
    uint32_t cp;
    unsigned int continuation;

    if (p[0] < 0x80u) {
        *codepoint = p[0];
        *cursor = p + 1;
        return 0;
    }
    if ((p[0] & 0xe0u) == 0xc0u) {
        cp = p[0] & 0x1fu;
        continuation = 1;
        if (cp < 2u) {
            return -1;
        }
    } else if ((p[0] & 0xf0u) == 0xe0u) {
        cp = p[0] & 0x0fu;
        continuation = 2;
    } else if ((p[0] & 0xf8u) == 0xf0u) {
        cp = p[0] & 0x07u;
        continuation = 3;
        if (cp > 4u) {
            return -1;
        }
    } else {
        return -1;
    }

    for (unsigned int i = 0; i < continuation; i++) {
        if (p[i + 1] == 0 || (p[i + 1] & 0xc0u) != 0x80u) {
            return -1;
        }
        cp = (cp << 6) | (p[i + 1] & 0x3fu);
    }
    if ((continuation == 2 && cp < 0x800u) ||
        (continuation == 3 && cp < 0x10000u) ||
        cp > 0x10ffffu || (cp >= 0xd800u && cp <= 0xdfffu)) {
        return -1;
    }
    *codepoint = cp;
    *cursor = p + continuation + 1;
    return 0;
}

static size_t utf8_encode(uint32_t cp, char output[4])
{
    if (cp < 0x80u) {
        output[0] = (char)cp;
        return 1;
    }
    if (cp < 0x800u) {
        output[0] = (char)(0xc0u | (cp >> 6));
        output[1] = (char)(0x80u | (cp & 0x3fu));
        return 2;
    }
    if (cp < 0x10000u) {
        output[0] = (char)(0xe0u | (cp >> 12));
        output[1] = (char)(0x80u | ((cp >> 6) & 0x3fu));
        output[2] = (char)(0x80u | (cp & 0x3fu));
        return 3;
    }
    output[0] = (char)(0xf0u | (cp >> 18));
    output[1] = (char)(0x80u | ((cp >> 12) & 0x3fu));
    output[2] = (char)(0x80u | ((cp >> 6) & 0x3fu));
    output[3] = (char)(0x80u | (cp & 0x3fu));
    return 4;
}

static uint32_t nfkc_subset(uint32_t cp)
{
    if (cp == 0x3000u) {
        return 0x20u;
    }
    if (cp >= 0xff01u && cp <= 0xff5eu) {
        return cp - 0xfee0u;
    }
    if (cp >= 'A' && cp <= 'Z') {
        return cp + ('a' - 'A');
    }
    return cp;
}

static int codepoint_is_ignored(uint32_t cp)
{
    if (cp <= 0x20u || cp == 0x7fu || cp == 0xa0u) {
        return 1;
    }
    if (cp < 0x80u) {
        return !((cp >= 'a' && cp <= 'z') || (cp >= '0' && cp <= '9'));
    }
    if ((cp >= 0x2000u && cp <= 0x206fu) ||
        (cp >= 0x2190u && cp <= 0x2bffu) ||
        (cp >= 0x3000u && cp <= 0x303fu) ||
        (cp >= 0xfe10u && cp <= 0xfe1fu) ||
        (cp >= 0xfe30u && cp <= 0xfe4fu) ||
        (cp >= 0xff00u && cp <= 0xff65u) ||
        (cp >= 0x1f000u && cp <= 0x1faffu)) {
        return 1;
    }
    return 0;
}

static uint32_t hash_codepoints(const uint32_t *values, unsigned int count)
{
    uint32_t hash = FNV_OFFSET ^ count;
    for (unsigned int i = 0; i < count; i++) {
        hash ^= values[i];
        hash *= FNV_PRIME;
    }
    return hash;
}

int intent_prepare_features(const char *text,
                            int16_t features[INTENT_FEATURE_DIM],
                            char *normalized,
                            size_t normalized_capacity)
{
    uint32_t codepoints[INTENT_MAX_CODEPOINTS + 2u];
    const uint8_t *cursor = (const uint8_t *)text;
    size_t output_length = 0;
    unsigned int count = 0;

    if (text == NULL || features == NULL || normalized == NULL || normalized_capacity == 0) {
        return -1;
    }
    memset(features, 0, INTENT_FEATURE_DIM * sizeof(features[0]));
    codepoints[count++] = START_MARKER;

    while (*cursor != 0) {
        uint32_t cp;
        char encoded[4];
        size_t encoded_length;
        if (utf8_decode(&cursor, &cp) != 0) {
            return -2;
        }
        cp = nfkc_subset(cp);
        if (codepoint_is_ignored(cp)) {
            continue;
        }
        if (count >= INTENT_MAX_CODEPOINTS + 1u) {
            return -3;
        }
        encoded_length = utf8_encode(cp, encoded);
        if (output_length + encoded_length + 1u > normalized_capacity) {
            return -4;
        }
        memcpy(normalized + output_length, encoded, encoded_length);
        output_length += encoded_length;
        codepoints[count++] = cp;
    }
    normalized[output_length] = '\0';
    codepoints[count++] = END_MARKER;

    for (unsigned int width = INTENT_NGRAM_MIN; width <= INTENT_NGRAM_MAX; width++) {
        if (count < width) {
            continue;
        }
        for (unsigned int start = 0; start + width <= count; start++) {
            const uint32_t index = hash_codepoints(codepoints + start, width) &
                                   (INTENT_FEATURE_DIM - 1u);
            features[index] = 256;
        }
    }
    return (int)(count - 2u);
}

static int16_t round_q16_to_q8(int64_t accumulator)
{
    uint64_t magnitude = accumulator < 0 ? (uint64_t)(-accumulator) :
                                           (uint64_t)accumulator;
    int64_t rounded = (int64_t)((magnitude + 128u) >> 8);
    if (accumulator < 0) {
        rounded = -rounded;
    }
    if (rounded > INT16_MAX) {
        return INT16_MAX;
    }
    if (rounded < INT16_MIN) {
        return INT16_MIN;
    }
    return (int16_t)rounded;
}

void intent_score_cpu(const IntentModel *model,
                      const int16_t features[INTENT_FEATURE_DIM],
                      int32_t scores[INTENT_CLASS_COUNT])
{
    for (unsigned int row = 0; row < INTENT_CLASS_COUNT; row++) {
        int32_t score = model->bias[row];
        const int16_t *weights = model->weights + row * INTENT_FEATURE_DIM;
        for (unsigned int start = 0; start < INTENT_FEATURE_DIM; start += 64u) {
            int64_t accumulator = 0;
            for (unsigned int col = start; col < start + 64u; col++) {
                accumulator += (int32_t)features[col] * (int32_t)weights[col];
            }
            score += round_q16_to_q8(accumulator);
        }
        scores[row] = score;
    }
}

static int contains_any(const char *text, const char *const words[])
{
    for (unsigned int i = 0; words[i] != NULL; i++) {
        if (strstr(text, words[i]) != NULL) {
            return 1;
        }
    }
    return 0;
}

static int equals_any(const char *text, const char *const words[])
{
    for (unsigned int i = 0; words[i] != NULL; i++) {
        if (strcmp(text, words[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

static IntentId score_argmax(const int32_t scores[INTENT_CLASS_COUNT])
{
    IntentId best = INTENT_UNKNOWN;
    for (unsigned int i = 1; i < INTENT_CLASS_COUNT; i++) {
        if (scores[i] > scores[best]) {
            best = (IntentId)i;
        }
    }
    return best;
}

int intent_match_keywords(const char *text, IntentId *intent)
{
    static const char *const noop[] = {
        "不要调整", "不用调整", "别修改", "不要修改", "保持现在", "保持当前", "维持当前",
        "什么都不用", "不用处理", "停止调整", "先别调整", "现在这样就可以", "什么也别改",
        "算了", "别改", "别动", "不变", NULL
    };
    static const char *const noop_direction[] = {
        "不要调亮", "别再调亮", "不要调暗", "别再调暗", "别再提高亮度", "别再降低亮度",
        "别再提高对比度", "别再降低对比度", NULL
    };
    static const char *const reset[] = {
        "默认", "初始配置", "初始参数", "最初状态", "全部重置", "重置isp", "重置所有",
        "清除所有调整", "恢复原图", "恢复原始图", "恢复原始图像", "还原原图",
        "显示原图", "显示原始图像", "切回原图", "回到原图", NULL
    };
    static const char *const reset_exact[] = {
        "恢复", "还原", "重置", "原图", "原始图", "原始图像", NULL
    };
    static const char *const repeat[] = {
        "刚才", "上次", "上一步", "前一个", "重复", "再来一次", "再执行一遍", "延续前一次", NULL
    };
    static const char *const greeting[] = {
        "你好", "您好", "嗨", "哈喽", "早上好", "下午好", "晚上好", "在吗", "你好呀", "你好啊",
        "你好能听到我说话吗", "嗨你好呀", "很高兴见到你", "见到你很高兴", NULL
    };
    static const char *const identity[] = {
        "你是什么", "你是谁", "叫什么", "你的名字", "名字是什么", "名字啊", "你叫什",
        "称呼你", "介绍一下你", "你的身份", "哪个助手", "什么系统", "什么助手",
        "你是干什么的", NULL
    };
    static const char *const help[] = {
        "你能做什么", "能做些什么", "能帮我做", "你会做什么", "你可以做什么",
        "支持哪些功能", "支持什么功能", "控制哪些功能", "怎么使用", "使用方法", "你的功能",
        "可用指令", "支持的指令", "给我看看支持", "什么图像问题", "调整什么", "哪些操作", NULL
    };
    static const char *const unsupported[] = {
        "天气", "音量", "播放", "音乐", "电脑文件", "文档", "几点", "现在时间", "饱和度",
        "色温", "调暖", "暖色", "调冷", "冷色", "白平衡", "旋转", "裁剪", "无线网络",
        NULL
    };
    static const char *const query[] = {
        "多少", "设置是什么", "参数是什么", "模式是什么", "哪些处理", "查看当前", "查看现在",
        "查询", "读取", "读一下", "报告当前", "现在用的", "告诉我现在的", "当前设置",
        "开启了哪些功能", "开了哪些功能", NULL
    };
    static const char *const contrast_anchor[] = {
        "对比", "反差", "明暗", "黑白区别", "层次", "暗部", "亮部", "暗处", "亮处", NULL
    };
    static const char *const contrast_down[] = {
        "降低", "减弱", "减小", "压低", "调低", "往下", "柔和", "小一些", "太强", "过强",
        "过高", "偏高", "高得", "直接降", "降很多", "生硬", "太硬", "差得太远", "区别太明显", "压下来", NULL
    };
    static const char *const contrast_up[] = {
        "提高", "增强", "增加", "拉高", "调高", "往上", "分明", "更明显", "再明显",
        "明显一点", "清楚", "不足",
        "偏低", "太平", "发灰", "不明显", "混在一起", "缺乏", "暗处更暗", "亮处更亮", NULL
    };
    static const char *const edge_anchor[] = {
        "边缘检测", "轮廓检测", "边缘提取", "轮廓提取", "检测图像边缘", "检测画面边缘",
        "提取图像轮廓", "提取画面轮廓", "只显示边缘", "只看物体的外轮廓", "显示轮廓",
        "显示图像边缘", "显示画面边缘", "图像边界", "画面边界", "边界特征", "轮廓模式",
        "不看边缘", "恢复正常图像", NULL
    };
    static const char *const off_words[] = {
        "关闭", "关掉", "取消", "不要", "停止", "停用", "退出", "恢复正常", "不再",
        "不想只看", "不需要", NULL
    };
    static const char *const binarize_anchor[] = {
        "二值化", "二值图", "二值模式", "二值处理", "黑白二值", "阈值化", "阈值分割", "两级图像",
        "黑白两级", NULL
    };
    static const char *const binarize_off[] = {
        "关闭", "关掉", "取消", "不要", "停止", "停用", "退出", "恢复二值化之前", NULL
    };
    static const char *const gamma_anchor[] = {
        "gamma", "伽马", "灰度校正", "灰阶校正", NULL
    };
    static const char *const filter_anchor[] = {
        "滤波", "噪点", "噪声", "颗粒", "杂点", "椒盐", "降噪", "去噪", "噪声过滤",
        "平滑处理", "做平滑", "平滑", NULL
    };
    static const char *const filter_off[] = {
        "关闭", "关掉", "取消", "不要", "停止", "停用", "恢复未降噪", "保留原始噪声",
        "不需要降噪", "不需要滤波", "细节被滤掉", "恢复原图", NULL
    };
    static const char *const gray_anchor[] = {"灰度", "灰阶", "黑白", "彩色", NULL};
    static const char *const gray_off[] = {
        "恢复彩色", "显示颜色", "彩色画面", "彩色模式", "关闭灰度", "取消黑白", "不要黑白",
        "改回彩色", "恢复颜色", "重新显示彩色", "恢复原始彩色", "原始彩色", NULL
    };
    static const char *const sharpen_anchor[] = {
        "锐化", "清晰", "模糊", "锐度", "细节发虚", "边缘太虚", "轮廓有点糊", "清晰度增强", "加强边缘",
        "增强边缘", "边缘加强", "边缘不清晰", "边缘有光晕", NULL
    };
    static const char *const sharpen_off[] = {
        "关闭", "关掉", "取消", "不要", "停止", "太锐", "过头", "光晕", "生硬", NULL
    };
    static const char *const brightness_anchor[] = {
        "亮度", "调亮", "提亮", "明亮", "调暗", "亮一点", "亮一些", "暗一点", "暗一些",
        "更亮", "更暗", "刺眼", "太黑", "太暗", "好亮", "过亮", "全黑", "全白",
        "偏暗", "偏亮", "有点暗", "有点亮", "好暗", "很暗", "很黑", "很亮",
        "有点黑", "好黑", "画面黑", "图像黑", "图片黑", "屏幕黑", "黑了", "发黑",
        "暗了", "亮了", NULL
    };
    static const char *const brightness_down[] = {
        "降低", "减小", "调低", "调暗", "往下", "降一点", "压低", "暗一点", "暗一些",
        "更暗", "刺眼", "过亮", "太亮", "好亮", "偏亮", "有点亮", "亮度高", "亮度过高",
        "全白", "降下来", "很亮", "亮了", NULL
    };
    static const char *const brightness_up[] = {
        "提高", "增加", "调高", "提亮", "往上", "拉高", "调亮", "明亮", "亮一点", "亮一些",
        "更亮", "太暗", "太黑", "好暗", "很暗", "很黑", "偏暗", "有点暗", "暗了",
        "有点黑", "好黑", "画面黑", "图像黑", "图片黑", "屏幕黑", "黑了", "发黑",
        "全黑", "亮度低",
        "亮度不足", "亮度不够", "不够亮", NULL
    };

    if (text == NULL || intent == NULL) {
        return 0;
    }

    if (contains_any(text, noop) || contains_any(text, noop_direction)) {
        *intent = INTENT_NOOP;
        return 1;
    }
    if (equals_any(text, reset_exact) || contains_any(text, reset)) {
        *intent = INTENT_RESET_ISP;
        return 1;
    }
    if (contains_any(text, repeat)) {
        *intent = INTENT_REPEAT_LAST;
        return 1;
    }
    if (equals_any(text, greeting)) {
        *intent = INTENT_CHAT_HELLO;
        return 1;
    }
    if (contains_any(text, identity)) {
        *intent = INTENT_CHAT_NAME;
        return 1;
    }
    if (contains_any(text, help)) {
        *intent = INTENT_CHAT_HELP;
        return 1;
    }
    if (contains_any(text, unsupported)) {
        *intent = INTENT_UNKNOWN;
        return 1;
    }
    if (contains_any(text, query)) {
        *intent = INTENT_QUERY_STATUS;
        return 1;
    }
    if (contains_any(text, binarize_anchor)) {
        *intent = contains_any(text, binarize_off) ? INTENT_BINARIZE_OFF : INTENT_BINARIZE_ON;
        return 1;
    }
    if (contains_any(text, gamma_anchor)) {
        *intent = contains_any(text, off_words) ? INTENT_GAMMA_OFF : INTENT_GAMMA_ON;
        return 1;
    }
    if (contains_any(text, contrast_anchor)) {
        const int down = contains_any(text, contrast_down);
        const int up = contains_any(text, contrast_up);
        if (down && !up) {
            *intent = INTENT_CONTRAST_DOWN;
            return 1;
        }
        if (up && !down) {
            *intent = INTENT_CONTRAST_UP;
            return 1;
        }
        return 0;
    }
    if (contains_any(text, edge_anchor)) {
        *intent = contains_any(text, off_words) ? INTENT_EDGE_DETECT_OFF : INTENT_EDGE_DETECT_ON;
        return 1;
    }
    if (contains_any(text, filter_anchor)) {
        *intent = contains_any(text, filter_off) ? INTENT_FILTER_OFF : INTENT_FILTER_ON;
        return 1;
    }
    if (contains_any(text, gray_anchor)) {
        *intent = contains_any(text, gray_off) ? INTENT_GRAY_OFF : INTENT_GRAY_ON;
        return 1;
    }
    if (contains_any(text, sharpen_anchor)) {
        *intent = contains_any(text, sharpen_off) ? INTENT_SHARPEN_OFF : INTENT_SHARPEN_ON;
        return 1;
    }
    if (strcmp(text, "黑") == 0) {
        *intent = INTENT_BRIGHT_UP;
        return 1;
    }
    if (contains_any(text, brightness_anchor)) {
        const int down = contains_any(text, brightness_down);
        const int up = contains_any(text, brightness_up);
        if (down && !up) {
            *intent = INTENT_BRIGHT_DOWN;
            return 1;
        }
        if (up && !down) {
            *intent = INTENT_BRIGHT_UP;
            return 1;
        }
        return 0;
    }
    return 0;
}

IntentId intent_resolve_normalized(const char *text,
                                   const int32_t scores[INTENT_CLASS_COUNT])
{
    IntentId keyword_intent;
    if (intent_match_keywords(text, &keyword_intent)) {
        return keyword_intent;
    }
    return score_argmax(scores);
}

IntentId intent_classify_cpu(const IntentModel *model,
                             const char *text,
                             int16_t features[INTENT_FEATURE_DIM],
                             char *normalized,
                             size_t normalized_capacity,
                             int32_t scores[INTENT_CLASS_COUNT])
{
    if (intent_prepare_features(text, features, normalized, normalized_capacity) < 0) {
        return INTENT_UNKNOWN;
    }
    intent_score_cpu(model, features, scores);
    return intent_resolve_normalized(normalized, scores);
}

const char *intent_label(IntentId intent)
{
    static const char *const labels[INTENT_CLASS_COUNT] = {
        "UNKNOWN", "NOOP", "CHAT_HELLO", "BRIGHT_UP", "BRIGHT_DOWN", "CONTRAST_UP",
        "CONTRAST_DOWN", "FILTER_ON", "FILTER_OFF", "SHARPEN_ON", "SHARPEN_OFF",
        "GRAY_ON", "GRAY_OFF", "EDGE_DETECT_ON", "EDGE_DETECT_OFF", "RESET_ISP",
        "REPEAT_LAST", "QUERY_STATUS", "BINARIZE_ON", "BINARIZE_OFF", "GAMMA_ON", "GAMMA_OFF",
        "CHAT_NAME", "CHAT_HELP"
    };
    return (unsigned int)intent < INTENT_CLASS_COUNT ? labels[intent] : labels[INTENT_UNKNOWN];
}

const char *intent_reply(IntentId intent)
{
    static const char *const replies[INTENT_CLASS_COUNT] = {
        "抱歉，我没有理解这条指令。",
        "好的，保持当前设置。",
        "你好，请输入 ISP 调整指令。",
        "好的，已经提高亮度。",
        "好的，已经降低亮度。",
        "好的，已经提高对比度。",
        "好的，已经降低对比度。",
        "好的，已经开启滤波。",
        "好的，已经关闭滤波。",
        "好的，已经开启锐化。",
        "好的，已经关闭锐化。",
        "好的，已经切换为灰度图像。",
        "好的，已经恢复彩色图像。",
        "好的，已经启用边缘检测。",
        "好的，已经关闭边缘检测。",
        "好的，已经恢复默认设置。",
        "好的，已经重复上一次调整。",
        "正在读取当前 ISP 设置。",
        "好的，已经开启二值化。",
        "好的，已经关闭二值化。",
        "好的，已经开启 Gamma 校正。",
        "好的，已经关闭 Gamma 校正。",
        "我是基于龙芯中科的数字图像处理助手。",
        "我可以调整亮度、对比度、滤波、锐化、灰度、Gamma、二值化和边缘检测。"
    };
    return (unsigned int)intent < INTENT_CLASS_COUNT ? replies[intent] : replies[INTENT_UNKNOWN];
}
