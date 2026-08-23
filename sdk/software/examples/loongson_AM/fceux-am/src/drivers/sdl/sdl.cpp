#include <klib-macros.h>
#include "main.h"
#include "throttle.h"

#include "../../fceu.h"
#include "../../version.h"

#include "input.h"
#include "dface.h"

#include "sdl.h"
#include "sdl-video.h"

#include "../../types.h"
#include "../../config.h"

int isloaded;

bool turbo = false;

int eoptions=0;

static int inited = 0;

static void DriverKill(void);
static int DriverInitialize(FCEUGI *gi);
uint64 FCEUD_GetTime();
void FCEUD_SetPadState(uint32 state);
int gametype = 0;

int pal_emulation;
int dendy;

bool swapDuty;

#if FCEUX_RUNTIME_LOG
#define FCEUX_LOG(...) printf("[fceux] " __VA_ARGS__)
static inline uint64 RuntimeLogNowMs(void) {
  return io_read(AM_TIMER_UPTIME).us / 1000;
}

static void LogStageCost(const char *stage, uint64 start_ms) {
  uint64 elapsed_ms = RuntimeLogNowMs() - start_ms;
  if (elapsed_ms >= FCEUX_LOG_STAGE_MS) {
    FCEUX_LOG("%s took %llu ms\n", stage, (unsigned long long)elapsed_ms);
  }
}
#else
#define FCEUX_LOG(...) ((void)0)
#endif

// global configuration object
//Config *g_config;

/**
 * Loads a game, given a full path/filename.  The driver code must be
 * initialized after the game is loaded, because the emulator code
 * provides data necessary for the driver code(number of scanlines to
 * render, what virtual input devices to use, etc.).
 */
int LoadGame(const char *path)
{
#if FCEUX_RUNTIME_LOG
		uint64 start_ms = RuntimeLogNowMs();
		FCEUX_LOG("LoadGame begin rom=%s\n", path);
#endif
    if (isloaded){
        FCEUX_LOG("LoadGame: closing previous game\n");
        CloseGame();
    }
#if FCEUX_RUNTIME_LOG
	uint64 load_core_start = RuntimeLogNowMs();
#endif
	if(!FCEUI_LoadGame(path, 1)) {
			FCEUX_LOG("LoadGame: FCEUI_LoadGame failed for %s\n", path);
			return 0;
		}
#if FCEUX_RUNTIME_LOG
	LogStageCost("FCEUI_LoadGame", load_core_start);
	FCEUX_LOG("LoadGame: mapper=%d type=%d\n", GameInfo ? GameInfo->mappernum : -1, GameInfo ? GameInfo->type : -1);

	uint64 parse_input_start = RuntimeLogNowMs();
#endif
	ParseGIInput(GameInfo);
#if FCEUX_RUNTIME_LOG
	LogStageCost("ParseGIInput", parse_input_start);
#endif
	RefreshThrottleFPS();

#if FCEUX_RUNTIME_LOG
	uint64 driver_init_start = RuntimeLogNowMs();
#endif
	if(!DriverInitialize(GameInfo)) {
			FCEUX_LOG("LoadGame: DriverInitialize failed\n");
			return(0);
		}
#if FCEUX_RUNTIME_LOG
	LogStageCost("DriverInitialize", driver_init_start);
#endif

	FCEUI_SetRegion(FCEUX_DEFAULT_REGION);
	isloaded = 1;
#if FCEUX_RUNTIME_LOG
	LogStageCost("LoadGame total", start_ms);
	FCEUX_LOG("LoadGame end isloaded=%d\n", isloaded);
#endif

	return 1;
}

/**
 * Closes a game.  Frees memory, and deinitializes the drivers.
 */
int
CloseGame()
{
	if(!isloaded) {
		return(0);
	}

	FCEUI_CloseGame();

	DriverKill();
	isloaded = 0;
	GameInfo = 0;

	InputUserActiveFix();
	return(1);
}

void FCEUD_Update(uint8 *XBuf, int32 *Buffer, int Count);

static void DoFun(int frameskip, int periodic_saves)
{
	uint8 *gfx;
	int32 *sound;
	int32 ssize = 0;
	static int fskipc = 0;
	static int opause = 0;
#if FCEUX_RUNTIME_LOG
	static uint64 frame_id = 0;
	uint64 frame_start_ms = RuntimeLogNowMs();
	uint64 emulate_end_ms;
	uint64 update_end_ms;
#endif
#if FCEUX_SERIAL_FPS
	static uint32 run_frames = 0;
#endif
#if FCEUX_SERIAL_FPS
	static uint32 fps_last_ms = 0;
	static uint32 fps_core_frames = 0;
	static uint32 fps_draw_frames = 0;
#endif

#ifdef FRAMESKIP
	fskipc = (fskipc + 1) % (frameskip + 1);
#endif

	if(NoWaiting) {
		gfx = 0;
	}
	FCEUI_Emulate(&gfx, &sound, &ssize, fskipc);
#if FCEUX_RUNTIME_LOG
	emulate_end_ms = RuntimeLogNowMs();
#endif
	FCEUD_Update(gfx, sound, ssize);
#if FCEUX_SERIAL_FPS
	fps_core_frames++;
	if (gfx) fps_draw_frames++;
	uint32 now_ms = FCEUD_GetTime();
	if (fps_last_ms == 0) fps_last_ms = now_ms;
	if (now_ms - fps_last_ms >= 1000) {
		printf("FPS core=%u draw=%u skip=%d\n", fps_core_frames, fps_draw_frames, frameskip);
		fps_last_ms = now_ms;
		fps_core_frames = 0;
		fps_draw_frames = 0;
	}
#endif
#if FCEUX_SERIAL_FPS
	run_frames++;
#endif
#if FCEUX_RUNTIME_LOG
	update_end_ms = RuntimeLogNowMs();

	{
		uint64 emulate_ms = emulate_end_ms - frame_start_ms;
		uint64 update_ms = update_end_ms - emulate_end_ms;
		uint64 total_ms = update_end_ms - frame_start_ms;
		if (emulate_ms >= FCEUX_LOG_STAGE_MS || update_ms >= FCEUX_LOG_STAGE_MS || total_ms >= FCEUX_LOG_FRAME_MS) {
			FCEUX_LOG("slow frame=%llu skip=%d emulate=%llu ms update=%llu ms total=%llu ms audio_samples=%d gfx=%s\n",
				(unsigned long long)frame_id,
				fskipc,
				(unsigned long long)emulate_ms,
				(unsigned long long)update_ms,
				(unsigned long long)total_ms,
				ssize,
				gfx ? "yes" : "no");
		}
	}
	frame_id++;
#endif

	if(opause!=FCEUI_EmulationPaused()) {
		opause=FCEUI_EmulationPaused();
#if FCEUX_RUNTIME_LOG
		FCEUX_LOG("emulation pause state changed: %d\n", opause);
#endif
		//SilenceSound(opause);
	}
}


/**
 * Initialize all of the subsystem drivers: video, audio, and joystick.
 */
static int
DriverInitialize(FCEUGI *gi)
{
#if FCEUX_RUNTIME_LOG
	uint64 video_start = RuntimeLogNowMs();
#endif
	if(InitVideo(gi) < 0) return 0;
#if FCEUX_RUNTIME_LOG
	LogStageCost("InitVideo", video_start);
#endif
	inited|=4;

#if !FCEUX_DISABLE_AUDIO
#if FCEUX_RUNTIME_LOG
  uint64 sound_start = RuntimeLogNowMs();
#endif
  if(InitSound())
    inited|=1;
#if FCEUX_RUNTIME_LOG
  LogStageCost("InitSound", sound_start);
#endif
#endif

	eoptions &= ~EO_FOURSCORE;

#if FCEUX_RUNTIME_LOG
	uint64 input_start = RuntimeLogNowMs();
#endif
	InitInputInterface();
#if FCEUX_RUNTIME_LOG
	LogStageCost("InitInputInterface", input_start);
#endif
	return 1;
}

/**
 * Shut down all of the subsystem drivers: video, audio, and joystick.
 */
static void
DriverKill()
{
	if(inited&4)
		KillVideo();
	inited=0;
}

/**
 * Update the video, audio, and input subsystems with the provided
 * video (XBuf) and audio (Buffer) information.
 */
void
FCEUD_Update(uint8 *XBuf,
			 int32 *Buffer,
			 int Count)
		{
#if FCEUX_RUNTIME_LOG
			uint64 update_start_ms = RuntimeLogNowMs();
#endif
#if FCEUX_DISABLE_AUDIO
			if(XBuf && (inited&4)) {
				BlitScreen(XBuf);
			}
#if !FCEUX_DISABLE_INPUT
			FCEUD_UpdateInput();
#endif
#if FCEUX_RUNTIME_LOG
			LogStageCost("FCEUD_Update", update_start_ms);
#endif
			return;
#else
			int ocount = Count;
			int blitDone = 0;
		if(Count) {
		int32 can=GetWriteSound();
		static int uflow=0;
		int32 tmpcan;

		// don't underflow when scaling fps
		if(can >= (int)GetMaxSound()) uflow=1;	/* Go into massive underflow mode. */

		if(can > Count) can=Count;
		else uflow=0;

    WriteSound(Buffer,can);

		//if(uflow) puts("Underflow");
		tmpcan = GetWriteSound();

		// don't underflow when scaling fps
		if((tmpcan < Count*9/10) && !uflow) {
			if(XBuf && (inited&4) && !(NoWaiting & 2)) {
				BlitScreen(XBuf); blitDone = 1;
			}
			Buffer+=can;
			Count-=can;
			if(Count) {
				if(NoWaiting) {
					can=GetWriteSound();
					if(Count>can) Count=can;
          WriteSound(Buffer,Count);
				} else {
					while(Count>0) {
            WriteSound(Buffer,(Count<ocount) ? Count : ocount);
						Count -= ocount;
					}
				}
			}
		} //else puts("Skipped");
    // Fceux believes that audio buffer underflow only occurs with a network
    // play, but NEMU runs too slow, which may also underflow the audio buffer.
    // So we should add back the following code to handle such underflow.
    // Note that we remove "&& FCEUDnetplay" in the condition.
		else if(!NoWaiting && (uflow || tmpcan >= (Count * 9 / 5))) {
			if(Count > tmpcan) Count=tmpcan;
			while(tmpcan > 0) {
				//	printf("Overwrite: %d\n", (Count <= tmpcan)?Count : tmpcan);
				WriteSound(Buffer, (Count <= tmpcan)?Count : tmpcan);
				tmpcan -= Count;
			}
		}
	} else {
		if(!NoWaiting && (!(eoptions&EO_NOTHROTTLE) || FCEUI_EmulationPaused())) {
      while (SpeedThrottle()) { FCEUD_UpdateInput(); }
    }
		if(XBuf && (inited&4)) {
			BlitScreen(XBuf); blitDone = 1;
		}
	}
		if (!blitDone) {
			if(XBuf && (inited&4)) {
				BlitScreen(XBuf);
			}
			}
#if !FCEUX_DISABLE_INPUT
			FCEUD_UpdateInput();
#endif
#if FCEUX_RUNTIME_LOG
			LogStageCost("FCEUD_Update", update_start_ms);
#endif
#endif
		}

/**
 * Opens a file to be read a byte at a time.
 */
EMUFILE_FILE* FCEUD_UTF8_fstream(const char *fn, const char *m)
{
#ifdef __NO_FILE_SYSTEM__
  EMUFILE_FILE *p = (EMUFILE_FILE*)malloc(sizeof(EMUFILE_FILE));
  p->open(fn, m);
  return p;
#else
  return new EMUFILE_FILE(fn, m);
#endif
}

static void UpdateEMUCore()
{
	int ntsccol = 0,   //色彩饱和度
		ntsctint = 56, //色相偏移
		ntschue = 72, //色相基准
		start = 0, //从第一行开始渲染
		end = 239;//渲染到最后一行
	FCEUI_SetNTSCTH(ntsccol, ntsctint, ntschue);//设置上述参数

	FCEUI_SetRegion(FCEUX_DEFAULT_REGION);//低性能板默认可切到PAL 50Hz以降低CPU压力

	FCEUI_DisableSpriteLimitation(0);//关闭精灵限制？？？    为了优化性能 （不限制精灵数量，可能会有闪烁，但性能更好）

#if DOING_SCANLINE_CHECKS
	for(int i = 0; x < 2; x++) {//扫描  这里是不是错了？原来是i<2
		if(srendlinev[x]<0 || srendlinev[x]>239) srendlinev[x]=0;
		if(erendlinev[x]<srendlinev[x] || erendlinev[x]>239) erendlinev[x]=239;
	}
#endif

	FCEUI_SetRenderedLines(start + 8, end - 8, start, end);//保持干净边界
}

/**
 * Unimplemented.
 */
void FCEUD_TraceInstruction() {
	return;
}


int noGui = 1;

int KillFCEUXonFrame = 0;

/**
 * The main loop for the SDL.
 */
#ifdef __NO_FILE_SYSTEM__
int main(const char *romname)
#else
int main(int argc, char *argv[])
#endif
{
	  FCEUX_LOG("main begin\n");
	  ioe_init();
	  FCEUX_LOG("ioe_init complete\n");
#if FCEUX_RUNTIME_LOG
	  uint64 boot_start_ms = RuntimeLogNowMs();
#endif

#ifndef __NO_FILE_SYSTEM__
  const char *romname;
  if (argc < 2) {
    romname = "mario3.nes";
    printf("No ROM specified. Deafult to %s\n", romname);
  } else {
    romname = argv[1];
  }

  static char fullpath[128];
  if (romname[0] != '/') {
    sprintf(fullpath, "/share/games/nes/%s", romname);
    romname = fullpath;
  }
#endif

  printf("ROM is %s\n", romname);

	int error;

		FCEUD_Message("Starting " FCEU_NAME_AND_VERSION "...\n");

		// initialize the infrastructure
#if FCEUX_RUNTIME_LOG
		uint64 init_start_ms = RuntimeLogNowMs();
#endif
		error = FCEUI_Initialize();//初始化虚拟视频系统 设置FSettings 初始化PPU  初始化6502cpu
		if(error != 1) {
			FCEUX_LOG("FCEUI_Initialize failed\n");
			return -1;
		}
#if FCEUX_RUNTIME_LOG
		LogStageCost("FCEUI_Initialize", init_start_ms);
#endif

	  // update the input devices
		//UpdateInput();//配置键盘输入映射  暂时不需要

		// update the emu core
#if FCEUX_RUNTIME_LOG
		uint64 emu_core_start = RuntimeLogNowMs();
#endif
		UpdateEMUCore();//设置运行参数
#if FCEUX_RUNTIME_LOG
		LogStageCost("UpdateEMUCore", emu_core_start);
#endif

	  // load the specified game
#if FCEUX_RUNTIME_LOG
	  uint64 load_game_start = RuntimeLogNowMs();
#endif
	  error = LoadGame(romname);//加载指定游戏
	  if(error != 1) {
	    FCEUX_LOG("LoadGame failed for rom=%s\n", romname);
	    DriverKill();//如果加载失败 关闭驱动
	    return -1;
	  }
#if FCEUX_RUNTIME_LOG
	  LogStageCost("LoadGame(main)", load_game_start);
	  FCEUX_LOG("startup complete in %llu ms\n", (unsigned long long)(RuntimeLogNowMs() - boot_start_ms));
#endif

  int periodic_saves = 0;

	// loop playing the game
	while(GameInfo)
	{
		DoFun(NR_FRAMESKIP, periodic_saves);
	}
	CloseGame();

	// exit the infrastructure
	FCEUI_Kill();
	return 0;
}

/**
 * Get the time in ticks.
 */
uint64
FCEUD_GetTime()
{
	return io_read(AM_TIMER_UPTIME).us / 1000;
}

/**
 * Get the tick frequency in Hz.
 */
uint32
FCEUD_GetTimeFreq(void)
{
	// uptime() is in milliseconds
	return 1000;
}

/**
* Prints a textual message without adding a newline at the end.
*
* @param text The text of the message.
*
* TODO: This function should have a better name.
**/
void FCEUD_Message(const char *text)
{
  printf("%s", text);
}

/**
* Shows an error message in a message box.
* (For now: prints to stderr.)
*
* If running in GTK mode, display a dialog message box of the error.
*
* @param errormsg Text of the error message.
**/
void FCEUD_PrintError(const char *errormsg)
{
	printf("%s\n", errormsg);
}


// dummy functions

#define DUMMY(__f) \
    void __f(void) {\
        printf("%s\n", #__f);\
        FCEU_DispMessage("Not implemented.");\
    }
DUMMY(FCEUD_HideMenuToggle)
DUMMY(FCEUD_MovieReplayFrom)
DUMMY(FCEUD_ToggleStatusIcon)
DUMMY(FCEUD_AviRecordTo)
DUMMY(FCEUD_AviStop)
void FCEUI_AviVideoUpdate(const unsigned char* buffer) { }
int FCEUD_ShowStatusIcon(void) {return 0;}
bool FCEUI_AviIsRecording(void) {return false;}
void FCEUI_UseInputPreset(int preset) { }
bool FCEUD_PauseAfterPlayback() { return false; }
// These are actually fine, but will be unused and overriden by the current UI code.
void FCEUD_TurboOn	(void) { NoWaiting|= 1; }
void FCEUD_TurboOff   (void) { NoWaiting&=~1; }
void FCEUD_TurboToggle(void) { NoWaiting^= 1; }
