NAME = fceux
ARCH ?= loongarch32r-soc
override AM_HOME := $(abspath ..)
mainargs ?= mario
export ARCH AM_HOME

ROM_PATH  = ./nes
# Dedicated Mario appliance: do not embed unrelated games.
ROMS      = $(ROM_PATH)/rom/mario.nes
ROM_SRC   = $(addprefix $(ROM_PATH)/gen/, $(addsuffix .c, $(notdir $(basename $(ROMS)))))
ALL_FCEUX_SRC := $(shell find -L src/ -name "*.c" -o -name "*.cpp")
FCEUX_SRC = $(filter-out src/boards/%,$(ALL_FCEUX_SRC)) src/boards/datalatch.cpp

INC_PATH  = $(ROM_PATH)/gen/
SRCS      = $(FCEUX_SRC) $(ROM_SRC)
CFLAGS    = -O3 -DPSS_STYLE=1 -DFRAMESKIP -D__NO_FILE_SYSTEM__ -DUSE_CPU_CLOCK_COUNT
CFLAGS   += -ffunction-sections -fdata-sections -fno-unwind-tables
CFLAGS   += -DMAINARGS=\"$(mainargs)\"
LDFLAGS  += --gc-sections

include $(AM_HOME)/Makefile

$(FCEUX_SRC): $(ROM_SRC)
$(ROM_SRC): rom
.PHONY: rom
rom:
	@-cd $(ROM_PATH) && ROM_NAMES=mario python3 build-roms.py

clean: myclean

myclean:
	-rm -rf ./nes/gen
