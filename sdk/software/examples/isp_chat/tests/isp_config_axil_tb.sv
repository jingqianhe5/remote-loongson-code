`timescale 1ns/1ps

module isp_config_axil_tb;
    reg clk = 1'b0;
    reg resetn = 1'b0;
    reg [31:0] awaddr = 32'd0;
    reg [2:0] awprot = 3'd0;
    reg awvalid = 1'b0;
    wire awready;
    reg [31:0] wdata = 32'd0;
    reg [3:0] wstrb = 4'd0;
    reg wvalid = 1'b0;
    wire wready;
    wire [1:0] bresp;
    wire bvalid;
    reg bready = 1'b0;
    reg [31:0] araddr = 32'd0;
    reg [2:0] arprot = 3'd0;
    reg arvalid = 1'b0;
    wire arready;
    wire [31:0] rdata;
    wire [1:0] rresp;
    wire rvalid;
    reg rready = 1'b0;
    wire frame_start;
    wire [8:0] selector;
    wire [7:0] brightness;
    wire [7:0] contrast;
    wire [7:0] awb_r;
    wire [7:0] awb_g;
    wire [7:0] awb_b;
    wire [15:0] width;
    wire [15:0] height;

    integer frame_start_count = 0;

    always #5 clk = ~clk;
    always @(posedge clk) begin
        if (frame_start) frame_start_count <= frame_start_count + 1;
    end

    isp_config_axil dut (
        .aclk(clk), .aresetn(resetn),
        .s_axil_awaddr(awaddr), .s_axil_awprot(awprot),
        .s_axil_awvalid(awvalid), .s_axil_awready(awready),
        .s_axil_wdata(wdata), .s_axil_wstrb(wstrb),
        .s_axil_wvalid(wvalid), .s_axil_wready(wready),
        .s_axil_bresp(bresp), .s_axil_bvalid(bvalid), .s_axil_bready(bready),
        .s_axil_araddr(araddr), .s_axil_arprot(arprot),
        .s_axil_arvalid(arvalid), .s_axil_arready(arready),
        .s_axil_rdata(rdata), .s_axil_rresp(rresp),
        .s_axil_rvalid(rvalid), .s_axil_rready(rready),
        .frame_start_pulse(frame_start), .isp_selector(selector),
        .brightness_thresh(brightness), .contrast_thresh(contrast),
        .awb_R_thresh(awb_r), .awb_G_thresh(awb_g), .awb_B_thresh(awb_b),
        .width(width), .height(height)
    );

    task automatic axil_write(
        input [31:0] address,
        input [31:0] data,
        input [3:0] strobes,
        input bit data_first
    );
        begin
            if (data_first) begin
                @(negedge clk);
                wdata = data; wstrb = strobes; wvalid = 1'b1;
                wait (wready);
                @(negedge clk);
                wvalid = 1'b0;
                awaddr = address; awvalid = 1'b1;
                wait (awready);
                @(negedge clk);
                awvalid = 1'b0;
            end else begin
                @(negedge clk);
                awaddr = address; awvalid = 1'b1;
                wait (awready);
                @(negedge clk);
                awvalid = 1'b0;
                wdata = data; wstrb = strobes; wvalid = 1'b1;
                wait (wready);
                @(negedge clk);
                wvalid = 1'b0;
            end
            bready = 1'b1;
            wait (bvalid);
            if (bresp !== 2'b00) $fatal(1, "write response error");
            @(negedge clk);
            bready = 1'b0;
        end
    endtask

    task automatic axil_read(input [31:0] address, input [31:0] expected);
        begin
            @(negedge clk);
            araddr = address; arvalid = 1'b1; rready = 1'b1;
            wait (arready);
            @(negedge clk);
            arvalid = 1'b0;
            wait (rvalid);
            if (rresp !== 2'b00 || rdata !== expected) begin
                $display("[isp_config_axil_tb] FAIL addr=%08x expected=%08x actual=%08x",
                         address, expected, rdata);
                $fatal(1);
            end
            @(negedge clk);
            rready = 1'b0;
        end
    endtask

    initial begin
        repeat (4) @(negedge clk);
        resetn = 1'b1;
        repeat (2) @(negedge clk);

        if (brightness !== 8'd128 || contrast !== 8'd128 || selector !== 9'd0)
            $fatal(1, "reset defaults incorrect");

        axil_write(32'h1f500004, 32'h00000112, 4'b0011, 1'b0);
        axil_write(32'h1f500008, 32'h00000088, 4'b0001, 1'b1);
        axil_write(32'h1f50000c, 32'h00000078, 4'b0001, 1'b0);
        axil_write(32'h1f50001c, 32'h00000780, 4'b0011, 1'b1);
        axil_write(32'h1f500020, 32'h00000438, 4'b0011, 1'b0);

        axil_read(32'h1f500004, 32'h00000112);
        axil_read(32'h1f500008, 32'h00000088);
        axil_read(32'h1f50000c, 32'h00000078);
        axil_read(32'h1f50001c, 32'h00000780);
        axil_read(32'h1f500020, 32'h00000438);

        // A disabled byte lane must not change the brightness register.
        axil_write(32'h1f500008, 32'h00000044, 4'b0010, 1'b0);
        axil_read(32'h1f500008, 32'h00000088);

        axil_write(32'h1f500000, 32'h00000001, 4'b0001, 1'b1);
        repeat (3) @(negedge clk);
        if (frame_start_count !== 1) $fatal(1, "frame_start pulse count=%0d", frame_start_count);

        $display("[isp_config_axil_tb] PASS independent AW/W, WSTRB, readback, pulse");
        $finish;
    end
endmodule
