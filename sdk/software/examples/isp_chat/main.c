#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "common_func.h"
#include "confreg_time.h"
#include "intent_classifier.h"
#include "intent_tpu.h"
#include "isp_control.h"

unsigned long UART_BASE = 0xbf000000;
unsigned long CB_BASE = 0xbf100000;
unsigned long CONFREG_TIMER_BASE = 0xbf20f100;
unsigned long CONFREG_CLOCKS_PER_SEC = 50000000L;
unsigned long CORE_CLOCKS_PER_SEC = 33000000L;

#ifndef ISP_CHAT_FRAME_WIDTH
#define ISP_CHAT_FRAME_WIDTH 1920u
#endif

#ifndef ISP_CHAT_FRAME_HEIGHT
#define ISP_CHAT_FRAME_HEIGHT 1080u
#endif

#define UART_RBR 0x0u
#define UART_THR 0x0u
#define UART_IER 0x1u
#define UART_FCR 0x2u
#define UART_LSR 0x5u
#define UART_LSR_DR 0x01u
#define UART_LSR_THRE 0x20u
#define UART_FCR_ENABLE 0x01u
#define UART_FCR_RX_RESET 0x02u

#define COMMAND_BYTES 384u
#define NORMALIZED_BYTES 384u

extern const uint8_t isp_intent_model[];
extern const uint8_t isp_intent_model_end[];

static int16_t feature_buffer[INTENT_FEATURE_DIM] __attribute__((aligned(64)));
static int32_t score_buffer[INTENT_CLASS_COUNT] __attribute__((aligned(64)));
static char normalized_buffer[NORMALIZED_BYTES];

static inline uint8_t uart_read_reg(unsigned int offset)
{
    return *(volatile uint8_t *)(uintptr_t)(UART_BASE + offset);
}

static inline void uart_write_reg(unsigned int offset, uint8_t value)
{
    *(volatile uint8_t *)(uintptr_t)(UART_BASE + offset) = value;
}

static void uart_rx_prepare(void)
{
    uart_write_reg(UART_IER, 0);
    uart_write_reg(UART_FCR, UART_FCR_ENABLE | UART_FCR_RX_RESET);
}

static void uart_putc(char ch)
{
    while ((uart_read_reg(UART_LSR) & UART_LSR_THRE) == 0) {
    }
    uart_write_reg(UART_THR, (uint8_t)ch);
}

static char uart_getc(void)
{
    while ((uart_read_reg(UART_LSR) & UART_LSR_DR) == 0) {
    }
    return (char)uart_read_reg(UART_RBR);
}

void _exit(int code)
{
    (void)code;
    for (;;) {
        __asm__ __volatile__("idle 0" : : : "memory");
    }
}

int close(int fd)
{
    (void)fd;
    return -1;
}

int fstat(int fd, void *status)
{
    (void)fd;
    (void)status;
    return 0;
}

int isatty(int fd)
{
    (void)fd;
    return 1;
}

off_t lseek(int fd, off_t offset, int whence)
{
    (void)fd;
    (void)offset;
    (void)whence;
    return 0;
}

long long lseek64(int fd, long long offset, int whence)
{
    (void)fd;
    (void)offset;
    (void)whence;
    return 0;
}

int read(int fd, void *buffer, unsigned int count)
{
    char *output = (char *)buffer;
    if (fd != 0 || buffer == NULL || count == 0) {
        return -1;
    }
    for (unsigned int i = 0; i < count; i++) {
        char ch = uart_getc();
        output[i] = ch == '\r' ? '\n' : ch;
        if (output[i] == '\n') {
            return (int)(i + 1u);
        }
    }
    return (int)count;
}

int write(int fd, const void *buffer, unsigned int count)
{
    const char *input = (const char *)buffer;
    (void)fd;
    for (unsigned int i = 0; i < count; i++) {
        uart_putc(input[i]);
    }
    return (int)count;
}

void HWI1_IntrHandler(void)
{
    RegWrite((unsigned int)(CB_BASE + 0x00u), 0u);
}

static void erase_last_utf8(char *buffer, size_t *length)
{
    if (*length == 0) {
        return;
    }
    (*length)--;
    while (*length > 0 && (((uint8_t)buffer[*length] & 0xc0u) == 0x80u)) {
        (*length)--;
    }
    uart_putc('\b');
    uart_putc(' ');
    uart_putc('\b');
}

static void read_command(char *buffer, size_t capacity)
{
    size_t length = 0;
    uart_rx_prepare();
    printf("你: ");
    fflush(stdout);

    while (length + 1u < capacity) {
        const char ch = uart_getc();
        if (ch == '\r' || ch == '\n') {
            if (length == 0) {
                continue;
            }
            uart_putc('\n');
            break;
        }
        if (ch == '\b' || (uint8_t)ch == 0x7fu) {
            erase_last_utf8(buffer, &length);
            continue;
        }
        buffer[length++] = ch;
        uart_putc(ch);
    }
    buffer[length] = '\0';
}

static IntentId raw_argmax(const int32_t scores[INTENT_CLASS_COUNT])
{
    IntentId best = INTENT_UNKNOWN;
    for (unsigned int i = 1; i < INTENT_CLASS_COUNT; i++) {
        if (scores[i] > scores[best]) {
            best = (IntentId)i;
        }
    }
    return best;
}

static int process_command(const char *command,
                           const IntentModel *model,
                           IntentTpu *tpu,
                           IspControl *isp)
{
    const unsigned long start_cycles = get_cpu_clock_count();
    IntentId intent = INTENT_UNKNOWN;
    IntentId raw = INTENT_UNKNOWN;
    int engine;
    int applied;
    int model_used = 0;

    if (intent_prepare_features(command, feature_buffer, normalized_buffer,
                                sizeof(normalized_buffer)) < 0) {
        printf("助手: 输入不是有效的 UTF-8，或者命令过长。\n");
        return -1;
    }
    if (intent_match_keywords(normalized_buffer, &intent)) {
        engine = 2;
    } else {
        engine = intent_tpu_score(tpu, feature_buffer, score_buffer);
        model_used = 1;
        raw = raw_argmax(score_buffer);
        intent = intent_resolve_normalized(normalized_buffer, score_buffer);
    }
    applied = isp_control_apply(isp, intent);
    if ((applied > 0 || intent == INTENT_QUERY_STATUS) && isp_control_verify_hw(isp) != 0) {
        printf("[isp_chat] ISP AXI-Lite readback mismatch\n");
        return -4;
    }

    printf("[isp_chat] intent=%s raw=%s engine=%s cycles=%u\n",
           intent_label(intent),
           model_used ? intent_label(raw) : "SKIPPED",
           engine == 0 ? "TPU" : (engine == 1 ? "CPU" : "KEYWORD"),
           (unsigned int)(get_cpu_clock_count() - start_cycles));

    if (intent == INTENT_REPEAT_LAST && applied < 0) {
        printf("助手: 还没有可以重复的调整。\n");
        return 0;
    }
    printf("助手: %s\n", intent_reply(intent));
    if (applied > 0 || intent == INTENT_QUERY_STATUS) {
        isp_control_print_status(isp);
    }

#ifdef ISP_CHAT_SIM_AUTORUN
    if (model_used) {
        int32_t reference[INTENT_CLASS_COUNT];
        intent_score_cpu(model, feature_buffer, reference);
        for (unsigned int i = 0; i < INTENT_CLASS_COUNT; i++) {
            if (reference[i] != score_buffer[i]) {
                printf("[isp_chat_sim] FAIL score[%u] tpu=%d cpu=%d\n",
                       i, (int)score_buffer[i], (int)reference[i]);
                return -2;
            }
        }
        if (engine != 0) {
            printf("[isp_chat_sim] FAIL TPU fell back to CPU\n");
            return -3;
        }
        printf("[isp_chat_sim] PASS scores match CPU reference\n");
    } else {
        printf("[isp_chat_sim] PASS keyword matched before TPU\n");
    }
#else
    (void)model;
#endif
    return 0;
}

int main(int argc, char **argv)
{
    IntentModel model;
    IntentTpu tpu;
    IspControl isp;
    const size_t model_bytes = (size_t)(isp_intent_model_end - isp_intent_model);
    (void)argc;
    (void)argv;

    printf("[isp_chat] boot\n");
    if (intent_model_init(&model, isp_intent_model, model_bytes) != 0) {
        printf("[isp_chat] invalid model image bytes=%u\n", (unsigned int)model_bytes);
        return 1;
    }
    if (intent_tpu_init(&tpu, &model) != 0) {
        printf("[isp_chat] TPU initialization failed\n");
        return 1;
    }
    isp_control_init(&isp, ISP_CHAT_FRAME_WIDTH, ISP_CHAT_FRAME_HEIGHT);
    if (isp_control_verify_hw(&isp) != 0) {
        printf("[isp_chat] ISP AXI-Lite initialization/readback failed\n");
        return 1;
    }
    printf("[isp_chat] ready classes=%u features=%u model=%u bytes tpu=%u\n",
           INTENT_CLASS_COUNT, INTENT_FEATURE_DIM, (unsigned int)model_bytes, tpu.enabled);

#ifdef ISP_CHAT_SIM_AUTORUN
    {
        static const struct {
            const char *text;
            unsigned int selector;
        } commands[] = {
            {"你好", 0x000u},
            {"你是什么", 0x000u},
            {"你能做什么", 0x000u},
            {"有点黑了", 0x000u},
            {"好黑啊", 0x000u},
            {"好暗啊现在", 0x000u},
            {"好亮啊现在", 0x000u},
            {"能把这个图片增亮吗", 0x000u},
            {"再来一次", 0x000u},
            {"降低对比度", 0x000u},
            {"开启滤波", 0x030u},
            {"原图", 0x000u},
            {"关闭滤波", 0x000u},
            {"开启锐化", 0x004u},
            {"关闭锐化", 0x000u},
            {"打开 Gamma 校正", 0x180u},
            {"恢复", 0x000u},
            {"关闭 Gamma 校正", 0x000u},
            {"开启二值化", 0x101u},
            {"关闭二值化", 0x000u},
            {"切换到灰度图像", 0x100u},
            {"显示图像边缘", 0x102u},
            {"关闭边缘检测", 0x100u},
            {"恢复彩色画面", 0x000u},
            {"查看当前图像参数", 0x000u}
        };
        for (unsigned int i = 0; i < sizeof(commands) / sizeof(commands[0]); i++) {
            printf("你: %s\n", commands[i].text);
            if (process_command(commands[i].text, &model, &tpu, &isp) != 0) {
                return 2;
            }
            if (isp_control_selector(&isp) != commands[i].selector) {
                printf("[isp_chat_sim] FAIL selector expected=0x%03x actual=0x%03x\n",
                       commands[i].selector, isp_control_selector(&isp));
                return 3;
            }
        }
        if (isp.brightness != 128u || isp.contrast != 128u ||
            isp.filter_on || isp.sharpen_on || isp.gray_on || isp.gamma_on ||
            isp.binarize_on || isp.edge_on) {
            printf("[isp_chat_sim] FAIL final ISP state\n");
            return 4;
        }
        printf("[isp_chat_sim] PASS multi-turn ISP state\n");
    }
    return 0;
#else
    for (;;) {
        char command[COMMAND_BYTES];
        read_command(command, sizeof(command));
        (void)process_command(command, &model, &tpu, &isp);
    }
#endif
}
