`timescale 1ns/1ps

module new_dvi_burst_tb;
  localparam ID_WIDTH = 6;
  localparam [31:0] FB_BASE = 32'h11000000;
  localparam [31:0] CTRL_ADDR = 32'h110ffffc;

  reg clk = 1'b0;
  reg resetn = 1'b0;
  always #5 clk = ~clk;

  reg [ID_WIDTH-1:0] awid = 0;
  reg [31:0] awaddr = 0;
  reg [7:0] awlen = 0;
  reg [2:0] awsize = 3'd2;
  reg [1:0] awburst = 2'b01;
  reg awvalid = 0;
  wire awready;
  reg [31:0] wdata = 0;
  reg [3:0] wstrb = 4'hf;
  reg wlast = 0;
  reg wvalid = 0;
  wire wready;
  wire [ID_WIDTH-1:0] bid;
  wire [1:0] bresp;
  wire bvalid;
  reg bready = 1'b1;

  reg [ID_WIDTH-1:0] arid = 0;
  reg [31:0] araddr = 0;
  reg [7:0] arlen = 0;
  reg [2:0] arsize = 3'd2;
  reg [1:0] arburst = 2'b01;
  reg arvalid = 0;
  wire arready;
  wire [ID_WIDTH-1:0] rid;
  wire [31:0] rdata;
  wire [1:0] rresp;
  wire rlast;
  wire rvalid;
  reg rready = 1'b1;

  wire dvi_enable;
  wire video_clk, video_hsync, video_vsync, video_de;
  wire [2:0] video_red, video_green;
  wire [1:0] video_blue;

  integer byte_count = 0;

  dvi #(.ID_WIDTH(ID_WIDTH)) dut (
    .aclk(clk), .aresetn(resetn),
    .cpu_clk(clk), .cpu_resetn(resetn),
    .s_awid(awid), .s_awaddr(awaddr), .s_awlen(awlen),
    .s_awsize(awsize), .s_awburst(awburst), .s_awlock(1'b0),
    .s_awcache(4'b0), .s_awprot(3'b0), .s_awvalid(awvalid),
    .s_awready(awready), .s_wid({ID_WIDTH{1'b0}}), .s_wdata(wdata),
    .s_wstrb(wstrb), .s_wlast(wlast), .s_wvalid(wvalid),
    .s_wready(wready), .s_bid(bid), .s_bresp(bresp),
    .s_bvalid(bvalid), .s_bready(bready), .s_arid(arid),
    .s_araddr(araddr), .s_arlen(arlen), .s_arsize(arsize),
    .s_arburst(arburst), .s_arlock(1'b0), .s_arcache(4'b0),
    .s_arprot(3'b0), .s_arvalid(arvalid), .s_arready(arready),
    .s_rid(rid), .s_rdata(rdata), .s_rresp(rresp), .s_rlast(rlast),
    .s_rvalid(rvalid), .s_rready(rready), .video_clk(video_clk),
    .video_hsync(video_hsync), .video_vsync(video_vsync),
    .video_de(video_de), .video_red(video_red),
    .video_green(video_green), .video_blue(video_blue),
    .dvi_enable(dvi_enable)
  );

  always @(posedge clk) begin
    if (dut.dvi_write_en_o) begin
      if (dut.dvi_write_addr_o !== FB_BASE + byte_count)
        $fatal(1, "address mismatch at byte %0d: %08x", byte_count,
               dut.dvi_write_addr_o);
      if (dut.dvi_write_data_o !== byte_count[7:0])
        $fatal(1, "data mismatch at byte %0d: %02x", byte_count,
               dut.dvi_write_data_o);
      byte_count <= byte_count + 1;
    end
  end

  task automatic send_aw(input [31:0] addr, input [7:0] len);
    begin
      @(negedge clk);
      awaddr = addr;
      awlen = len;
      awvalid = 1'b1;
      do @(posedge clk); while (!awready);
      @(negedge clk);
      awvalid = 1'b0;
    end
  endtask

  task automatic send_w(input [31:0] data, input last);
    begin
      @(negedge clk);
      wdata = data;
      wlast = last;
      wvalid = 1'b1;
      do @(posedge clk); while (!wready);
      @(negedge clk);
      wvalid = 1'b0;
      wlast = 1'b0;
    end
  endtask

  task automatic wait_b;
    begin
      do @(posedge clk); while (!bvalid);
      if (bresp != 2'b00) $fatal(1, "unexpected BRESP %0d", bresp);
      @(posedge clk);
    end
  endtask

  integer i;
  initial begin
    repeat (4) @(posedge clk);
    @(negedge clk);
    resetn = 1'b1;

    send_aw(CTRL_ADDR, 0);
    send_w(32'd1, 1'b1);
    wait_b();
    if (!dvi_enable) $fatal(1, "DVI enable write was not applied");

    send_aw(FB_BASE, 8'd63);
    for (i = 0; i < 64; i = i + 1) begin
      send_w(32'h03020100 + i * 32'h04040404, i == 63);
    end
    wait_b();
    repeat (4) @(posedge clk);

    if (byte_count != 256)
      $fatal(1, "expected 256 framebuffer bytes, observed %0d", byte_count);
    $display("[new_dvi_burst_tb] PASS bytes=%0d", byte_count);
    $finish;
  end

  initial begin
    #100000;
    $fatal(1, "timeout");
  end
endmodule

module DVI_Controller (
  output wire video_clk, video_hsync, video_vsync, video_de,
  output wire [2:0] video_red, video_green,
  output wire [1:0] video_blue,
  input wire Control_write_en,
  input wire [31:0] Control_Address,
  input wire [7:0] Control_Data,
  input wire clk_50M,
  input wire reset_btn
);
  assign video_clk = clk_50M;
  assign video_hsync = 1'b0;
  assign video_vsync = 1'b0;
  assign video_de = 1'b0;
  assign video_red = 3'b0;
  assign video_green = 3'b0;
  assign video_blue = 2'b0;
endmodule
