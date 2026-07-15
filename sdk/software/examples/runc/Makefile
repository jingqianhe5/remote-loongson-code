TARGET = run

CFLAGS += -O3 -g

#根据SIMU宏选择串口波特率,0：FPGA上板；1：仿真
CFLAGS += -DSIMU=1
CFLAGS += -DLLAMA_USE_TPU=1

# Verilator has no UART RX stimulus by default. This opt-in image bypasses the
# prompt wait and executes one token so the complete TPU path can be checked.
ifeq ($(RUNC_SIM_AUTORUN),1)
CFLAGS += -DLLAMA_SIM_AUTORUN=1
CFLAGS += -DLLAMA_DEFAULT_PROMPT=\"hello\"
CFLAGS += -DLLAMA_DEFAULT_STEPS=1
CFLAGS += -DLLAMA_TPU_TIMEOUT=100000u
CFLAGS += -DLLAMA_TPU_DEBUG_FALLBACK=1
endif

C_SRCS := $(wildcard ./*.c )
ASM_SRCS += ./runc_q8_weights.S

OBJDIR = obj
COMMON_DIR = ../../bsp
GCC_DIR=../../../toolchains/loongson-gnu-toolchain-8.3-x86_64-loongarch32r-linux-gnusf-v2.0
PICOLIBC_DIR=../../../toolchains/picolibc
LINKER_SCRIPT = ./runc.lds
SEMIHOST_LIB =
INCLUDES += -I$(OBJDIR)
CLEAN_OBJS += $(OBJDIR)/runc_tpu_program.h
CLEAN_OBJS += $(OBJDIR)/runc_q8_weights.bin
include ../../bsp/common.mk

$(OBJDIR)/runc_tpu_program.h: ./make_runc_tpu_program.py
	mkdir -p $(OBJDIR)
	python3 ./make_runc_tpu_program.py --out $@

./run.o: $(OBJDIR)/runc_tpu_program.h

$(OBJDIR)/runc_q8_weights.bin: ./stories_data.h ./make_runc_q8_weights.py
	mkdir -p $(OBJDIR)
	python3 ./make_runc_q8_weights.py --model-header ./stories_data.h --out $@

./runc_q8_weights.o: $(OBJDIR)/runc_q8_weights.bin
