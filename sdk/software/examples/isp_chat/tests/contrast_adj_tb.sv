`timescale 1ns/1ps

module contrast_adj_tb;
    reg clk = 1'b0;
    reg rst_n = 1'b0;
    reg tlast = 1'b0;
    reg tuser = 1'b0;
    reg [23:0] tdata = 24'd0;
    reg tvalid = 1'b0;
    reg [7:0] level = 8'd128;
    wire o_tlast;
    wire o_tuser;
    wire [23:0] o_tdata;
    wire o_tvalid;

    always #5 clk = ~clk;

    contrast_adj dut (
        .I_clk(clk),
        .I_rst_n(rst_n),
        .I_tlast(tlast),
        .I_tuser(tuser),
        .I_tdata(tdata),
        .I_tvalid(tvalid),
        .contrast_level(level),
        .O_tlast(o_tlast),
        .O_tuser(o_tuser),
        .O_tdata(o_tdata),
        .O_tvalid(o_tvalid)
    );

    task automatic check_pixel(
        input [7:0] requested_level,
        input [23:0] pixel,
        input [23:0] expected
    );
        begin
            @(negedge clk);
            level = requested_level;
            tdata = pixel;
            tvalid = 1'b1;
            @(negedge clk);
            tvalid = 1'b0;
            wait (o_tvalid === 1'b1);
            #1;
            if (o_tdata !== expected) begin
                $display("[contrast_adj_tb] FAIL level=%0d expected=%06x actual=%06x",
                         requested_level, expected, o_tdata);
                $fatal(1);
            end
        end
    endtask

    initial begin
        repeat (3) @(negedge clk);
        rst_n = 1'b1;
        check_pixel(8'd128, 24'h4080c0, 24'h4080c0);
        check_pixel(8'd160, 24'h4080c0, 24'h3080d0);
        check_pixel(8'd96, 24'h4080c0, 24'h5080b0);
        $display("[contrast_adj_tb] PASS neutral/up/down");
        $finish;
    end
endmodule
