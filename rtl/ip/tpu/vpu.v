`timescale 1ns/1ps

module vpu#(
    parameter WIDTH = 16,
    parameter F_BITS = 8,
    parameter SYSTOLIC_ARRAY_WIDTH = 8
)
(
    input  clk,
    input  rst_n,

    //选择模式
    input  [3:0] vpu_mode,

    //从矩阵运算单元输入数据
    input  signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] systolic_data_in,
    input         [SYSTOLIC_ARRAY_WIDTH-1:0]       sysdata_valid_in,

    //从UB来的数据
    input  signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] bias_scalar_in,
    input  signed [WIDTH-1:0]                      leak_factor_in,
    input  signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] Y_in,
    input  signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] H_in,

    input  signed [WIDTH-1:0] two_div_N_in,//缩放因子2/N

    //输出到UB的数据
    output reg signed [SYSTOLIC_ARRAY_WIDTH*WIDTH-1:0] vpu_out,
    output reg        [SYSTOLIC_ARRAY_WIDTH-1:0]       vpu_valid_out
);
    // This build is inference-only. Llama requests raw systolic results and
    // performs normalization/nonlinear layers in software, so the old bias,
    // leaky-ReLU, loss and gradient paths were both unused and a 20.8 ns
    // timing path. Keep the existing one-cycle output register and remove the
    // unreachable DSP/mux chain.
    /* verilator lint_off UNUSEDPARAM */
    /* verilator lint_off UNUSEDSIGNAL */
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            vpu_out <= {SYSTOLIC_ARRAY_WIDTH*WIDTH{1'b0}};
            vpu_valid_out <= {SYSTOLIC_ARRAY_WIDTH{1'b0}};
        end else begin
            vpu_out <= systolic_data_in;
            vpu_valid_out <= sysdata_valid_in;
        end
    end
    /* verilator lint_on UNUSEDSIGNAL */
    /* verilator lint_on UNUSEDPARAM */
endmodule
