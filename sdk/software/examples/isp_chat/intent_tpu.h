#ifndef ISP_CHAT_INTENT_TPU_H
#define ISP_CHAT_INTENT_TPU_H

#include "intent_classifier.h"

typedef struct {
    const IntentModel *model;
    unsigned int enabled;
    unsigned int failures;
} IntentTpu;

int intent_tpu_init(IntentTpu *tpu, const IntentModel *model);

/* Returns 0 for TPU execution and 1 when the CPU reference path was used. */
int intent_tpu_score(IntentTpu *tpu,
                     const int16_t features[INTENT_FEATURE_DIM],
                     int32_t scores[INTENT_CLASS_COUNT]);

#endif
