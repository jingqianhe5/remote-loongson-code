/* FCE Ultra - NES/Famicom Emulator
 *
 * Copyright notice for this file:
 *  Copyright (C) 2002 Xodnizel
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <klib-macros.h>
#include "sdl.h"
#include "../common/vidblit.h"
#include "../../fceu.h"
#include "../../version.h"
#include "../../video.h"

#include "../../utils/memory.h"

#include "sdl-icon.h"
#include "dface.h"

#include "sdl-video.h"
#include "../../config.h"

#if FCEUX_USE_DMA_DVI
extern "C" void *__am_gpu_dma_frame_begin(void);
extern "C" void __am_gpu_dma_frame_submit(void);
#endif

static int s_srendline;
//static int s_erendline;
static const int s_tlines = 240;
static int s_inited;

#define NWIDTH	256

static int s_paletterefresh;

#if FCEUX_USE_NEW_DVI
enum {
  NEW_DVI_FB_CPU_BASE = 0xb1000000u,
  NEW_DVI_CTRL_CPU_ADDR = 0xb10ffffcu,
};

static inline void NewDVIEnable(void)
{
  *(volatile uint32_t *)NEW_DVI_CTRL_CPU_ADDR = 1;
  __sync_synchronize();
}
#endif

int
KillVideo()
{
	// return failure if the video system was not initialized
	if(s_inited == 0)
		return -1;

	// if the rest of the system has been initialized, shut it down
		// shut down the system that converts from 8 to 16/32 bpp
#if !FCEUX_USE_NEW_DVI && !FCEUX_USE_DMA_DVI
  KillBlitToHigh();
#endif

	s_inited = 0;
	return 0;
}


void FCEUD_VideoChanged()
{
}

/**
 * Attempts to initialize the graphical video display.  Returns 0 on
 * success, -1 on failure.
 */
int
InitVideo(FCEUGI *gi)
{
	FCEUI_printf("Initializing video...");

	// check the starting, ending, and total scan lines
	//FCEUI_GetCurrentVidSystem(&s_srendline, &s_erendline);
	//s_tlines = s_erendline - s_srendline + 1;

	s_inited = 1;

	FCEUI_SetShowFPS(false);

	s_paletterefresh = 1;

#if !FCEUX_USE_NEW_DVI && !FCEUX_USE_DMA_DVI
	 // if using more than 8bpp, initialize the conversion routines
	InitBlitToHigh(4, 0x00ff0000, 0x0000ff00, 0x000000ff, 0, 0, 0);
#endif
#if FCEUX_USE_NEW_DVI
	NewDVIEnable();
#endif
	return 0;
}

static struct {
  uint8 r, g, b, unused;
} s_psdl[256];

static uint8 s_palette_rgb332[256];

static inline uint32_t Pack4RGB332(const uint8 *src)
{
  return (uint32_t)s_palette_rgb332[src[0]] |
         ((uint32_t)s_palette_rgb332[src[1]] << 8) |
         ((uint32_t)s_palette_rgb332[src[2]] << 16) |
         ((uint32_t)s_palette_rgb332[src[3]] << 24);
}

#if FCEUX_USE_NEW_DVI && FCEUX_NEW_DVI_DIFF
static uint32_t s_rgb332_prev[(NWIDTH * s_tlines) / 4] __attribute__((aligned(4)));
static int s_new_dvi_first_frame = 1;
#endif

/**
 * Sets the color for a particular index in the palette.
 */
void
FCEUD_SetPalette(uint8 index,
                 uint8 r,
                 uint8 g,
                 uint8 b)
{
	s_psdl[index].r = r;
	s_psdl[index].g = g;
	s_psdl[index].b = b;

	s_palette_rgb332[index] = (r & 0xE0) | ((g & 0xE0) >> 3) | ((b & 0xC0) >> 6);

	s_paletterefresh = 1;
}

/**
 * Pushes the given buffer of bits to the screen.
 */
void
BlitScreen(uint8 *XBuf)
{
	// refresh the palette if required
	if(s_paletterefresh) {
#if !FCEUX_USE_NEW_DVI && !FCEUX_USE_DMA_DVI
	    SetPaletteBlitToHigh((uint8*)s_psdl);
#endif
			s_paletterefresh = 0;
		}

	// XXX soules - not entirely sure why this is being done yet
	XBuf += s_srendline * 256;

	// XXX soules - again, I'm surprised SDL can't handle this
	// perform the blit, converting bpp if necessary
  //Blit8ToHigh(XBuf, (uint8 *)canvas, NWIDTH, s_tlines, NWIDTH * 4, 1, 1);

#ifdef HAS_GUI
#if FCEUX_USE_NEW_DVI
	  volatile uint32_t *dst32 = (volatile uint32_t *)NEW_DVI_FB_CPU_BASE;
	  const int words = (NWIDTH * s_tlines) / 4;
#if FCEUX_NEW_DVI_DIFF
	  int j = 0;
	  if (s_new_dvi_first_frame) {
	    for (; j + 8 <= words; j += 8, XBuf += 32) {
	      uint32_t v0 = Pack4RGB332(XBuf + 0);
	      uint32_t v1 = Pack4RGB332(XBuf + 4);
	      uint32_t v2 = Pack4RGB332(XBuf + 8);
	      uint32_t v3 = Pack4RGB332(XBuf + 12);
	      uint32_t v4 = Pack4RGB332(XBuf + 16);
	      uint32_t v5 = Pack4RGB332(XBuf + 20);
	      uint32_t v6 = Pack4RGB332(XBuf + 24);
	      uint32_t v7 = Pack4RGB332(XBuf + 28);
	      dst32[j+0] = v0; s_rgb332_prev[j+0] = v0;
	      dst32[j+1] = v1; s_rgb332_prev[j+1] = v1;
	      dst32[j+2] = v2; s_rgb332_prev[j+2] = v2;
	      dst32[j+3] = v3; s_rgb332_prev[j+3] = v3;
	      dst32[j+4] = v4; s_rgb332_prev[j+4] = v4;
	      dst32[j+5] = v5; s_rgb332_prev[j+5] = v5;
	      dst32[j+6] = v6; s_rgb332_prev[j+6] = v6;
	      dst32[j+7] = v7; s_rgb332_prev[j+7] = v7;
	    }
	    for (; j < words; j++, XBuf += 4) {
	      uint32_t v = Pack4RGB332(XBuf);
	      dst32[j] = v; s_rgb332_prev[j] = v;
	    }
	    s_new_dvi_first_frame = 0;
	    return;
	  }
	  for (; j + 8 <= words; j += 8, XBuf += 32) {
	    uint32_t v0 = Pack4RGB332(XBuf + 0);
	    uint32_t v1 = Pack4RGB332(XBuf + 4);
	    uint32_t v2 = Pack4RGB332(XBuf + 8);
	    uint32_t v3 = Pack4RGB332(XBuf + 12);
	    uint32_t v4 = Pack4RGB332(XBuf + 16);
	    uint32_t v5 = Pack4RGB332(XBuf + 20);
	    uint32_t v6 = Pack4RGB332(XBuf + 24);
	    uint32_t v7 = Pack4RGB332(XBuf + 28);
	    uint32_t p0 = s_rgb332_prev[j+0];
	    uint32_t p1 = s_rgb332_prev[j+1];
	    uint32_t p2 = s_rgb332_prev[j+2];
	    uint32_t p3 = s_rgb332_prev[j+3];
	    uint32_t p4 = s_rgb332_prev[j+4];
	    uint32_t p5 = s_rgb332_prev[j+5];
	    uint32_t p6 = s_rgb332_prev[j+6];
	    uint32_t p7 = s_rgb332_prev[j+7];
	    if (v0 != p0) { dst32[j+0] = v0; s_rgb332_prev[j+0] = v0; }
	    if (v1 != p1) { dst32[j+1] = v1; s_rgb332_prev[j+1] = v1; }
	    if (v2 != p2) { dst32[j+2] = v2; s_rgb332_prev[j+2] = v2; }
	    if (v3 != p3) { dst32[j+3] = v3; s_rgb332_prev[j+3] = v3; }
	    if (v4 != p4) { dst32[j+4] = v4; s_rgb332_prev[j+4] = v4; }
	    if (v5 != p5) { dst32[j+5] = v5; s_rgb332_prev[j+5] = v5; }
	    if (v6 != p6) { dst32[j+6] = v6; s_rgb332_prev[j+6] = v6; }
	    if (v7 != p7) { dst32[j+7] = v7; s_rgb332_prev[j+7] = v7; }
	  }
	  for (; j < words; j++, XBuf += 4) {
	    uint32_t v = Pack4RGB332(XBuf);
	    if (v != s_rgb332_prev[j]) { dst32[j] = v; s_rgb332_prev[j] = v; }
	  }
#else
	  int j = 0;
	  for (; j + 8 <= words; j += 8, XBuf += 32) {
	    dst32[j + 0] = Pack4RGB332(XBuf + 0);
	    dst32[j + 1] = Pack4RGB332(XBuf + 4);
	    dst32[j + 2] = Pack4RGB332(XBuf + 8);
	    dst32[j + 3] = Pack4RGB332(XBuf + 12);
	    dst32[j + 4] = Pack4RGB332(XBuf + 16);
	    dst32[j + 5] = Pack4RGB332(XBuf + 20);
	    dst32[j + 6] = Pack4RGB332(XBuf + 24);
	    dst32[j + 7] = Pack4RGB332(XBuf + 28);
	  }
	  for (; j < words; j++, XBuf += 4) {
	    dst32[j] = Pack4RGB332(XBuf);
	  }
#endif
#else
#if FCEUX_USE_DMA_DVI
	  volatile uint32_t *dst32 =
	      (volatile uint32_t *)__am_gpu_dma_frame_begin();
	  const int words = (NWIDTH * s_tlines) / 4;
	  int j = 0;
	  for (; j + 8 <= words; j += 8, XBuf += 32) {
	    dst32[j + 0] = Pack4RGB332(XBuf + 0);
	    dst32[j + 1] = Pack4RGB332(XBuf + 4);
	    dst32[j + 2] = Pack4RGB332(XBuf + 8);
	    dst32[j + 3] = Pack4RGB332(XBuf + 12);
	    dst32[j + 4] = Pack4RGB332(XBuf + 16);
	    dst32[j + 5] = Pack4RGB332(XBuf + 20);
	    dst32[j + 6] = Pack4RGB332(XBuf + 24);
	    dst32[j + 7] = Pack4RGB332(XBuf + 28);
	  }
	  for (; j < words; j++, XBuf += 4) {
	    dst32[j] = Pack4RGB332(XBuf);
	  }
	  __sync_synchronize();
	  __am_gpu_dma_frame_submit();
#else
	  static uint8 canvas_frame_8bit[NWIDTH * 240] __attribute__((aligned(4)));
	  static int sync_div = 0;
	  uint32_t *dst32 = (uint32_t *)canvas_frame_8bit;
	  int pixels = NWIDTH * s_tlines;
	  for (int i = 0, j = 0; i < pixels; i += 4, j++) {
	    dst32[j] = Pack4RGB332(XBuf + i);
	  }
	  io_write(AM_GPU_FBDRAW, 0, 0, canvas_frame_8bit, NWIDTH, s_tlines, false);
	  sync_div++;
	  if (sync_div >= (FCEUX_GPU_SYNC_INTERVAL > 0 ? FCEUX_GPU_SYNC_INTERVAL : 1)) {
	    io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
	    sync_div = 0;
	  }
#endif
#endif
#else
  static uint32_t canvas_line[NWIDTH];
  int i;
  printf("\033[2J\033[0;0H");
  for (i = 0; i < s_tlines; i += 4, XBuf += NWIDTH * 4) {
    Blit8ToHigh(XBuf, (uint8 *)canvas_line, NWIDTH, 1, NWIDTH * 4, 1, 1);
    for (int x = 0; x < NWIDTH; x += 2) {
      uint32_t color = canvas_line[x];
      const char *list = "o. *O0@#";
      char c = list[color / 0x222222u];
      putch(c);
    }
    putch('\n');
  }
#endif
}
