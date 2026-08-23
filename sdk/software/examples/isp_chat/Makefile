TARGET = isp_chat

CFLAGS += -O3 -g
CFLAGS += -DSIMU=1
CFLAGS += -DISP_CHAT_USE_TPU=1

ifeq ($(ISP_CHAT_SIM_AUTORUN),1)
CFLAGS += -DISP_CHAT_SIM_AUTORUN=1
endif

C_SRCS := $(wildcard ./*.c)
ASM_SRCS += ./intent_model.S

OBJDIR = obj
HOSTCC ?= cc
COMMON_DIR = ../../bsp
GCC_DIR = ../../../toolchains/loongson-gnu-toolchain-8.3-x86_64-loongarch32r-linux-gnusf-v2.0
PICOLIBC_DIR = ../../../toolchains/picolibc
LINKER_SCRIPT = ../runc/runc.lds
SEMIHOST_LIB =
INCLUDES += -I$(OBJDIR)

TRAINING_DIR = ../../../../training
MODEL_BIN = $(OBJDIR)/intent_model_q8_8.bin
MODEL_DEPS = \
	$(TRAINING_DIR)/intents.json \
	$(TRAINING_DIR)/data/manual_seeds.jsonl \
	$(TRAINING_DIR)/data/teacher_distilled.jsonl \
	$(TRAINING_DIR)/isp_features.py \
	$(TRAINING_DIR)/intent_resolver.py \
	$(TRAINING_DIR)/generate_synthetic.py \
	$(TRAINING_DIR)/train_intent.py \
	$(TRAINING_DIR)/train_linear_intent.py \
	$(TRAINING_DIR)/validate_dataset.py \
	$(TRAINING_DIR)/validate_teacher_data.py

TPU_PROGRAM = $(OBJDIR)/runc_tpu_program.h

CLEAN_OBJS += $(MODEL_BIN)
CLEAN_OBJS += $(OBJDIR)/intent_model_fp32.npz
CLEAN_OBJS += $(OBJDIR)/intent_model_manifest.json
CLEAN_OBJS += $(TPU_PROGRAM)
CLEAN_OBJS += $(OBJDIR)/intent_classifier_host

export PATH := $(abspath $(GCC_DIR)/bin):$(PATH)

include ../../bsp/common.mk

$(MODEL_BIN): $(MODEL_DEPS)
	mkdir -p $(OBJDIR)
	python3 $(TRAINING_DIR)/train_linear_intent.py --output $(OBJDIR) --feature-dim 2048

./intent_model.o: $(MODEL_BIN)

$(TPU_PROGRAM): ../runc/make_runc_tpu_program.py
	mkdir -p $(OBJDIR)
	python3 $< --out $@

./intent_tpu.o: $(TPU_PROGRAM)

.PHONY: training-test host-test rtl-contrast-test rtl-config-test
training-test:
	python3 $(TRAINING_DIR)/validate_dataset.py
	python3 $(TRAINING_DIR)/validate_teacher_data.py --minimum 20
	python3 $(TRAINING_DIR)/test_teacher_quality.py
	python3 $(TRAINING_DIR)/test_direction_cases.py

host-test: training-test $(MODEL_BIN)
	$(HOSTCC) -std=c11 -O2 -Wall -Wextra -Werror -I. \
		tests/intent_classifier_cli.c intent_classifier.c \
		-o $(OBJDIR)/intent_classifier_host
	python3 tests/check_intent_classifier.py \
		--classifier $(OBJDIR)/intent_classifier_host \
		--model $(MODEL_BIN)

rtl-contrast-test:
	verilator --binary --timing --top-module contrast_adj_tb \
		--Mdir /tmp/isp_chat_contrast_tb \
		-Wno-fatal -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
		tests/contrast_adj_tb.sv ../../../../rtl/ip/isp/contrast_adj.v
	/tmp/isp_chat_contrast_tb/Vcontrast_adj_tb

rtl-config-test:
	verilator --binary --timing --top-module isp_config_axil_tb \
		--Mdir /tmp/isp_chat_config_tb \
		-Wno-fatal -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
		tests/isp_config_axil_tb.sv ../../../../rtl/ip/isp_config_axil.v
	/tmp/isp_chat_config_tb/Visp_config_axil_tb
