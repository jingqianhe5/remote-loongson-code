`timescale 1ns/1ps

module unified_buffer #(
    parameter int UNIFIED_BUFFER_WIDTH = 1024,
    parameter int SYSTOLIC_ARRAY_WIDTH = 8,
    parameter bit SUPPORT_UB_ACCUMULATE = 1'b0
)(
    input logic clk,
    input logic rst,

    input logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_wr_data_in_bus,
    input logic [SYSTOLIC_ARRAY_WIDTH-1:0] ub_wr_valid_in_bus,
    input logic [15:0] ub_wr_addr_in,
    input logic ub_wr_addr_start_in,
    input logic ub_wr_accumulate_in,
    input logic [15:0] ub_grad_addr_in,
    input logic ub_grad_addr_start_in,

    input logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_wr_host_data_in_bus,
    input logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_wr_host_addr_in_bus,
    input logic [SYSTOLIC_ARRAY_WIDTH-1:0] ub_wr_host_valid_in_bus,

    input logic ub_rd_start_in,
    input logic ub_rd_transpose,
    input logic [8:0] ub_ptr_select,
    input logic [15:0] ub_rd_addr_in,
    input logic [15:0] ub_rd_row_size,
    input logic [15:0] ub_rd_col_size,
    input logic [15:0] learning_rate_in,

    output logic [15:0] ub_rd_input_data_out_0,
    output logic [15:0] ub_rd_input_data_out_1,
    output logic ub_rd_input_valid_out_0,
    output logic ub_rd_input_valid_out_1,
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_input_data_bus_out,
    output logic [SYSTOLIC_ARRAY_WIDTH-1:0] ub_rd_input_valid_bus_out,
    output logic [15:0] ub_rd_input_col_size_out,
    output logic ub_rd_input_col_size_valid_out,

    output logic [15:0] ub_rd_weight_data_out_0,
    output logic [15:0] ub_rd_weight_data_out_1,
    output logic ub_rd_weight_valid_out_0,
    output logic ub_rd_weight_valid_out_1,
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_weight_data_bus_out,
    output logic [SYSTOLIC_ARRAY_WIDTH-1:0] ub_rd_weight_valid_bus_out,

    output logic [15:0] ub_rd_bias_data_out_0,
    output logic [15:0] ub_rd_bias_data_out_1,
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_bias_data_bus_out,

    // Kept as zero-valued compatibility ports. Training/back-propagation storage
    // and read paths are intentionally not implemented in this inference build.
    output logic [15:0] ub_rd_Y_data_out_0,
    output logic [15:0] ub_rd_Y_data_out_1,
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_Y_data_bus_out,
    output logic [15:0] ub_rd_H_data_out_0,
    output logic [15:0] ub_rd_H_data_out_1,
    output logic [SYSTOLIC_ARRAY_WIDTH*16-1:0] ub_rd_H_data_bus_out,

    output logic [15:0] ub_rd_col_size_out,
    output logic ub_rd_col_size_valid_out
);

    localparam int UB_BANKS      = SYSTOLIC_ARRAY_WIDTH;
    localparam int UB_BANK_W     = (UB_BANKS <= 1) ? 1 : $clog2(UB_BANKS);
    localparam int UB_BANK_DEPTH = (UNIFIED_BUFFER_WIDTH + UB_BANKS - 1) / UB_BANKS;
    localparam int UB_ROW_W      = (UB_BANK_DEPTH <= 1) ? 1 : $clog2(UB_BANK_DEPTH);

    localparam int RD_INPUT  = 0;
    localparam int RD_WEIGHT = 1;
    localparam int RD_BIAS   = 2;
    localparam int RD_GROUPS = 3;

    function automatic logic [UB_BANK_W-1:0] ub_bank(input logic [31:0] addr);
        ub_bank = addr[UB_BANK_W-1:0];
    endfunction

    function automatic logic [UB_ROW_W-1:0] ub_row(input logic [31:0] addr);
        ub_row = addr[UB_BANK_W +: UB_ROW_W];
    endfunction

`ifndef SYNTHESIS
    logic [15:0] ub_memory [0:UNIFIED_BUFFER_WIDTH-1];
`endif

    logic [15:0] ub_wr_data_in [SYSTOLIC_ARRAY_WIDTH];
    logic ub_wr_valid_in [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_wr_host_data_in [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_wr_host_addr_in [SYSTOLIC_ARRAY_WIDTH];
    logic ub_wr_host_valid_in [SYSTOLIC_ARRAY_WIDTH];

    logic [15:0] ub_rd_input_data_out [SYSTOLIC_ARRAY_WIDTH];
    logic ub_rd_input_valid_out [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_rd_weight_data_out [SYSTOLIC_ARRAY_WIDTH];
    logic ub_rd_weight_valid_out [SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] ub_rd_bias_data_out [SYSTOLIC_ARRAY_WIDTH];

    logic [15:0] wr_ptr;

    logic [15:0] rd_input_ptr;
    logic [15:0] rd_input_row_size;
    logic [15:0] rd_input_col_size;
    logic [15:0] rd_input_time_counter;
    logic rd_input_transpose;

    logic signed [15:0] rd_weight_ptr;
    logic [15:0] rd_weight_row_size;
    logic [15:0] rd_weight_col_size;
    logic [15:0] rd_weight_time_counter;
    logic rd_weight_transpose;
    logic [15:0] rd_weight_skip_size;

    logic [15:0] rd_bias_ptr;
    logic [15:0] rd_bias_row_size;
    logic [15:0] rd_bias_col_size;
    logic [15:0] rd_bias_time_counter;

    logic [15:0] wr_ptr_next;
    logic [15:0] rd_input_ptr_next;
    logic [15:0] wr_addr_tmp;
    logic [15:0] ptr_tmp;

    logic [UB_BANKS-1:0] mem_we;
    logic [UB_ROW_W-1:0] mem_waddr [UB_BANKS];
    logic [15:0] mem_wdata [UB_BANKS];

    logic [UB_ROW_W-1:0] rd_row_req [RD_GROUPS][UB_BANKS];
    logic [UB_ROW_W-1:0] rd_row_hold [RD_GROUPS][UB_BANKS];
    logic [15:0] rd_data [RD_GROUPS][UB_BANKS];
    logic rd_valid_req [RD_GROUPS][SYSTOLIC_ARRAY_WIDTH];
    logic [15:0] rd_addr_req [RD_GROUPS][SYSTOLIC_ARRAY_WIDTH];
    logic [UB_BANK_W-1:0] rd_lane_bank_q [RD_GROUPS][SYSTOLIC_ARRAY_WIDTH];

    genvar i;
    genvar bank;
    genvar group;

    generate
        for (i = 0; i < SYSTOLIC_ARRAY_WIDTH; i = i + 1) begin : ub_port_unpack
            assign ub_wr_data_in[i] = ub_wr_data_in_bus[i*16 +: 16];
            assign ub_wr_valid_in[i] = ub_wr_valid_in_bus[i];
            assign ub_wr_host_data_in[i] = ub_wr_host_data_in_bus[i*16 +: 16];
            assign ub_wr_host_addr_in[i] = ub_wr_host_addr_in_bus[i*16 +: 16];
            assign ub_wr_host_valid_in[i] = ub_wr_host_valid_in_bus[i];
        end
    endgenerate

    // Three BRAM read copies are sufficient for inference: input, weight and bias.
    generate
        for (group = 0; group < RD_GROUPS; group = group + 1) begin : ub_read_group_gen
            for (bank = 0; bank < UB_BANKS; bank = bank + 1) begin : ub_bank_gen
                ub_bram_1w1r #(
                    .DEPTH(UB_BANK_DEPTH),
                    .ADDR_W(UB_ROW_W)
                ) bram_inst (
                    .clk(clk),
                    .we(mem_we[bank]),
                    .waddr(mem_waddr[bank]),
                    .wdata(mem_wdata[bank]),
                    .raddr(rd_row_req[group][bank]),
                    .rdata(rd_data[group][bank])
                );
            end
        end
    endgenerate

`ifndef SYNTHESIS
    initial begin
        for (int addr = 0; addr < UNIFIED_BUFFER_WIDTH; addr++)
            ub_memory[addr] = '0;
    end
`endif

    assign ub_rd_input_data_out_0 = ub_rd_input_data_out[0];
    assign ub_rd_input_data_out_1 = ub_rd_input_data_out[1];
    assign ub_rd_input_valid_out_0 = ub_rd_input_valid_out[0];
    assign ub_rd_input_valid_out_1 = ub_rd_input_valid_out[1];
    assign ub_rd_weight_data_out_0 = ub_rd_weight_data_out[0];
    assign ub_rd_weight_data_out_1 = ub_rd_weight_data_out[1];
    assign ub_rd_weight_valid_out_0 = ub_rd_weight_valid_out[0];
    assign ub_rd_weight_valid_out_1 = ub_rd_weight_valid_out[1];
    assign ub_rd_bias_data_out_0 = ub_rd_bias_data_out[0];
    assign ub_rd_bias_data_out_1 = ub_rd_bias_data_out[1];

    assign ub_rd_Y_data_out_0 = 16'd0;
    assign ub_rd_Y_data_out_1 = 16'd0;
    assign ub_rd_Y_data_bus_out = '0;
    assign ub_rd_H_data_out_0 = 16'd0;
    assign ub_rd_H_data_out_1 = 16'd0;
    assign ub_rd_H_data_bus_out = '0;

    generate
        for (i = 0; i < SYSTOLIC_ARRAY_WIDTH; i = i + 1) begin : ub_lane_bus_assign
            assign ub_rd_input_data_out[i] = ub_rd_input_valid_out[i] ?
                rd_data[RD_INPUT][rd_lane_bank_q[RD_INPUT][i]] : 16'd0;
            assign ub_rd_weight_data_out[i] = ub_rd_weight_valid_out[i] ?
                rd_data[RD_WEIGHT][rd_lane_bank_q[RD_WEIGHT][i]] : 16'd0;
            assign ub_rd_bias_data_out[i] =
                rd_data[RD_BIAS][rd_lane_bank_q[RD_BIAS][i]];
            assign ub_rd_input_data_bus_out[i*16 +: 16] = ub_rd_input_data_out[i];
            assign ub_rd_input_valid_bus_out[i] = ub_rd_input_valid_out[i];
            assign ub_rd_weight_data_bus_out[i*16 +: 16] = ub_rd_weight_data_out[i];
            assign ub_rd_weight_valid_bus_out[i] = ub_rd_weight_valid_out[i];
            assign ub_rd_bias_data_bus_out[i*16 +: 16] = ub_rd_bias_data_out[i];
        end
    endgenerate

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            ub_rd_col_size_valid_out <= 1'b0;
            ub_rd_col_size_out <= '0;
            ub_rd_input_col_size_valid_out <= 1'b0;
            ub_rd_input_col_size_out <= '0;
        end else begin
            ub_rd_col_size_valid_out <= ub_rd_start_in && (ub_ptr_select == 9'd1);
            ub_rd_col_size_out <= (ub_rd_start_in && (ub_ptr_select == 9'd1)) ?
                (ub_rd_transpose ? ub_rd_row_size : ub_rd_col_size) : 16'd0;
            ub_rd_input_col_size_valid_out <= ub_rd_start_in && (ub_ptr_select == 9'd0);
            ub_rd_input_col_size_out <= (ub_rd_start_in && (ub_ptr_select == 9'd0)) ?
                (ub_rd_transpose ? ub_rd_row_size : ub_rd_col_size) : 16'd0;
        end
    end

    always_comb begin
        wr_addr_tmp = 16'd0;
        ptr_tmp = 16'd0;

        for (int b = 0; b < UB_BANKS; b++) begin
            mem_we[b] = 1'b0;
            mem_waddr[b] = '0;
            mem_wdata[b] = '0;
        end

        for (int g = 0; g < RD_GROUPS; g++) begin
            for (int b = 0; b < UB_BANKS; b++)
                rd_row_req[g][b] = rd_row_hold[g][b];
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                rd_valid_req[g][lane] = 1'b0;
                rd_addr_req[g][lane] = 16'd0;
            end
        end

        wr_ptr_next = ub_wr_addr_start_in ? ub_wr_addr_in : wr_ptr;
        for (int lane = SYSTOLIC_ARRAY_WIDTH-1; lane >= 0; lane--) begin
            if (ub_wr_valid_in[lane]) begin
                wr_addr_tmp = wr_ptr_next;
                mem_we[ub_bank(wr_addr_tmp)] = 1'b1;
                mem_waddr[ub_bank(wr_addr_tmp)] = ub_row(wr_addr_tmp);
                mem_wdata[ub_bank(wr_addr_tmp)] = ub_wr_data_in[lane];
                wr_ptr_next = wr_ptr_next + 16'd1;
            end else if (ub_wr_host_valid_in[lane]) begin
                mem_we[ub_bank(ub_wr_host_addr_in[lane])] = 1'b1;
                mem_waddr[ub_bank(ub_wr_host_addr_in[lane])] = ub_row(ub_wr_host_addr_in[lane]);
                mem_wdata[ub_bank(ub_wr_host_addr_in[lane])] = ub_wr_host_data_in[lane];
                if (ub_wr_host_addr_in[lane] >= wr_ptr_next)
                    wr_ptr_next = ub_wr_host_addr_in[lane] + 16'd1;
            end
        end

        rd_input_ptr_next = rd_input_ptr;
        if (rd_input_time_counter + 16'd1 < rd_input_row_size + rd_input_col_size) begin
            ptr_tmp = rd_input_ptr;
            if (rd_input_transpose) begin
                for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                    if (rd_input_time_counter >= lane[15:0] &&
                        rd_input_time_counter < rd_input_row_size + lane[15:0] &&
                        lane[15:0] < rd_input_col_size) begin
                        rd_valid_req[RD_INPUT][lane] = 1'b1;
                        rd_addr_req[RD_INPUT][lane] = ptr_tmp;
                        ptr_tmp = ptr_tmp + 16'd1;
                    end
                end
            end else begin
                for (int lane = SYSTOLIC_ARRAY_WIDTH-1; lane >= 0; lane--) begin
                    if (rd_input_time_counter >= lane[15:0] &&
                        rd_input_time_counter < rd_input_row_size + lane[15:0] &&
                        lane[15:0] < rd_input_col_size) begin
                        rd_valid_req[RD_INPUT][lane] = 1'b1;
                        rd_addr_req[RD_INPUT][lane] = ptr_tmp;
                        ptr_tmp = ptr_tmp + 16'd1;
                    end
                end
            end
            rd_input_ptr_next = ptr_tmp;
        end

        if (rd_weight_time_counter + 16'd1 < rd_weight_row_size + rd_weight_col_size) begin
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                if (rd_weight_time_counter >= lane[15:0] &&
                    rd_weight_time_counter < rd_weight_row_size + lane[15:0] &&
                    lane[15:0] < rd_weight_col_size) begin
                    rd_valid_req[RD_WEIGHT][lane] = 1'b1;
                    if (rd_weight_transpose) begin
                        rd_addr_req[RD_WEIGHT][lane] = rd_weight_ptr +
                            (rd_weight_row_size - 16'd1 -
                             (rd_weight_time_counter - lane[15:0])) *
                            rd_weight_skip_size + lane[15:0];
                    end else begin
                        rd_addr_req[RD_WEIGHT][lane] = rd_weight_ptr +
                            (rd_weight_time_counter - lane[15:0]) *
                            rd_weight_skip_size + lane[15:0];
                    end
                end
            end
        end

        if (rd_bias_time_counter + 16'd1 < rd_bias_row_size + rd_bias_col_size) begin
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                if (rd_bias_time_counter >= lane[15:0] &&
                    rd_bias_time_counter < rd_bias_row_size + lane[15:0] &&
                    lane[15:0] < rd_bias_col_size) begin
                    rd_valid_req[RD_BIAS][lane] = 1'b1;
                    rd_addr_req[RD_BIAS][lane] = rd_bias_ptr + lane[15:0];
                end
            end
        end

        for (int g = 0; g < RD_GROUPS; g++) begin
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                if (rd_valid_req[g][lane])
                    rd_row_req[g][ub_bank(rd_addr_req[g][lane])] = ub_row(rd_addr_req[g][lane]);
            end
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            wr_ptr <= '0;
            rd_input_ptr <= '0;
            rd_input_row_size <= '0;
            rd_input_col_size <= '0;
            rd_input_time_counter <= '0;
            rd_input_transpose <= 1'b0;
            rd_weight_ptr <= '0;
            rd_weight_row_size <= '0;
            rd_weight_col_size <= '0;
            rd_weight_time_counter <= '0;
            rd_weight_transpose <= 1'b0;
            rd_weight_skip_size <= '0;
            rd_bias_ptr <= '0;
            rd_bias_row_size <= '0;
            rd_bias_col_size <= '0;
            rd_bias_time_counter <= '0;

            for (int g = 0; g < RD_GROUPS; g++) begin
                for (int b = 0; b < UB_BANKS; b++)
                    rd_row_hold[g][b] <= '0;
                for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++)
                    rd_lane_bank_q[g][lane] <= '0;
            end
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                ub_rd_input_valid_out[lane] <= 1'b0;
                ub_rd_weight_valid_out[lane] <= 1'b0;
            end
        end else begin
            wr_ptr <= wr_ptr_next;

            for (int g = 0; g < RD_GROUPS; g++) begin
                for (int b = 0; b < UB_BANKS; b++)
                    rd_row_hold[g][b] <= rd_row_req[g][b];
                for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                    if (rd_valid_req[g][lane])
                        rd_lane_bank_q[g][lane] <= ub_bank(rd_addr_req[g][lane]);
                end
            end
            for (int lane = 0; lane < SYSTOLIC_ARRAY_WIDTH; lane++) begin
                ub_rd_input_valid_out[lane] <= rd_valid_req[RD_INPUT][lane];
                ub_rd_weight_valid_out[lane] <= rd_valid_req[RD_WEIGHT][lane];
            end

            if (rd_input_time_counter + 16'd1 < rd_input_row_size + rd_input_col_size) begin
                rd_input_time_counter <= rd_input_time_counter + 16'd1;
                rd_input_ptr <= rd_input_ptr_next;
            end else begin
                rd_input_ptr <= 16'd0;
                rd_input_row_size <= 16'd0;
                rd_input_col_size <= 16'd0;
                rd_input_time_counter <= 16'd0;
            end

            if (rd_weight_time_counter + 16'd1 < rd_weight_row_size + rd_weight_col_size) begin
                rd_weight_time_counter <= rd_weight_time_counter + 16'd1;
            end else begin
                rd_weight_ptr <= 16'd0;
                rd_weight_row_size <= 16'd0;
                rd_weight_col_size <= 16'd0;
                rd_weight_time_counter <= 16'd0;
            end

            if (rd_bias_time_counter + 16'd1 < rd_bias_row_size + rd_bias_col_size) begin
                rd_bias_time_counter <= rd_bias_time_counter + 16'd1;
            end else begin
                rd_bias_ptr <= 16'd0;
                rd_bias_row_size <= 16'd0;
                rd_bias_col_size <= 16'd0;
                rd_bias_time_counter <= 16'd0;
            end

            if (ub_rd_start_in) begin
                case (ub_ptr_select)
                    9'd0: begin
                        rd_input_transpose <= ub_rd_transpose;
                        rd_input_ptr <= ub_rd_addr_in;
                        rd_input_row_size <= ub_rd_transpose ? ub_rd_col_size : ub_rd_row_size;
                        rd_input_col_size <= ub_rd_transpose ? ub_rd_row_size : ub_rd_col_size;
                        rd_input_time_counter <= 16'd0;
                    end
                    9'd1: begin
                        rd_weight_transpose <= ub_rd_transpose;
                        rd_weight_ptr <= ub_rd_addr_in;
                        rd_weight_row_size <= ub_rd_transpose ? ub_rd_col_size : ub_rd_row_size;
                        rd_weight_col_size <= ub_rd_transpose ? ub_rd_row_size : ub_rd_col_size;
                        rd_weight_skip_size <= ub_rd_transpose ? ub_rd_row_size : ub_rd_col_size;
                        rd_weight_time_counter <= 16'd0;
                    end
                    9'd2: begin
                        rd_bias_ptr <= ub_rd_addr_in;
                        rd_bias_row_size <= ub_rd_row_size;
                        rd_bias_col_size <= ub_rd_col_size;
                        rd_bias_time_counter <= 16'd0;
                    end
                    default: begin
                    end
                endcase
            end

`ifndef SYNTHESIS
            for (int b = 0; b < UB_BANKS; b++) begin
                if (mem_we[b]) begin
                    int flat_addr;
                    flat_addr = mem_waddr[b] * UB_BANKS + b;
                    if (flat_addr < UNIFIED_BUFFER_WIDTH)
                        ub_memory[flat_addr] <= mem_wdata[b];
                end
            end
`endif
        end
    end

    // Compatibility-only inputs in the inference configuration.
    wire unused_training = SUPPORT_UB_ACCUMULATE ^ ub_wr_accumulate_in ^
                           ub_grad_addr_in[0] ^ ub_grad_addr_start_in ^
                           learning_rate_in[0];

endmodule

/* verilator lint_off DECLFILENAME */
module ub_bram_1w1r #(
    parameter int DEPTH = 128,
    parameter int ADDR_W = 7
)(
    input logic clk,
    input logic we,
    input logic [ADDR_W-1:0] waddr,
    input logic [15:0] wdata,
    input logic [ADDR_W-1:0] raddr,
    output logic [15:0] rdata
);
    (* ram_style = "block" *) logic [15:0] mem [0:DEPTH-1];

    initial begin
        for (int i = 0; i < DEPTH; i++)
            mem[i] = 16'd0;
    end

    always_ff @(posedge clk) begin
        if (we)
            mem[waddr] <= wdata;
        rdata <= mem[raddr];
    end
endmodule
/* verilator lint_on DECLFILENAME */
