# ============================================================
# Verilator simulation Makefile
# Usage:
#   make          — compile
#   make run      — compile + run (generates wave.fst by default)
#   make fast     — compile + run without waveform
#   make wave     — compile + run + open GTKWave
#   make clean    — remove build artifacts
# ============================================================

TOP        := sim_top
RTL_ROOT   := ../rtl
SDK_ROOT   := ../sdk

# Default program to load into SRAM (override on command line)
PROGRAM    ?= hello_world
ifeq ($(PROGRAM),runc)
BIN_FILE   ?= $(SDK_ROOT)/run.bin
else
BIN_FILE   ?= $(SDK_ROOT)/$(PROGRAM).bin
endif
OBJ_DIR    := obj_dir
MIF_FILE   := $(OBJ_DIR)/axi_ram.mif
CONVERT    := $(OBJ_DIR)/convert
CONVERT_SRC:= $(SDK_ROOT)/software/bsp/env/convert.c
BIN_COPY   := $(OBJ_DIR)/$(notdir $(BIN_FILE))
HOSTCC     ?= cc
TRACE      ?= 1
TRACE_DEPTH ?= 8
RUN_ARGS   ?=
BUILD_JOBS ?= 0
BUILD_SDK  ?= 1
EXAMPLE_DIR := $(SDK_ROOT)/software/examples/$(PROGRAM)
FCEUX_PROGRAM := fceux-loongarch32r-soc
FCEUX_DIR := $(SDK_ROOT)/software/examples/loongson_AM/fceux-am
FCEUX_BIN := $(FCEUX_DIR)/build/$(FCEUX_PROGRAM).bin

# ---- Verilator flags ----
VERILATOR  := verilator
VFLAGS     := --cc --exe --build \
              --build-jobs $(BUILD_JOBS) \
              --top-module $(TOP) \
              --trace-fst \
              -O2 \
              -MAKEFLAGS "OPT_FAST=-O3" \
              -MAKEFLAGS "OPT_GLOBAL=-O3" \
              -Wno-fatal \
              --x-assign 0 \
              --x-initial 0 \
              -Wno-STMTDLY \
              -Wno-INITIALDLY \
              -Wno-BLKLOOPINIT \
              -Wno-BLKSEQ \
              -Wno-EOFNEWLINE \
              -Wno-VARHIDDEN \
              -Wno-MULTIDRIVEN \
              -Wno-UNOPTFLAT \
              -Wno-LATCH \
              -Wno-CASEINCOMPLETE \
              -Wno-CASEX \
              -Wno-WIDTHEXPAND \
              -Wno-WIDTHTRUNC \
              -Wno-TIMESCALEMOD \
              -Wno-PINMISSING \
              -Wno-IMPLICIT \
              --timing \
              -DSIMULATION=1 \
              -DSIMU=1 \
              "-DSRAM_Init_File=\"$(MIF_FILE)\""

# ---- Include paths ----
VINC := \
  -I$(RTL_ROOT) \
  -I$(RTL_ROOT)/ip/open-la500 \
  -I$(RTL_ROOT)/ip/APB_UART/URT

# ---- RTL source files ----
VSRCS := \
  sim_top.v \
  tpu_async_fifo_models.v \
  $(RTL_ROOT)/soc_top.v \
  $(RTL_ROOT)/ip/rst_sync/rst_sync.v \
  $(RTL_ROOT)/ip/open-la500/mycpu_top.v \
  $(RTL_ROOT)/ip/open-la500/if_stage.v \
  $(RTL_ROOT)/ip/open-la500/id_stage.v \
  $(RTL_ROOT)/ip/open-la500/exe_stage.v \
  $(RTL_ROOT)/ip/open-la500/mem_stage.v \
  $(RTL_ROOT)/ip/open-la500/wb_stage.v \
  $(RTL_ROOT)/ip/open-la500/regfile.v \
  $(RTL_ROOT)/ip/open-la500/alu.v \
  $(RTL_ROOT)/ip/open-la500/mul.v \
  $(RTL_ROOT)/ip/open-la500/div.v \
  $(RTL_ROOT)/ip/open-la500/csr.v \
  $(RTL_ROOT)/ip/open-la500/tlb_entry.v \
  $(RTL_ROOT)/ip/open-la500/btb.v \
  $(RTL_ROOT)/ip/open-la500/icache.v \
  $(RTL_ROOT)/ip/open-la500/dcache.v \
  $(RTL_ROOT)/ip/open-la500/axi_bridge.v \
  $(RTL_ROOT)/ip/open-la500/addr_trans.v \
  $(RTL_ROOT)/ip/open-la500/perf_counter.v \
  $(RTL_ROOT)/ip/open-la500/tools.v \
  $(RTL_ROOT)/ip/open-la500/lacc_core.v \
  $(RTL_ROOT)/ip/Bus_interconnects/Axi_CDC.v \
  $(RTL_ROOT)/ip/Bus_interconnects/axi2sram_sp_ext.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/AXI_top.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_crossbar.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_crossbar_rd.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_crossbar_wr.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_crossbar_addr.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_register.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_register_rd.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_register_wr.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_axil_adapter.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_axil_adapter_rd.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_axil_adapter_wr.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/arbiter.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/priority_encoder.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_dma.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_dma_rd.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_dma_wr.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/axi_dma_desc_mux.v \
  $(RTL_ROOT)/ip/verilog-axi-master/rtl/dma_config_axil.v \
  $(RTL_ROOT)/ip/ram_wrap/axi_wrap_ram_sp_ext.v \
  $(RTL_ROOT)/ip/ram_wrap/fpga_sram_sp.v \
  $(RTL_ROOT)/ip/APB_UART/axi_uart_controller.v \
  $(RTL_ROOT)/ip/APB_UART/axi2apb_bridge.v \
  $(RTL_ROOT)/ip/APB_UART/apb_mux2.v \
  $(RTL_ROOT)/ip/APB_UART/URT/uart_top.v \
  $(RTL_ROOT)/ip/APB_UART/URT/uart_regs.v \
  $(RTL_ROOT)/ip/APB_UART/URT/uart_receiver.v \
  $(RTL_ROOT)/ip/APB_UART/URT/uart_transmitter.v \
  $(RTL_ROOT)/ip/APB_UART/URT/uart_rfifo.v \
  $(RTL_ROOT)/ip/APB_UART/URT/uart_tfifo.v \
  $(RTL_ROOT)/ip/APB_UART/URT/uart_sync_flops.v \
  $(RTL_ROOT)/ip/APB_UART/URT/raminfr.v \
  $(RTL_ROOT)/ip/DVI/axi_dvi.v \
  $(RTL_ROOT)/ip/new_DVI/dvi.v \
  $(RTL_ROOT)/ip/new_DVI/DVI_Controller.v \
  $(RTL_ROOT)/ip/flash/flash_axil_wrap.v \
  $(RTL_ROOT)/ip/flash/flash_reader_async.v \
  $(RTL_ROOT)/ip/confreg/confreg.v \
  $(RTL_ROOT)/ip/confreg/digitaltube_controller.v \
  $(RTL_ROOT)/ip/confreg/key_debounce.v \
  $(RTL_ROOT)/ip/isp/isp_top.v \
  $(RTL_ROOT)/ip/isp/isp_core.v \
  $(RTL_ROOT)/ip/isp/sync_fifo.v \
  $(RTL_ROOT)/ip/isp/AXI2Video.v \
  $(RTL_ROOT)/ip/isp/Video2AXI.v \
  $(RTL_ROOT)/ip/isp/bilateral_filter.v \
  $(RTL_ROOT)/ip/isp/bilateral_filter_single.v \
  $(RTL_ROOT)/ip/isp/binarization.v \
  $(RTL_ROOT)/ip/isp/Brightness_adjustment.v \
  $(RTL_ROOT)/ip/isp/contrast_adj.v \
  $(RTL_ROOT)/ip/isp/filter.v \
  $(RTL_ROOT)/ip/isp/gamma.v \
  $(RTL_ROOT)/ip/isp/gaussian_filter.v \
  $(RTL_ROOT)/ip/isp/laplacian_sharpen.v \
  $(RTL_ROOT)/ip/isp/laplacian_sharpen_single.v \
  $(RTL_ROOT)/ip/isp/Matrix_Generate_3X3_8Bit.v \
  $(RTL_ROOT)/ip/isp/Matrix_Generate_5X5_8Bit.v \
  $(RTL_ROOT)/ip/isp/mean_filter_proc.v \
  $(RTL_ROOT)/ip/isp/mean_filter_single.v \
  $(RTL_ROOT)/ip/isp/median_filter.v \
  $(RTL_ROOT)/ip/isp/median_filter_single.v \
  $(RTL_ROOT)/ip/isp/mipi_receiver.v \
  $(RTL_ROOT)/ip/isp/RBG888_to_gray.v \
  $(RTL_ROOT)/ip/isp/RGB_to_gray.v \
  $(RTL_ROOT)/ip/isp/robert_sharpen.v \
  $(RTL_ROOT)/ip/isp/robert_sharpen_single.v \
  $(RTL_ROOT)/ip/isp/sharpen.v \
  $(RTL_ROOT)/ip/isp/Similary_LUT.v \
  $(RTL_ROOT)/ip/isp/sobel_detector.v \
  $(RTL_ROOT)/ip/isp/sobel_sharpen.v \
  $(RTL_ROOT)/ip/isp/sobel_sharpen_single.v \
  $(RTL_ROOT)/ip/isp/sort3.v \
  $(RTL_ROOT)/ip/isp/special.v \
  $(RTL_ROOT)/ip/isp/sqrt.v \
  $(RTL_ROOT)/ip/isp/system_top.v \
  $(RTL_ROOT)/ip/isp/uivtc.v \
  $(RTL_ROOT)/ip/isp_config_axil.v \
  $(RTL_ROOT)/ip/dma_config_axil.v \
  $(RTL_ROOT)/ip/tpu/tpu_axi_fetch_top.v \
  $(RTL_ROOT)/ip/tpu/tpu_isa_confreg.v \
  $(RTL_ROOT)/ip/tpu/decode.v \
  $(RTL_ROOT)/ip/tpu/tpu.v \
  $(RTL_ROOT)/ip/tpu/unified_buffer.sv \
  $(RTL_ROOT)/ip/tpu/vpu.v \
  $(RTL_ROOT)/ip/tpu/systolic.v \
  $(RTL_ROOT)/ip/tpu/pe.v \
  $(RTL_ROOT)/ip/tpu/bias_unit.v \
  $(RTL_ROOT)/ip/tpu/leaky_relu_unit.v \
  $(RTL_ROOT)/ip/tpu/fxp_add.v \
  $(RTL_ROOT)/ip/tpu/fxp_mul.v \
  $(RTL_ROOT)/ip/tpu/fxp_zoom.v

SIM_EXE := obj_dir/Vsim_top

.PHONY: all run fast wave clean sdk-build tpu-test

all: $(SIM_EXE)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(CONVERT): $(CONVERT_SRC) | $(OBJ_DIR)
	$(HOSTCC) -O2 -o $@ $<

sdk-build:
	@if [ "$(BUILD_SDK)" = "1" ] && [ "$(PROGRAM)" = "$(FCEUX_PROGRAM)" ]; then \
		$(MAKE) -C "$(FCEUX_DIR)" image; \
		cp "$(FCEUX_BIN)" "$(BIN_FILE)"; \
	elif [ "$(BUILD_SDK)" = "1" ] && [ -f "$(EXAMPLE_DIR)/Makefile" ]; then \
		$(MAKE) -C "$(EXAMPLE_DIR)"; \
	fi

$(BIN_COPY): sdk-build $(BIN_FILE) | $(OBJ_DIR)
	cp $(BIN_FILE) $@

$(MIF_FILE): $(BIN_COPY) $(CONVERT) | $(OBJ_DIR)
	rm -f $(OBJ_DIR)/axi_ram.coe $(OBJ_DIR)/axi_ram.mif $(OBJ_DIR)/rom.vlog
	./$(CONVERT) $(notdir $(BIN_COPY)) $(OBJ_DIR)/

$(SIM_EXE): sim_top.v sim_main.cpp $(VSRCS) $(MIF_FILE)
	$(VERILATOR) $(VFLAGS) $(VINC) $(VSRCS) sim_main.cpp

run: $(SIM_EXE)
	SIM_TRACE=$(TRACE) SIM_TRACE_DEPTH=$(TRACE_DEPTH) ./$(SIM_EXE) $(RUN_ARGS)

fast: TRACE=0
fast: run

wave: run
	gtkwave wave.fst &

tpu-test:
	verilator --binary --timing --top-module tpu_dma_tb \
		--Mdir /tmp/ciciec_tpu_dma_tb \
		-Wno-fatal -Wno-PINMISSING -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
		tpu_dma_tb.sv \
		$(RTL_ROOT)/ip/tpu/tpu_axi_fetch_top.v \
		$(RTL_ROOT)/ip/tpu/tpu_isa_confreg.v \
		$(RTL_ROOT)/ip/tpu/decode.v \
		$(RTL_ROOT)/ip/tpu/tpu.v \
		$(RTL_ROOT)/ip/tpu/unified_buffer.sv \
		$(RTL_ROOT)/ip/tpu/vpu.v \
		$(RTL_ROOT)/ip/tpu/systolic.v \
		$(RTL_ROOT)/ip/tpu/pe.v \
		$(RTL_ROOT)/ip/tpu/bias_unit.v \
		$(RTL_ROOT)/ip/tpu/leaky_relu_unit.v \
		$(RTL_ROOT)/ip/tpu/fxp_add.v \
		$(RTL_ROOT)/ip/tpu/fxp_mul.v \
		$(RTL_ROOT)/ip/tpu/fxp_zoom.v
	/tmp/ciciec_tpu_dma_tb/Vtpu_dma_tb

clean:
	rm -rf obj_dir wave.vcd wave.fst
