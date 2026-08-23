#ifndef ISP_CHAT_ISP_CONTROL_H
#define ISP_CHAT_ISP_CONTROL_H

#include <stdint.h>

#include "intent_classifier.h"

typedef struct {
    uint8_t brightness;
    uint8_t contrast;
    uint8_t filter_on;
    uint8_t sharpen_on;
    uint8_t gray_on;
    uint8_t gamma_on;
    uint8_t binarize_on;
    uint8_t edge_on;
    uint16_t width;
    uint16_t height;
    IntentId last_adjustment;
    uint8_t has_last_adjustment;
} IspControl;

void isp_control_init(IspControl *control, uint16_t width, uint16_t height);

/* Returns 1 when hardware changed, 0 for non-control intents, and -1 when a
 * repeat was requested before any adjustable command. */
int isp_control_apply(IspControl *control, IntentId intent);

/* Returns the exact ISP_SELECTOR value represented by the software state. */
unsigned int isp_control_selector(const IspControl *control);

void isp_control_print_status(const IspControl *control);

/* Reads the AXI-Lite registers back through the CPU bus. */
int isp_control_verify_hw(const IspControl *control);

#endif
