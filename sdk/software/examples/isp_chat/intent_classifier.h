#ifndef ISP_CHAT_INTENT_CLASSIFIER_H
#define ISP_CHAT_INTENT_CLASSIFIER_H

#include <stddef.h>
#include <stdint.h>

#define INTENT_FEATURE_DIM 2048u
#define INTENT_CLASS_COUNT 24u
#define INTENT_NGRAM_MIN 1u
#define INTENT_NGRAM_MAX 3u
#define INTENT_MODEL_HEADER_BYTES 24u
#define INTENT_MAX_CODEPOINTS 128u

typedef enum {
    INTENT_UNKNOWN = 0,
    INTENT_NOOP = 1,
    INTENT_CHAT_HELLO = 2,
    INTENT_BRIGHT_UP = 3,
    INTENT_BRIGHT_DOWN = 4,
    INTENT_CONTRAST_UP = 5,
    INTENT_CONTRAST_DOWN = 6,
    INTENT_FILTER_ON = 7,
    INTENT_FILTER_OFF = 8,
    INTENT_SHARPEN_ON = 9,
    INTENT_SHARPEN_OFF = 10,
    INTENT_GRAY_ON = 11,
    INTENT_GRAY_OFF = 12,
    INTENT_EDGE_DETECT_ON = 13,
    INTENT_EDGE_DETECT_OFF = 14,
    INTENT_RESET_ISP = 15,
    INTENT_REPEAT_LAST = 16,
    INTENT_QUERY_STATUS = 17,
    INTENT_BINARIZE_ON = 18,
    INTENT_BINARIZE_OFF = 19,
    INTENT_GAMMA_ON = 20,
    INTENT_GAMMA_OFF = 21,
    INTENT_CHAT_NAME = 22,
    INTENT_CHAT_HELP = 23
} IntentId;

typedef struct {
    const int16_t *weights;
    const int16_t *bias;
    size_t image_bytes;
} IntentModel;

int intent_model_init(IntentModel *model, const void *image, size_t image_bytes);

int intent_prepare_features(const char *text,
                            int16_t features[INTENT_FEATURE_DIM],
                            char *normalized,
                            size_t normalized_capacity);

void intent_score_cpu(const IntentModel *model,
                      const int16_t features[INTENT_FEATURE_DIM],
                      int32_t scores[INTENT_CLASS_COUNT]);

/* Returns 1 for an unambiguous keyword match and 0 when model scoring is
 * required. The input must already be normalized by intent_prepare_features. */
int intent_match_keywords(const char *normalized, IntentId *intent);

IntentId intent_resolve_normalized(const char *normalized,
                                   const int32_t scores[INTENT_CLASS_COUNT]);

IntentId intent_classify_cpu(const IntentModel *model,
                             const char *text,
                             int16_t features[INTENT_FEATURE_DIM],
                             char *normalized,
                             size_t normalized_capacity,
                             int32_t scores[INTENT_CLASS_COUNT]);

const char *intent_label(IntentId intent);
const char *intent_reply(IntentId intent);

#endif
