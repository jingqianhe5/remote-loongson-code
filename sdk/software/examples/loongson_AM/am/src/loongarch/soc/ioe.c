#include <am.h>
#include <loongarch/loongarch32r.h>
#include <klib-macros.h>
#include <string.h>

#ifndef AM_USE_NEW_DVI
#define AM_USE_NEW_DVI 1
#endif

void __am_timer_init();

void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *);

enum {
  DVI_AXI_BASE = 0x1f100000,
  DVI_BASE = 0xbf100000,
  DVI_MODE = DVI_BASE + 0x10,
  DVI_DATA = DVI_BASE + 0x14,
  DVI_SIZE = DVI_BASE + 0x18,
  DVI_START = DVI_BASE + 0x1c,
  DVI_WH = DVI_BASE + 0x20,
  DVI_CMD = DVI_BASE + 0x24,
  DMA_BASE = 0xbf300000,
  DMA_READ_ADDR = DMA_BASE + 0x00,
  DMA_READ_LEN = DMA_BASE + 0x04,
  DMA_WRITE_ADDR = DMA_BASE + 0x08,
  DMA_WRITE_LEN = DMA_BASE + 0x0c,
  DMA_START = DMA_BASE + 0x10,
  DMA_STATUS = DMA_BASE + 0x14,
  DMA_STATUS_READ_READY = 1 << 0,
  DMA_STATUS_WRITE_READY = 1 << 1,
  DMA_STATUS_BUSY = 1 << 2,
  DMA_STATUS_DONE = 1 << 3,
  DMA_STATUS_READ_CMD_VALID = 1 << 4,
  DMA_STATUS_WRITE_CMD_VALID = 1 << 5,
  DMA_STATUS_READ_PENDING = 1 << 6,
  DMA_STATUS_WRITE_PENDING = 1 << 7,
  DMA_STATUS_READ_DESC_SEEN = 1 << 8,
  DMA_STATUS_WRITE_DESC_SEEN = 1 << 9,
  DMA_START_READ = 1 << 0,
  DMA_START_WRITE = 1 << 1,
  DVI_FB_WIDTH = 256,
  DVI_FB_HEIGHT = 240,
  DVI_FB_BYTES = DVI_FB_WIDTH * DVI_FB_HEIGHT,
  DVI_FB_STRIDE = 0x10000,
  DVI_DMA_DATA = DVI_AXI_BASE + 0x14,
  DVI_FB_SRAM_AXI_BASE = 0x1c400000,
  DVI_FB_SRAM_CPU_BASE = 0xbc400000,
  NEW_DVI_FB_AXI_BASE = 0x11000000,
  NEW_DVI_FB_CPU_BASE = 0xb1000000,
  NEW_DVI_CTRL_CPU_ADDR = 0xb10ffffc,
};

static int dvi_draw_fb_idx = 0;
#if !AM_USE_NEW_DVI
static int dvi_dma_window_configured = 0;
#endif
static const uint8_t *g_pending_full_frame = NULL;

// 在常规（带Cache）内存中分配一个软背板，并要求4字节对齐以便后续快速拷贝
static uint8_t g_cached_backbuffer[DVI_FB_BYTES] __attribute__((aligned(4)));

static inline uintptr_t dvi_shadow_fb_phys(int idx) {
  return DVI_FB_SRAM_AXI_BASE + (uintptr_t)(idx * DVI_FB_STRIDE);
}

static inline volatile uint8_t *dvi_shadow_fb_uncached(int idx) {
  return (volatile uint8_t *)(DVI_FB_SRAM_CPU_BASE + (uintptr_t)(idx * DVI_FB_STRIDE));
}

static inline volatile uint8_t *dvi_draw_fb_uncached(void) {
  return dvi_shadow_fb_uncached(dvi_draw_fb_idx);
}

static inline void dvi_dma_barrier(void) {
  __sync_synchronize();
}

static inline void dvi_copy_frame_to_shadow(volatile uint32_t *dst, const uint32_t *src) {
  int words = DVI_FB_BYTES / 4;
  int i = 0;
  for (; i + 8 <= words; i += 8) {
    dst[i + 0] = src[i + 0];
    dst[i + 1] = src[i + 1];
    dst[i + 2] = src[i + 2];
    dst[i + 3] = src[i + 3];
    dst[i + 4] = src[i + 4];
    dst[i + 5] = src[i + 5];
    dst[i + 6] = src[i + 6];
    dst[i + 7] = src[i + 7];
  }
  for (; i < words; i++) {
    dst[i] = src[i];
  }
}

static inline void new_dvi_enable(void) {
  outl(NEW_DVI_CTRL_CPU_ADDR, 1);
  __sync_synchronize();
}

static inline void new_dvi_copy_words(volatile uint32_t *dst, const uint32_t *src, int words) {
  int i = 0;
  for (; i + 8 <= words; i += 8) {
    dst[i + 0] = src[i + 0];
    dst[i + 1] = src[i + 1];
    dst[i + 2] = src[i + 2];
    dst[i + 3] = src[i + 3];
    dst[i + 4] = src[i + 4];
    dst[i + 5] = src[i + 5];
    dst[i + 6] = src[i + 6];
    dst[i + 7] = src[i + 7];
  }
  for (; i < words; i++) {
    dst[i] = src[i];
  }
}

static inline void new_dvi_fill(uint8_t color) {
  volatile uint32_t *dst = (volatile uint32_t *)NEW_DVI_FB_CPU_BASE;
  uint32_t fill = (uint32_t)color | ((uint32_t)color << 8) |
                  ((uint32_t)color << 16) | ((uint32_t)color << 24);
  int words = DVI_FB_BYTES / 4;
  for (int i = 0; i < words; i++) {
    dst[i] = fill;
  }
}


#if !AM_USE_NEW_DVI
static inline void dvi_config_window(uint32_t mode, int x, int y, int w, int h) {
  outl(DVI_MODE, mode);
  outl(DVI_SIZE, ((uint32_t)DVI_FB_WIDTH << 16) | DVI_FB_HEIGHT);
  outl(DVI_START, ((uint32_t)x << 16) | (uint16_t)y);
  outl(DVI_WH, ((uint32_t)w << 16) | (uint16_t)h);
  outl(DVI_CMD, 1);
}
#endif

static inline uint32_t dma_status_read(void) {
  return inl(DMA_STATUS);
}

static void dma_wait_ready(void) {
  while ((dma_status_read() &
          (DMA_STATUS_READ_READY | DMA_STATUS_WRITE_READY)) !=
         (DMA_STATUS_READ_READY | DMA_STATUS_WRITE_READY)) {
  }
}

static void dma_wait_idle(void) {
  while (dma_status_read() & DMA_STATUS_BUSY) {
  }
}

static void dvi_dma_flush_shadow(void) {
  int flush_fb_idx = dvi_draw_fb_idx;

  dma_wait_idle();
  dvi_dma_barrier();
#if !AM_USE_NEW_DVI
  if (!dvi_dma_window_configured) {
    dvi_config_window(3, 0, 0, DVI_FB_WIDTH, DVI_FB_HEIGHT);
    dvi_dma_window_configured = 1;
  }
#endif
  dma_wait_ready();
  outl(DMA_READ_ADDR, (uint32_t)dvi_shadow_fb_phys(flush_fb_idx));
  outl(DMA_READ_LEN, DVI_FB_BYTES);
#if AM_USE_NEW_DVI
  outl(DMA_WRITE_ADDR, NEW_DVI_FB_AXI_BASE);
#else
  outl(DMA_WRITE_ADDR, DVI_DMA_DATA);
#endif
  outl(DMA_WRITE_LEN, DVI_FB_BYTES);
  outl(DMA_START, DMA_START_READ | DMA_START_WRITE);

  dvi_draw_fb_idx ^= 1;
}

void *__am_gpu_dma_frame_begin(void) {
  return (void *)dvi_draw_fb_uncached();
}

void __am_gpu_dma_frame_submit(void) {
  dvi_dma_flush_shadow();
}

static void dvi_fill_rect(int x, int y, int w, int h, uint8_t color) {
  volatile uint8_t *shadow_fb = dvi_draw_fb_uncached();

  if (x < 0 || y < 0 || w <= 0 || h <= 0) return;
  if (x >= DVI_FB_WIDTH || y >= DVI_FB_HEIGHT) return;
  if (x + w > DVI_FB_WIDTH) w = DVI_FB_WIDTH - x;
  if (y + h > DVI_FB_HEIGHT) h = DVI_FB_HEIGHT - y;

  for (int row = 0; row < h; row++) {
    volatile uint8_t *dst = &shadow_fb[(y + row) * DVI_FB_WIDTH + x];
    for (int col = 0; col < w; col++) {
      dst[col] = color;
    }
  }
}

static void __am_uart_tx(AM_UART_TX_T *tx) { putch(tx->data); }
static void __am_uart_rx(AM_UART_RX_T *rx) { rx->data = '\0'; }

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = false; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = false; }
static void __am_uart_config(AM_UART_CONFIG_T *cfg) { cfg->present = true; }
static void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  cfg->present = true;
  cfg->has_accel = false;
  cfg->width = DVI_FB_WIDTH;
  cfg->height = DVI_FB_HEIGHT;
  cfg->vmemsz = DVI_FB_WIDTH * DVI_FB_HEIGHT;
}
static void __am_gpu_status(AM_GPU_STATUS_T *status) {
#if AM_USE_NEW_DVI
  status->ready = true;
#else
  status->ready = (dma_status_read() & DMA_STATUS_BUSY) == 0;
#endif
}
static void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
#if AM_USE_NEW_DVI
  if (ctl->sync) return;
  if (ctl->pixels == NULL || ctl->w <= 0 || ctl->h <= 0) return;
  if (ctl->x < 0 || ctl->y < 0) return;
  if (ctl->x >= DVI_FB_WIDTH || ctl->y >= DVI_FB_HEIGHT) return;

  int draw_w = ctl->w;
  int draw_h = ctl->h;
  if (ctl->x + draw_w > DVI_FB_WIDTH) draw_w = DVI_FB_WIDTH - ctl->x;
  if (ctl->y + draw_h > DVI_FB_HEIGHT) draw_h = DVI_FB_HEIGHT - ctl->y;
  if (draw_w <= 0 || draw_h <= 0) return;

  uint8_t *pixels = (uint8_t *)ctl->pixels;
  volatile uint8_t *fb = (volatile uint8_t *)NEW_DVI_FB_CPU_BASE;
  if (ctl->x == 0 && ctl->y == 0 && draw_w == DVI_FB_WIDTH &&
      draw_h == DVI_FB_HEIGHT && ctl->w == DVI_FB_WIDTH) {
    new_dvi_copy_words((volatile uint32_t *)fb, (const uint32_t *)pixels, DVI_FB_BYTES / 4);
    return;
  }
  for (int row = 0; row < draw_h; row++) {
    volatile uint8_t *dst = &fb[(ctl->y + row) * DVI_FB_WIDTH + ctl->x];
    uint8_t *src = &pixels[row * ctl->w];
    int col = 0;
    for (; col < draw_w; col++) dst[col] = src[col];
  }
#else
  if (ctl->sync) {
    // 收到同步信号，此时将背板(Cache)上的数据利用 32 位循环一次性全部刷入无缓存显存
    volatile uint32_t *dst = (volatile uint32_t *)dvi_draw_fb_uncached();
    const uint32_t *src = (const uint32_t *)(g_pending_full_frame ? g_pending_full_frame : g_cached_backbuffer);
    dvi_copy_frame_to_shadow(dst, src);
    g_pending_full_frame = NULL;

    dvi_dma_flush_shadow();
    return;
  }
  if (ctl->pixels == NULL || ctl->w <= 0 || ctl->h <= 0) return;
  if (ctl->x < 0 || ctl->y < 0) return;
  if (ctl->x >= DVI_FB_WIDTH || ctl->y >= DVI_FB_HEIGHT) return;

  int draw_w = ctl->w;
  int draw_h = ctl->h;
  if (ctl->x + draw_w > DVI_FB_WIDTH) draw_w = DVI_FB_WIDTH - ctl->x;
  if (ctl->y + draw_h > DVI_FB_HEIGHT) draw_h = DVI_FB_HEIGHT - ctl->y;
  if (draw_w <= 0 || draw_h <= 0) return;

  // 约定：上层 fceux-am 此时传过来的 pixels 已经直接是 8位 RGB332 数组了！
  uint8_t *pixels = (uint8_t *)ctl->pixels;
  if (ctl->x == 0 && ctl->y == 0 && draw_w == DVI_FB_WIDTH && draw_h == DVI_FB_HEIGHT && ctl->w == DVI_FB_WIDTH) {
    g_pending_full_frame = pixels;
    return;
  }

  if (g_pending_full_frame) {
    memcpy(g_cached_backbuffer, g_pending_full_frame, DVI_FB_BYTES);
    g_pending_full_frame = NULL;
  }
  for (int row = 0; row < draw_h; row++) {
    memcpy(&g_cached_backbuffer[(ctl->y + row) * DVI_FB_WIDTH + ctl->x], &pixels[row * ctl->w], draw_w);
  }
#endif
}

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_UART_TX     ] = __am_uart_tx,
  [AM_UART_RX     ] = __am_uart_rx,
  [AM_UART_CONFIG ] = __am_uart_config,
  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_STATUS  ] = __am_gpu_status,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
};

static void fail(void *buf) { panic("access nonexist register"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  __am_timer_init();//初始化定时器

#if AM_USE_NEW_DVI
  new_dvi_enable();
  for (int fb = 0; fb < 2; fb++) {
    volatile uint32_t *shadow = (volatile uint32_t *)dvi_shadow_fb_uncached(fb);
    for (int i = 0; i < DVI_FB_BYTES / 4; i++) shadow[i] = 0;
  }
  dvi_dma_flush_shadow();
  return true;
#endif
  
  // 初始化缓存背板
  for (int i = 0; i < DVI_FB_BYTES; i++) {
    g_cached_backbuffer[i] = 0;//初始化缓存
  }

  for (int fb = 0; fb < 2; fb++) {//初始化双缓冲两个缓存页
    volatile uint8_t *shadow_fb = dvi_shadow_fb_uncached(fb);
    for (int i = 0; i < DVI_FB_BYTES; i++) {
      shadow_fb[i] = 0;
    }
  }
  dvi_fill_rect(0, 0, DVI_FB_WIDTH, DVI_FB_HEIGHT, 0x00);//设置全黑
  g_pending_full_frame = NULL;
  dvi_dma_flush_shadow();//内存数据搬运到DVI
  return true;
}

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
