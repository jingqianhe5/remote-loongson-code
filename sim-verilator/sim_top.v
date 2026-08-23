`timescale 1ns/1ps
`include "config.h"

// SRAM model used by the simulator instead of sim/sram.v
module sram_model #(
    parameter AW = 20,
    parameter Init_File = "none",
    parameter Init_Offset = 0
) (
    inout  [31:0] ram_data,
    input  [AW-1:0] ram_addr,
    input  [ 3:0] ram_be_n,
    input         ram_ce_n,
    input         ram_oe_n,
    input         ram_we_n
);
    localparam integer DEPTH = 1 << AW;
    reg [31:0] mem [0:DEPTH-1];
    wire [3:0] write_enable;
    integer init_fd;
    integer init_status;
    integer init_word_index;
    integer mem_word_index;
    reg [31:0] init_word;

    initial begin
        if (Init_File != "none") begin
            init_fd = $fopen(Init_File, "r");
            if (init_fd == 0) begin
                $display("[sim] Failed to open SRAM init file: %s", Init_File);
            end else begin
                init_word_index = 0;
                mem_word_index = 0;
                while (!$feof(init_fd) && mem_word_index < DEPTH) begin
                    init_status = $fscanf(init_fd, "%b\n", init_word);
                    if (init_status == 1) begin
                        if (init_word_index >= Init_Offset) begin
                            mem[mem_word_index] = init_word;
                            mem_word_index = mem_word_index + 1;
                        end
                        init_word_index = init_word_index + 1;
                    end
                end
                $fclose(init_fd);
            end
        end
    end

    assign write_enable = (~ram_be_n) & {4{(~ram_ce_n) & (~ram_we_n)}};
    assign ram_data = (!ram_ce_n && !ram_oe_n) ? mem[ram_addr] : 32'hzzzzzzzz;

    always @(posedge write_enable[0]) mem[ram_addr][ 7: 0] <= ram_data[ 7: 0];
    always @(posedge write_enable[1]) mem[ram_addr][15: 8] <= ram_data[15: 8];
    always @(posedge write_enable[2]) mem[ram_addr][23:16] <= ram_data[23:16];
    always @(posedge write_enable[3]) mem[ram_addr][31:24] <= ram_data[31:24];
endmodule

module blk_mem_gen_0 (
    input         clka,
    input         ena,
    input  [0:0]  wea,
    input  [18:0] addra,
    input  [7:0]  dina,
    input         clkb,
    input         enb,
    input  [18:0] addrb,
    output reg [7:0] doutb
);
    localparam integer DEPTH = 480000;
    reg [7:0] mem [0:DEPTH-1];

    always @(posedge clka) begin
        if (ena && wea[0] && addra < DEPTH)
            mem[addra] <= dina;
    end

    always @(posedge clkb) begin
        if (enb)
            doutb <= (addrb < DEPTH) ? mem[addrb] : 8'd0;
    end
endmodule

module uart_tx_monitor (
    input        clk,
    input        rst_n,
    input        baud16_tick,
    input        suppress,
    input        txd,
    input  [7:0] lcr
);
    localparam ST_IDLE   = 3'd0;
    localparam ST_START  = 3'd1;
    localparam ST_DATA   = 3'd2;
    localparam ST_PARITY = 3'd3;
    localparam ST_STOP   = 3'd4;

    reg [2:0] state;
    reg [3:0] sample_cnt;
    reg [2:0] bit_cnt;
    reg [7:0] rx_data;

    wire [3:0] data_bits = {2'b00, lcr[1:0]} + 4'd5;
    wire       parity_en = lcr[3];

    initial begin
        state      = ST_IDLE;
        sample_cnt = 4'd0;
        bit_cnt    = 3'd0;
        rx_data    = 8'd0;
    end

    always @(posedge clk) begin
        if (!rst_n) begin
            state      <= ST_IDLE;
            sample_cnt <= 4'd0;
            bit_cnt    <= 3'd0;
            rx_data    <= 8'd0;
        end else if (baud16_tick) begin
            case (state)
            ST_IDLE: begin
                if (!txd) begin
                    sample_cnt <= 4'd7;
                    state      <= ST_START;
                end
            end

            ST_START: begin
                if (sample_cnt != 4'd0) begin
                    sample_cnt <= sample_cnt - 4'd1;
                end else if (!txd) begin
                    sample_cnt <= 4'd15;
                    bit_cnt    <= 3'd0;
                    rx_data    <= 8'd0;
                    state      <= ST_DATA;
                end else begin
                    state <= ST_IDLE;
                end
            end

            ST_DATA: begin
                if (sample_cnt != 4'd0) begin
                    sample_cnt <= sample_cnt - 4'd1;
                end else begin
                    rx_data[bit_cnt] <= txd;
                    sample_cnt       <= 4'd15;
                    if ({1'b0, bit_cnt} == data_bits - 4'd1) begin
                        state <= parity_en ? ST_PARITY : ST_STOP;
                    end else begin
                        bit_cnt <= bit_cnt + 3'd1;
                    end
                end
            end

            ST_PARITY: begin
                if (sample_cnt != 4'd0) begin
                    sample_cnt <= sample_cnt - 4'd1;
                end else begin
                    sample_cnt <= 4'd15;
                    state      <= ST_STOP;
                end
            end

            ST_STOP: begin
                if (sample_cnt != 4'd0) begin
                    sample_cnt <= sample_cnt - 4'd1;
                end else begin
                    if (!suppress) begin
                        $write("%c", rx_data);
                        $fflush();
                    end
                    state <= ST_IDLE;
                end
            end

            default: state <= ST_IDLE;
            endcase
        end
    end
endmodule

module uart_fifo_monitor (
    input        clk,
    input        rst_n,
    input        char_valid,
    input  [7:0] char_data,
    output reg   active
);
    initial active = 1'b0;

    reg [7:0] utf8_byte_0;
    reg [7:0] utf8_byte_1;
    reg [7:0] utf8_byte_2;
    reg [2:0] utf8_expected;
    reg [2:0] utf8_received;

    initial begin
        utf8_byte_0  = 8'd0;
        utf8_byte_1  = 8'd0;
        utf8_byte_2  = 8'd0;
        utf8_expected = 3'd0;
        utf8_received = 3'd0;
    end

    always @(posedge clk) begin
        if (!rst_n) begin
            active <= 1'b0;
            utf8_expected <= 3'd0;
            utf8_received <= 3'd0;
        end else if (char_valid) begin
            active <= 1'b1;
            if (utf8_expected == 3'd0) begin
                if (char_data < 8'h80) begin
                    $write("%c", char_data);
                    $fflush();
                end else if ((char_data & 8'he0) == 8'hc0) begin
                    utf8_byte_0  <= char_data;
                    utf8_expected <= 3'd2;
                    utf8_received <= 3'd1;
                end else if ((char_data & 8'hf0) == 8'he0) begin
                    utf8_byte_0  <= char_data;
                    utf8_expected <= 3'd3;
                    utf8_received <= 3'd1;
                end else if ((char_data & 8'hf8) == 8'hf0) begin
                    utf8_byte_0  <= char_data;
                    utf8_expected <= 3'd4;
                    utf8_received <= 3'd1;
                end else begin
                    $write("?");
                    $fflush();
                end
            end else if ((char_data & 8'hc0) != 8'h80) begin
                // Invalid/truncated UTF-8 from the simulated UART.
                $write("?");
                $fflush();
                utf8_expected <= 3'd0;
                utf8_received <= 3'd0;
            end else if (utf8_received == 3'd1 && utf8_expected == 3'd2) begin
                $write("%c%c", utf8_byte_0, char_data);
                $fflush();
                utf8_expected <= 3'd0;
                utf8_received <= 3'd0;
            end else if (utf8_received == 3'd1) begin
                utf8_byte_1  <= char_data;
                utf8_received <= 3'd2;
            end else if (utf8_received == 3'd2 && utf8_expected == 3'd3) begin
                $write("%c%c%c", utf8_byte_0, utf8_byte_1, char_data);
                $fflush();
                utf8_expected <= 3'd0;
                utf8_received <= 3'd0;
            end else if (utf8_received == 3'd2) begin
                utf8_byte_2  <= char_data;
                utf8_received <= 3'd3;
            end else begin
                $write("%c%c%c%c", utf8_byte_0, utf8_byte_1,
                       utf8_byte_2, char_data);
                $fflush();
                utf8_expected <= 3'd0;
                utf8_received <= 3'd0;
            end
        end
    end
endmodule

// Top-level simulation wrapper with no inout ports exposed to C++
module sim_top;

// ---- Clock & Reset ----
reg clk;
reg reset;

initial begin
    clk   = 1'b0;
    reset = 1'b1;
    #2000;
    reset = 1'b0;
end
always #10 clk = ~clk;  // 50 MHz

// ---- Board peripherals (tie-off) ----
reg  [3:0]  touch_btn = 4'b0;
reg  [31:0] dip_sw    = 32'b0;
wire        clock_btn = 1'b0;
wire        UART_RX   = 1'b1;  // idle high

// Generate button pulses, matching sim/mycpu_tb.v
initial begin
    touch_btn = 4'h0;
    dip_sw    = 32'h0000_abcd;

    #3000000;

    #100000;
    touch_btn = 4'b0001;
    #50;
    touch_btn = 4'b0000;

    #100000;
    touch_btn = 4'b0010;
    #50;
    touch_btn = 4'b0000;

    #100000;
    touch_btn = 4'b0100;
    #50;
    touch_btn = 4'b0000;

    #100000;
    touch_btn = 4'b1000;
    #50;
    touch_btn = 4'b0000;
end

// ---- Video outputs (unused in sim) ----
wire [2:0] video_red;
wire [2:0] video_green;
wire [1:0] video_blue;
wire video_hsync, video_vsync, video_clk, video_de;

// ---- LED / 7-seg ----
wire [15:0] leds;
wire [ 7:0] dpy0, dpy1;

// ---- BaseRAM ----
wire [31:0] base_ram_data;
wire [19:0] base_ram_addr;
wire [ 3:0] base_ram_be_n;
wire        base_ram_ce_n, base_ram_oe_n, base_ram_we_n;

// ---- ExtRAM ----
wire [31:0] ext_ram_data;
wire [19:0] ext_ram_addr;
wire [ 3:0] ext_ram_be_n;
wire        ext_ram_ce_n, ext_ram_oe_n, ext_ram_we_n;

// ---- Flash (tie-off, not used in sim) ----
wire [22:0] flash_a;
wire [15:0] flash_d;
wire flash_rp_n, flash_vpen, flash_ce_n, flash_oe_n, flash_we_n, flash_byte_n;
// Flash data bus: always high-Z so flash_reader sees no valid data
assign flash_d = 16'hzzzz;

// ---- UART TX ----
wire UART_TX;

// ================================================================
// DUT
// ================================================================
soc_top #(.SIMULATION(1'b1)) u_soc_top (
    .clk            (clk           ),
    .reset          (reset         ),
    .video_red      (video_red     ),
    .video_green    (video_green   ),
    .video_blue     (video_blue    ),
    .video_hsync    (video_hsync   ),
    .video_vsync    (video_vsync   ),
    .video_clk      (video_clk     ),
    .video_de       (video_de      ),
    .clock_btn      (clock_btn     ),
    .touch_btn      (touch_btn     ),
    .dip_sw         (dip_sw        ),
    .leds           (leds          ),
    .dpy0           (dpy0          ),
    .dpy1           (dpy1          ),
    .base_ram_data  (base_ram_data ),
    .base_ram_addr  (base_ram_addr ),
    .base_ram_be_n  (base_ram_be_n ),
    .base_ram_ce_n  (base_ram_ce_n ),
    .base_ram_oe_n  (base_ram_oe_n ),
    .base_ram_we_n  (base_ram_we_n ),
    .ext_ram_data   (ext_ram_data  ),
    .ext_ram_addr   (ext_ram_addr  ),
    .ext_ram_be_n   (ext_ram_be_n  ),
    .ext_ram_ce_n   (ext_ram_ce_n  ),
    .ext_ram_oe_n   (ext_ram_oe_n  ),
    .ext_ram_we_n   (ext_ram_we_n  ),
    .flash_a        (flash_a       ),
    .flash_d        (flash_d       ),
    .flash_rp_n     (flash_rp_n    ),
    .flash_vpen     (flash_vpen    ),
    .flash_ce_n     (flash_ce_n    ),
    .flash_oe_n     (flash_oe_n    ),
    .flash_we_n     (flash_we_n    ),
    .flash_byte_n   (flash_byte_n  ),
    .UART_RX        (UART_RX       ),
    .UART_TX        (UART_TX       )
);

// ================================================================
// SRAM models
// ================================================================
sram_model #(.AW(20), .Init_File(`SRAM_Init_File), .Init_Offset(0)) u_base_sram (
    .ram_data (base_ram_data),
    .ram_addr (base_ram_addr),
    .ram_be_n (base_ram_be_n),
    .ram_ce_n (base_ram_ce_n),
    .ram_oe_n (base_ram_oe_n),
    .ram_we_n (base_ram_we_n)
);

sram_model #(.AW(20), .Init_File(`SRAM_Init_File), .Init_Offset(1 << 20)) u_ext_sram (
    .ram_data (ext_ram_data),
    .ram_addr (ext_ram_addr),
    .ram_be_n (ext_ram_be_n),
    .ram_ce_n (ext_ram_ce_n),
    .ram_oe_n (ext_ram_oe_n),
    .ram_we_n (ext_ram_we_n)
);

// ================================================================
// UART output monitor
// ================================================================
wire uart_fifo_monitor_active;

uart_fifo_monitor u_uart_fifo_monitor (
    .clk        (u_soc_top.sys_clk),
    .rst_n      (u_soc_top.sys_resetn),
    .char_valid (u_soc_top.u_axi_uart_controller.uart0.regs.tf_push),
    .char_data  (u_soc_top.u_axi_uart_controller.uart0.regs.dat_i),
    .active     (uart_fifo_monitor_active)
);

uart_tx_monitor u_uart_tx_monitor (
    .clk         (u_soc_top.sys_clk),
    .rst_n       (u_soc_top.sys_resetn),
    .baud16_tick (u_soc_top.u_axi_uart_controller.uart0.regs.enable),
    .suppress    (uart_fifo_monitor_active),
    .txd         (UART_TX),
    .lcr         (u_soc_top.u_axi_uart_controller.uart0.regs.lcr)
);

// ================================================================
// TPU debug monitor, enabled with +tpu-debug
// ================================================================
reg tpu_debug_enable;
integer tpu_fetch_seen;
integer tpu_wait_print_div;
reg tpu_lacc_start_prev;
reg tpu_busy_prev;
reg tpu_done_prev;
reg tpu_error_prev;
reg [2:0] tpu_state_prev;

initial begin
    tpu_debug_enable = $test$plusargs("tpu-debug") || $test$plusargs("tpu_debug");
    tpu_fetch_seen = 0;
    tpu_wait_print_div = 0;
    tpu_lacc_start_prev = 1'b0;
    tpu_busy_prev = 1'b0;
    tpu_done_prev = 1'b0;
    tpu_error_prev = 1'b0;
    tpu_state_prev = 3'd0;
    if (tpu_debug_enable) begin
        $display("[tpu_dbg] monitor enabled");
    end
end

always @(posedge u_soc_top.cpu_clk) begin
    if (!u_soc_top.cpu_resetn) begin
        tpu_fetch_seen <= 0;
        tpu_wait_print_div <= 0;
    end else if (tpu_debug_enable) begin
        if (u_soc_top.lacc_tpu_start && !tpu_lacc_start_prev) begin
            $display("[tpu_dbg] lacc_start pc=0x%08x busy=%0b done=%0b err=%0b",
                     u_soc_top.lacc_tpu_start_pc,
                     u_soc_top.tpu_busy,
                     u_soc_top.tpu_done,
                     u_soc_top.tpu_error);
        end

        if (u_soc_top.tpu_lacc_cmd_fifo_wr_en) begin
            $display("[tpu_dbg] cmd push op=%0d payload=0x%08x",
                     u_soc_top.lacc_tpu_cmd_op,
                     u_soc_top.lacc_tpu_cmd_payload);
        end

        if (u_soc_top.tpu_busy && !tpu_busy_prev) begin
            $display("[tpu_dbg] busy rise pc=0x%08x last=0x%08x",
                     u_soc_top.tpu_pc_current,
                     u_soc_top.tpu_last_ins);
        end

        if (u_soc_top.u_tpu_axi_fetch_top.state != tpu_state_prev) begin
            $display("[tpu_dbg] state %0d -> %0d pc=0x%08x last=0x%08x",
                     tpu_state_prev,
                     u_soc_top.u_tpu_axi_fetch_top.state,
                     u_soc_top.u_tpu_axi_fetch_top.pc_current,
                     u_soc_top.u_tpu_axi_fetch_top.last_ins);
        end

        if (u_soc_top.u_tpu_axi_fetch_top.m_axi_arvalid &&
            u_soc_top.u_tpu_axi_fetch_top.m_axi_arready) begin
            $display("[tpu_dbg] ar addr=0x%08x pc=0x%08x state=%0d",
                     u_soc_top.u_tpu_axi_fetch_top.m_axi_araddr,
                     u_soc_top.u_tpu_axi_fetch_top.pc_current,
                     u_soc_top.u_tpu_axi_fetch_top.state);
        end

        if (u_soc_top.u_tpu_axi_fetch_top.m_axi_rvalid &&
            u_soc_top.u_tpu_axi_fetch_top.m_axi_rready &&
            tpu_fetch_seen < 80) begin
            $display("[tpu_dbg] rdata=0x%08x pc=0x%08x state=%0d",
                     u_soc_top.u_tpu_axi_fetch_top.m_axi_rdata,
                     u_soc_top.u_tpu_axi_fetch_top.pc_current,
                     u_soc_top.u_tpu_axi_fetch_top.state);
            tpu_fetch_seen <= tpu_fetch_seen + 1;
        end

        if ((u_soc_top.tpu_done && !tpu_done_prev) ||
            (u_soc_top.tpu_error && !tpu_error_prev)) begin
            $display("[tpu_dbg] finish busy=%0b done=%0b err=%0b pc=0x%08x last=0x%08x",
                     u_soc_top.tpu_busy,
                     u_soc_top.tpu_done,
                     u_soc_top.tpu_error,
                     u_soc_top.tpu_pc_current,
                     u_soc_top.tpu_last_ins);
        end

        if (u_soc_top.u_tpu_axi_fetch_top.state == 3'd4) begin
            tpu_wait_print_div <= tpu_wait_print_div + 1;
            if (tpu_wait_print_div == 0 || (tpu_wait_print_div % 16384) == 0) begin
                $display("[tpu_dbg] wait type=%0d limit=%0d cnt=%0d seen=%0b sig=%0b weight=%0b vpu=%0b pc=0x%08x last=0x%08x",
                         u_soc_top.u_tpu_axi_fetch_top.wait_type,
                         u_soc_top.u_tpu_axi_fetch_top.wait_limit,
                         u_soc_top.u_tpu_axi_fetch_top.wait_counter,
                         u_soc_top.u_tpu_axi_fetch_top.wait_seen_valid,
                         u_soc_top.u_tpu_axi_fetch_top.wait_signal,
                         u_soc_top.u_tpu_axi_fetch_top.weight_valid_any,
                         u_soc_top.u_tpu_axi_fetch_top.vpu_valid_any,
                         u_soc_top.u_tpu_axi_fetch_top.pc_current,
                         u_soc_top.u_tpu_axi_fetch_top.last_ins);
            end
        end else begin
            tpu_wait_print_div <= 0;
        end

        tpu_lacc_start_prev <= u_soc_top.lacc_tpu_start;
        tpu_busy_prev       <= u_soc_top.tpu_busy;
        tpu_done_prev       <= u_soc_top.tpu_done;
        tpu_error_prev      <= u_soc_top.tpu_error;
        tpu_state_prev      <= u_soc_top.u_tpu_axi_fetch_top.state;
    end
end


always @(posedge u_soc_top.tpu_clk) begin
    if (u_soc_top.tpu_resetn && tpu_debug_enable) begin
        if (u_soc_top.tpu_lacc_cmd_fifo_rd_en) begin
            $display("[tpu_dbg] cmd pop op=%0d payload=0x%08x clear=%0b start=%0b dma=%0b",
                     u_soc_top.tpu_lacc_cmd_op_tpu,
                     u_soc_top.tpu_lacc_cmd_payload_tpu,
                     u_soc_top.tpu_clear_final,
                     u_soc_top.tpu_start_final,
                     u_soc_top.tpu_dma_req_valid);
        end
        if (u_soc_top.tpu_clear_final) begin
            $display("[tpu_dbg] clear pulse exec_done=%0b dma_done=%0b busy=%0b",
                     u_soc_top.u_tpu_axi_fetch_top.exec_done_reg,
                     u_soc_top.u_tpu_axi_fetch_top.dma_done_reg,
                     u_soc_top.tpu_busy_tpu);
        end
    end
end

// ================================================================
// Simulation termination
// ================================================================
integer new_dvi_byte_count;
integer new_dvi_frame_count;
reg [31:0] new_dvi_frame_checksum;

initial begin
    new_dvi_byte_count = 0;
    new_dvi_frame_count = 0;
    new_dvi_frame_checksum = 0;
end

always @(posedge u_soc_top.sys_clk) begin
    if (!u_soc_top.sys_resetn) begin
        new_dvi_byte_count <= 0;
        new_dvi_frame_count <= 0;
        new_dvi_frame_checksum <= 0;
    end else if (u_soc_top.u_new_dvi.dvi_write_en_o) begin
        if (new_dvi_byte_count == 61_439) begin
            $display("[sim] new DVI DMA frame=%0d checksum=0x%08x",
                     new_dvi_frame_count + 1,
                     new_dvi_frame_checksum + u_soc_top.u_new_dvi.dvi_write_data_o);
            new_dvi_byte_count <= 0;
            new_dvi_frame_count <= new_dvi_frame_count + 1;
            new_dvi_frame_checksum <= 0;
        end else begin
            new_dvi_byte_count <= new_dvi_byte_count + 1;
            new_dvi_frame_checksum <=
                new_dvi_frame_checksum + u_soc_top.u_new_dvi.dvi_write_data_o;
        end
    end
end

wire [31:0] wb_pc = u_soc_top.cpu_debug0_wb_pc;
reg finish_on_legacy_pc;

initial begin
    finish_on_legacy_pc = $test$plusargs("legacy-finish-pc");
end

always @(posedge u_soc_top.cpu_clk) begin
    if (u_soc_top.cpu_resetn &&
        (wb_pc == 32'h1c000548 || (finish_on_legacy_pc && wb_pc == 32'h1c000200))) begin
        $display("\n[sim] Test end (PC=0x%08x)", wb_pc);
        $finish;
    end
end

// Timeout guard
integer cycle_cnt;
integer timeout_cycles;
initial begin
    cycle_cnt = 0;
    if (!$value$plusargs("timeout-cycles=%d", timeout_cycles))
        timeout_cycles = 20_000_000;
end
always @(posedge clk) begin
    cycle_cnt <= cycle_cnt + 1;
    if (timeout_cycles > 0 && cycle_cnt >= timeout_cycles) begin
        $display("[sim] Timeout after %0d cycles, wb_pc=0x%08x", cycle_cnt, wb_pc);
        $finish;
    end
end

endmodule
