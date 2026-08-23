#include "intent_classifier.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int16_t features[INTENT_FEATURE_DIM];
static int32_t scores[INTENT_CLASS_COUNT];
static char normalized[512];

static IntentId raw_argmax(const int32_t values[INTENT_CLASS_COUNT])
{
    IntentId best = INTENT_UNKNOWN;
    for (unsigned int i = 1; i < INTENT_CLASS_COUNT; i++) {
        if (values[i] > values[best]) {
            best = (IntentId)i;
        }
    }
    return best;
}

int main(int argc, char **argv)
{
    FILE *source;
    uint8_t *image;
    long image_size;
    IntentModel model;
    char line[512];

    if (argc != 2) {
        fprintf(stderr, "usage: %s MODEL\n", argv[0]);
        return 2;
    }
    source = fopen(argv[1], "rb");
    if (source == NULL || fseek(source, 0, SEEK_END) != 0) {
        perror("open model");
        return 2;
    }
    image_size = ftell(source);
    if (image_size <= 0 || fseek(source, 0, SEEK_SET) != 0) {
        fprintf(stderr, "invalid model size\n");
        return 2;
    }
    image = (uint8_t *)malloc((size_t)image_size);
    if (image == NULL || fread(image, 1, (size_t)image_size, source) != (size_t)image_size) {
        fprintf(stderr, "failed to read model\n");
        return 2;
    }
    fclose(source);
    if (intent_model_init(&model, image, (size_t)image_size) != 0) {
        fprintf(stderr, "invalid model image\n");
        return 2;
    }

    while (fgets(line, sizeof(line), stdin) != NULL) {
        const size_t length = strcspn(line, "\r\n");
        IntentId resolved;
        IntentId raw;
        IntentId keyword = INTENT_UNKNOWN;
        int keyword_matched;
        line[length] = '\0';
        if (intent_prepare_features(line, features, normalized, sizeof(normalized)) < 0) {
            fprintf(stderr, "feature extraction failed\n");
            return 3;
        }
        intent_score_cpu(&model, features, scores);
        raw = raw_argmax(scores);
        keyword_matched = intent_match_keywords(normalized, &keyword);
        resolved = intent_resolve_normalized(normalized, scores);
        printf("%s|%s|%s|", intent_label(resolved), intent_label(raw),
               keyword_matched ? intent_label(keyword) : "SKIPPED");
        for (unsigned int i = 0; i < INTENT_CLASS_COUNT; i++) {
            printf("%s%d", i == 0 ? "" : ",", (int)scores[i]);
        }
        putchar('\n');
    }
    free(image);
    return 0;
}
