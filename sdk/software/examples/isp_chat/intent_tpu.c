#include "intent_tpu.h"

#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "runc_tpu_program.h"

#ifndef ISP_CHAT_USE_TPU
#define ISP_CHAT_USE_TPU 1
#endif

#ifndef ISP_CHAT_TPU_TIMEOUT
#define ISP_CHAT_TPU_TIMEOUT 500000u
#endif

#ifndef ISP_CHAT_TPU_RETRIES
#define ISP_CHAT_TPU_RETRIES 1u
#endif

#define TPU_STATUS_BUSY (1u << 0)
#define TPU_STATUS_DONE (1u << 1)
#define TPU_STATUS_ERROR (1u << 2)
#define TPU_STATUS_RESULT_COUNT(status) (((status) >> 8) & 0xffu)
#define TPU_STATUS_ERROR_CODE(status) (((status) >> 16) & 0xffu)

#define LACC_START_WORD "0xC00000A4"
#define LACC_STATUS_WORD "0xC0400004"
#define LACC_READ_WORD "0xC08000A4"
#define LACC_SET_MODE_WORD "0xC08100A4"
#define LACC_DMA_LOAD_WORD "0xC08198A4"
#define LACC_CLEAR_WORD "0xC0C00004"

#define TPU_TILE 8u
#define TPU_K_CHUNK 64u
#define TPU_K_CHUNKS (INTENT_FEATURE_DIM / TPU_K_CHUNK)
#define TPU_ROW_TILES ((INTENT_CLASS_COUNT + TPU_TILE - 1u) / TPU_TILE)
#define TPU_BANK_STRIDE 1024u
#define TPU_TILE_HALFWORDS (TPU_K_CHUNK + TPU_K_CHUNK * TPU_TILE)

typedef struct {
    uint32_t source_addr;
    uint32_t ub_addr_and_count;
} TpuDmaDescriptor;

/*
 * Weights are rearranged once at boot. Each block is a complete burst image:
 * 64 input values followed by one transposed 8x64 weight tile. Blocks are 1152
 * bytes, so every block remains 64-byte aligned.
 */
static uint16_t tpu_dma_images[TPU_K_CHUNKS][TPU_ROW_TILES][TPU_TILE_HALFWORDS]
    __attribute__((aligned(64)));
static TpuDmaDescriptor tpu_descriptors[2] __attribute__((aligned(16)));
static unsigned int programs_flushed;

static inline uint32_t tpu_start(uint32_t start_pc)
{
    uint32_t status;
    __asm__ __volatile__(
        "move $r5, %1\n\t"
        ".word " LACC_START_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(status)
        : "r"(start_pc)
        : "$r4", "$r5", "memory");
    return status;
}

static inline uint32_t tpu_status(void)
{
    uint32_t status;
    __asm__ __volatile__(
        ".word " LACC_STATUS_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(status)
        :
        : "$r4", "memory");
    return status;
}

static inline uint32_t tpu_read_pair(uint32_t pair_index)
{
    uint32_t value;
    __asm__ __volatile__(
        "move $r5, %1\n\t"
        ".word " LACC_READ_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(value)
        : "r"(pair_index)
        : "$r4", "$r5", "memory");
    return value;
}

static inline uint32_t tpu_set_raw_result_mode(uint32_t enable)
{
    uint32_t status;
    __asm__ __volatile__(
        "move $r5, %1\n\t"
        ".word " LACC_SET_MODE_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(status)
        : "r"(enable)
        : "$r4", "$r5", "memory");
    return status;
}

static inline uint32_t tpu_dma_load(uint32_t descriptor_addr)
{
    uint32_t status;
    __asm__ __volatile__(
        "move $r5, %1\n\t"
        ".word " LACC_DMA_LOAD_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(status)
        : "r"(descriptor_addr)
        : "$r4", "$r5", "memory");
    return status;
}

static inline uint32_t tpu_clear(void)
{
    uint32_t status;
    __asm__ __volatile__(
        ".word " LACC_CLEAR_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(status)
        :
        : "$r4", "memory");
    return status;
}

static void cache_flush(const void *address, size_t bytes)
{
    const unsigned long line = 1ul << cache_offset_width;
    const unsigned long start = (unsigned long)address & ~(line - 1ul);
    const unsigned long end = ((unsigned long)address + bytes + line - 1ul) & ~(line - 1ul);
    for (unsigned long cursor = start; cursor < end; cursor += line) {
        __asm__ __volatile__("cacop 0x11, %0, 0" : : "r"(cursor) : "memory");
    }
    __asm__ __volatile__("dbar 0" : : : "memory");
}

static int wait_cleared(uint32_t *status_out)
{
    for (unsigned int i = 0; i < ISP_CHAT_TPU_TIMEOUT; i++) {
        const uint32_t status = tpu_status();
        if ((status & (TPU_STATUS_BUSY | TPU_STATUS_DONE | TPU_STATUS_ERROR)) == 0) {
            *status_out = status;
            return 0;
        }
    }
    *status_out = tpu_status();
    return -1;
}

static int wait_idle(uint32_t *status_out)
{
    for (unsigned int i = 0; i < ISP_CHAT_TPU_TIMEOUT; i++) {
        const uint32_t status = tpu_status();
        if (status & TPU_STATUS_ERROR) {
            *status_out = status;
            return -1;
        }
        if ((status & TPU_STATUS_DONE) && !(status & TPU_STATUS_BUSY)) {
            *status_out = status;
            return 0;
        }
    }
    *status_out = tpu_status();
    return -1;
}

static int wait_results(uint32_t *status_out)
{
    for (unsigned int i = 0; i < ISP_CHAT_TPU_TIMEOUT; i++) {
        const uint32_t status = tpu_status();
        if (status & TPU_STATUS_ERROR) {
            *status_out = status;
            return -1;
        }
        if ((status & TPU_STATUS_DONE) && TPU_STATUS_RESULT_COUNT(status) >= TPU_K_CHUNK) {
            *status_out = status;
            return 0;
        }
    }
    *status_out = tpu_status();
    return -1;
}

static void prepare_weight_images(const IntentModel *model)
{
    for (unsigned int chunk = 0; chunk < TPU_K_CHUNKS; chunk++) {
        const unsigned int col_base = chunk * TPU_K_CHUNK;
        for (unsigned int tile = 0; tile < TPU_ROW_TILES; tile++) {
            uint16_t *image = tpu_dma_images[chunk][tile];
            memset(image, 0, TPU_K_CHUNK * sizeof(image[0]));
            for (unsigned int kt = 0; kt < TPU_K_CHUNK / TPU_TILE; kt++) {
                for (unsigned int k = 0; k < TPU_TILE; k++) {
                    for (unsigned int lane = 0; lane < TPU_TILE; lane++) {
                        const unsigned int row = tile * TPU_TILE + lane;
                        const unsigned int col = col_base + kt * TPU_TILE + k;
                        const unsigned int destination = TPU_K_CHUNK +
                            kt * TPU_TILE * TPU_TILE + k * TPU_TILE + lane;
                        image[destination] = row < INTENT_CLASS_COUNT
                            ? (uint16_t)model->weights[row * INTENT_FEATURE_DIM + col]
                            : 0u;
                    }
                }
            }
        }
    }
    cache_flush(tpu_dma_images, sizeof(tpu_dma_images));
}

static void update_input_images(const int16_t features[INTENT_FEATURE_DIM])
{
    for (unsigned int chunk = 0; chunk < TPU_K_CHUNKS; chunk++) {
        const int16_t *source = features + chunk * TPU_K_CHUNK;
        for (unsigned int tile = 0; tile < TPU_ROW_TILES; tile++) {
            uint16_t *destination = tpu_dma_images[chunk][tile];
            memcpy(destination, source, TPU_K_CHUNK * sizeof(source[0]));
            cache_flush(destination, TPU_K_CHUNK * sizeof(source[0]));
        }
    }
}

static int submit_tile(unsigned int chunk, unsigned int tile, unsigned int bank)
{
    TpuDmaDescriptor *descriptor = &tpu_descriptors[bank];
    descriptor->source_addr = (uint32_t)(uintptr_t)tpu_dma_images[chunk][tile];
    descriptor->ub_addr_and_count = (bank * TPU_BANK_STRIDE << 16) |
                                    TPU_TILE_HALFWORDS;
    cache_flush(descriptor, sizeof(*descriptor));
    return (tpu_dma_load((uint32_t)(uintptr_t)descriptor) & TPU_STATUS_ERROR) ? -1 : 0;
}

static const uint32_t *program_for_bank(unsigned int bank)
{
    return bank ? runc_tpu_matmul_program_bank1 : runc_tpu_matmul_program_bank0;
}

static int start_tile(unsigned int bank)
{
    if (!programs_flushed) {
        cache_flush(runc_tpu_matmul_program_bank0, sizeof(runc_tpu_matmul_program_bank0));
        cache_flush(runc_tpu_matmul_program_bank1, sizeof(runc_tpu_matmul_program_bank1));
        programs_flushed = 1;
    }
    return (tpu_start((uint32_t)(uintptr_t)program_for_bank(bank)) & TPU_STATUS_ERROR) ? -1 : 0;
}

static int finish_tile(int32_t partials[TPU_TILE])
{
    uint32_t status;
    if (wait_results(&status) != 0) {
        return -1;
    }
    for (unsigned int lane = 0; lane < TPU_TILE; lane++) {
        partials[lane] = 0;
    }
    for (unsigned int pair = 0; pair < TPU_K_CHUNK / 2u; pair++) {
        const uint32_t packed = tpu_read_pair(pair);
        partials[(pair * 2u) & (TPU_TILE - 1u)] += (int16_t)(packed & 0xffffu);
        partials[(pair * 2u + 1u) & (TPU_TILE - 1u)] += (int16_t)(packed >> 16);
    }
    return 0;
}

static int run_tpu(const IntentModel *model, int32_t scores[INTENT_CLASS_COUNT])
{
    uint32_t status = 0;
    for (unsigned int row = 0; row < INTENT_CLASS_COUNT; row++) {
        scores[row] = model->bias[row];
    }

    for (unsigned int chunk = 0; chunk < TPU_K_CHUNKS; chunk++) {
        (void)tpu_clear();
        if (wait_cleared(&status) != 0) {
            return -1;
        }
        status = tpu_set_raw_result_mode(1);
        if (status & TPU_STATUS_ERROR) {
            return -1;
        }
        if (submit_tile(chunk, 0, 0) != 0 || wait_idle(&status) != 0) {
            return -1;
        }

        for (unsigned int tile = 0; tile < TPU_ROW_TILES; tile++) {
            const unsigned int bank = tile & 1u;
            int32_t partials[TPU_TILE];
            if (start_tile(bank) != 0) {
                return -1;
            }
            if (tile + 1u < TPU_ROW_TILES && submit_tile(chunk, tile + 1u, bank ^ 1u) != 0) {
                return -1;
            }
            if (finish_tile(partials) != 0) {
                return -1;
            }
            for (unsigned int lane = 0; lane < TPU_TILE; lane++) {
                const unsigned int row = tile * TPU_TILE + lane;
                if (row < INTENT_CLASS_COUNT) {
                    scores[row] += partials[lane];
                }
            }
        }
    }
    return 0;
}

int intent_tpu_init(IntentTpu *tpu, const IntentModel *model)
{
    if (tpu == NULL || model == NULL || model->weights == NULL) {
        return -1;
    }
    tpu->model = model;
    tpu->failures = 0;
#if ISP_CHAT_USE_TPU
    tpu->enabled = 1;
    prepare_weight_images(model);
#else
    tpu->enabled = 0;
#endif
    return 0;
}

int intent_tpu_score(IntentTpu *tpu,
                     const int16_t features[INTENT_FEATURE_DIM],
                     int32_t scores[INTENT_CLASS_COUNT])
{
#if ISP_CHAT_USE_TPU
    if (tpu->enabled) {
        update_input_images(features);
        for (unsigned int attempt = 0; attempt <= ISP_CHAT_TPU_RETRIES; attempt++) {
            if (run_tpu(tpu->model, scores) == 0) {
                return 0;
            }
            (void)tpu_clear();
        }
        tpu->enabled = 0;
        tpu->failures++;
        printf("[isp_chat] TPU failure status=0x%08x err=%u; CPU fallback enabled\n",
               (unsigned int)tpu_status(),
               (unsigned int)TPU_STATUS_ERROR_CODE(tpu_status()));
    }
#endif
    intent_score_cpu(tpu->model, features, scores);
    return 1;
}
