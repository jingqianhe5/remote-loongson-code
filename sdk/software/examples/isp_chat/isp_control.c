#include "isp_control.h"

#include <stdio.h>

#define ISP_BASE 0xbf500000u

#define ISP_REG_START 0x00u
#define ISP_REG_SELECTOR 0x04u
#define ISP_REG_BRIGHTNESS 0x08u
#define ISP_REG_CONTRAST 0x0cu
#define ISP_REG_WIDTH 0x1cu
#define ISP_REG_HEIGHT 0x20u

#define ISP_BRIGHTNESS_NEUTRAL 128u
#define ISP_CONTRAST_NEUTRAL 128u
#define ISP_BRIGHTNESS_STEP 8
#define ISP_CONTRAST_STEP 8

#define ISP_SELECTOR_GRAY (2u << 7)
#define ISP_SELECTOR_GAMMA (3u << 7)
/* filter.v code 3 selects the instantiated median filter. Code 1 points at
 * the currently disabled bilateral-filter instance and must not be used. */
#define ISP_SELECTOR_FILTER_DEFAULT (3u << 4)
#define ISP_SELECTOR_SOBEL_SHARPEN (1u << 2)
#define ISP_SELECTOR_BINARIZE 1u
#define ISP_SELECTOR_EDGE_DETECT 2u

static void isp_write(unsigned int offset, unsigned int value)
{
    *(volatile unsigned int *)(uintptr_t)(ISP_BASE + offset) = value;
}

static unsigned int isp_read(unsigned int offset)
{
    return *(volatile unsigned int *)(uintptr_t)(ISP_BASE + offset);
}

static uint8_t clamp_add_u8(uint8_t value, int delta)
{
    int updated = (int)value + delta;
    if (updated < 0) {
        updated = 0;
    } else if (updated > 255) {
        updated = 255;
    }
    return (uint8_t)updated;
}

static unsigned int effective_gray(const IspControl *control)
{
    return control->gray_on || control->gamma_on ||
           control->binarize_on || control->edge_on;
}

unsigned int isp_control_selector(const IspControl *control)
{
    unsigned int selector = 0;
    if (control->gamma_on) {
        selector |= ISP_SELECTOR_GAMMA;
    } else if (effective_gray(control)) {
        selector |= ISP_SELECTOR_GRAY;
    }
    if (control->filter_on) {
        selector |= ISP_SELECTOR_FILTER_DEFAULT;
    }
    if (control->sharpen_on) {
        selector |= ISP_SELECTOR_SOBEL_SHARPEN;
    }
    if (control->binarize_on) {
        selector |= ISP_SELECTOR_BINARIZE;
    } else if (control->edge_on) {
        selector |= ISP_SELECTOR_EDGE_DETECT;
    }
    return selector;
}

static void commit(const IspControl *control)
{
    isp_write(ISP_REG_SELECTOR, isp_control_selector(control));
    isp_write(ISP_REG_BRIGHTNESS, control->brightness);
    isp_write(ISP_REG_CONTRAST, control->contrast);
    isp_write(ISP_REG_WIDTH, control->width);
    isp_write(ISP_REG_HEIGHT, control->height);
    __asm__ __volatile__("dbar 0" : : : "memory");
    isp_write(ISP_REG_START, 1u);
}

void isp_control_init(IspControl *control, uint16_t width, uint16_t height)
{
    control->brightness = ISP_BRIGHTNESS_NEUTRAL;
    control->contrast = ISP_CONTRAST_NEUTRAL;
    control->filter_on = 0;
    control->sharpen_on = 0;
    control->gray_on = 0;
    control->gamma_on = 0;
    control->binarize_on = 0;
    control->edge_on = 0;
    control->width = width;
    control->height = height;
    control->last_adjustment = INTENT_UNKNOWN;
    control->has_last_adjustment = 0;
    commit(control);
}

static int apply_adjustment(IspControl *control, IntentId intent, int remember)
{
    switch (intent) {
    case INTENT_BRIGHT_UP:
        control->brightness = clamp_add_u8(control->brightness, ISP_BRIGHTNESS_STEP);
        break;
    case INTENT_BRIGHT_DOWN:
        control->brightness = clamp_add_u8(control->brightness, -ISP_BRIGHTNESS_STEP);
        break;
    case INTENT_CONTRAST_UP:
        control->contrast = clamp_add_u8(control->contrast, ISP_CONTRAST_STEP);
        break;
    case INTENT_CONTRAST_DOWN:
        control->contrast = clamp_add_u8(control->contrast, -ISP_CONTRAST_STEP);
        break;
    case INTENT_FILTER_ON:
        control->filter_on = 1;
        break;
    case INTENT_FILTER_OFF:
        control->filter_on = 0;
        break;
    case INTENT_SHARPEN_ON:
        control->sharpen_on = 1;
        break;
    case INTENT_SHARPEN_OFF:
        control->sharpen_on = 0;
        break;
    case INTENT_GRAY_ON:
        control->gray_on = 1;
        break;
    case INTENT_GRAY_OFF:
        control->gray_on = 0;
        control->gamma_on = 0;
        control->binarize_on = 0;
        control->edge_on = 0;
        break;
    case INTENT_GAMMA_ON:
        control->gamma_on = 1;
        break;
    case INTENT_GAMMA_OFF:
        control->gamma_on = 0;
        break;
    case INTENT_BINARIZE_ON:
        control->binarize_on = 1;
        control->edge_on = 0;
        break;
    case INTENT_BINARIZE_OFF:
        control->binarize_on = 0;
        break;
    case INTENT_EDGE_DETECT_ON:
        control->edge_on = 1;
        control->binarize_on = 0;
        break;
    case INTENT_EDGE_DETECT_OFF:
        control->edge_on = 0;
        break;
    default:
        return 0;
    }

    if (remember) {
        control->last_adjustment = intent;
        control->has_last_adjustment = 1;
    }
    commit(control);
    return 1;
}

int isp_control_apply(IspControl *control, IntentId intent)
{
    if (intent == INTENT_REPEAT_LAST) {
        if (!control->has_last_adjustment) {
            return -1;
        }
        return apply_adjustment(control, control->last_adjustment, 0);
    }
    if (intent == INTENT_RESET_ISP) {
        const uint16_t width = control->width;
        const uint16_t height = control->height;
        isp_control_init(control, width, height);
        return 1;
    }
    return apply_adjustment(control, intent, 1);
}

void isp_control_print_status(const IspControl *control)
{
    /* Keep one ASCII-only line for UART terminals that are not set to UTF-8. */
    printf("[ISP_CFG] selector=0x%03x brightness=%u contrast=%u "
           "filter=%u sharpen=%u gray=%u gamma=%u binarize=%u edge=%u size=%ux%u\n",
           isp_control_selector(control),
           (unsigned int)control->brightness,
           (unsigned int)control->contrast,
           (unsigned int)control->filter_on,
           (unsigned int)control->sharpen_on,
           effective_gray(control),
           (unsigned int)control->gamma_on,
           (unsigned int)control->binarize_on,
           (unsigned int)control->edge_on,
           (unsigned int)control->width,
           (unsigned int)control->height);
    printf("[ISP] 亮度=%u 对比度=%u 滤波=%s 锐化=%s 灰度=%s Gamma=%s "
           "二值化=%s 边缘检测=%s 输出=%ux%u\n",
           (unsigned int)control->brightness,
           (unsigned int)control->contrast,
           control->filter_on ? "开" : "关",
           control->sharpen_on ? "开" : "关",
           effective_gray(control) ? "开" : "关",
           control->gamma_on ? "开" : "关",
           control->binarize_on ? "开" : "关",
           control->edge_on ? "开" : "关",
           (unsigned int)control->width,
           (unsigned int)control->height);
}

int isp_control_verify_hw(const IspControl *control)
{
    __asm__ __volatile__("dbar 0" : : : "memory");
    if ((isp_read(ISP_REG_SELECTOR) & 0x1ffu) != isp_control_selector(control)) {
        return -1;
    }
    if ((isp_read(ISP_REG_BRIGHTNESS) & 0xffu) != control->brightness) {
        return -2;
    }
    if ((isp_read(ISP_REG_CONTRAST) & 0xffu) != control->contrast) {
        return -3;
    }
    if ((isp_read(ISP_REG_WIDTH) & 0xffffu) != control->width) {
        return -4;
    }
    if ((isp_read(ISP_REG_HEIGHT) & 0xffffu) != control->height) {
        return -5;
    }
    return 0;
}
