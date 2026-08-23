`timescale 1ns / 1ps

module isp_config_axil (
    input  wire        aclk,
    input  wire        aresetn,

    // --- AXI-Lite Slave Interface ---
    input  wire [31:0] s_axil_awaddr,
    input  wire [ 2:0] s_axil_awprot,  // 补全保护信号位宽对齐
    input  wire        s_axil_awvalid,
    output wire        s_axil_awready,
    input  wire [31:0] s_axil_wdata,   
    input  wire [ 3:0] s_axil_wstrb,   
    input  wire        s_axil_wvalid,
    output wire        s_axil_wready,
    output wire [ 1:0] s_axil_bresp,   
    output wire        s_axil_bvalid,
    input  wire        s_axil_bready,

    input  wire [31:0] s_axil_araddr,
    input  wire [ 2:0] s_axil_arprot,  // 补全保护信号位宽对齐
    input  wire        s_axil_arvalid,
    output wire        s_axil_arready,
    output wire [31:0] s_axil_rdata,
    output wire [ 1:0] s_axil_rresp,
    output wire        s_axil_rvalid,
    input  wire        s_axil_rready,

    // --- ISP Control Interface ---
    output reg         frame_start_pulse,
    output reg  [8:0]  isp_selector,
    output reg  [7:0]  brightness_thresh,
    output reg  [7:0]  contrast_thresh,
    output reg  [7:0]  awb_R_thresh,
    output reg  [7:0]  awb_G_thresh,
    output reg  [7:0]  awb_B_thresh,
    output reg  [15:0]  width,
    output reg  [15:0]  height
);

    // ==========================================
    // 1. 写通道：分离式握手 (绝生死锁)
    // ==========================================
    reg aw_done;
    reg w_done;
    reg axi_bvalid;
    reg [31:0] awaddr_reg; // 锁存写地址
    reg [31:0] wdata_reg;  // 锁存写数据
    reg [3:0]  wstrb_reg;  // 锁存字节写使能

    localparam [7:0] start = 8'h00;//是否处理？
    localparam [7:0] isp_setting = 8'h04;//算法选择？
    localparam [7:0] brightness = 8'h08;//亮度值？
    localparam [7:0] contrast = 8'h0C;//对比度？
    localparam [7:0] awb_R = 8'h10;//R通道增益？  
    localparam [7:0] awb_G = 8'h14;//G通道增益？
    localparam [7:0] awb_B = 8'h18;//B通道增益？
    localparam [7:0] width_config = 8'h1C;//图像宽度？
    localparam [7:0] height_config = 8'h20;//图像高度？

    assign s_axil_awready = ~aw_done && ~axi_bvalid;
    assign s_axil_wready  = ~w_done  && ~axi_bvalid;
    assign s_axil_bvalid  = axi_bvalid;
    assign s_axil_bresp   = 2'b00;

    wire aw_capture = s_axil_awvalid && s_axil_awready;
    wire w_capture  = s_axil_wvalid && s_axil_wready;
    wire write_commit = ~axi_bvalid && (aw_done || aw_capture) &&
                        (w_done || w_capture);
    wire [31:0] write_addr = aw_done ? awaddr_reg : s_axil_awaddr;
    wire [31:0] write_data = w_done ? wdata_reg : s_axil_wdata;
    wire [3:0]  write_strb = w_done ? wstrb_reg : s_axil_wstrb;

    always @(posedge aclk) begin
        if (~aresetn) begin
            aw_done    <= 1'b0;
            w_done     <= 1'b0;
            axi_bvalid <= 1'b0;
            awaddr_reg <= 32'd0;
            wdata_reg  <= 32'd0;
            wstrb_reg  <= 4'd0;
        end else begin
            // 独立接收地址
            if (aw_capture) begin
                aw_done    <= 1'b1;
                awaddr_reg <= s_axil_awaddr; // 锁存住地址
            end
            
            // 独立接收数据
            if (w_capture) begin
                w_done     <= 1'b1;
                wdata_reg  <= s_axil_wdata;
                wstrb_reg  <= s_axil_wstrb;
            end
            
            // 地址和数据收齐，发回执
            if (write_commit) begin
                axi_bvalid <= 1'b1;
                aw_done    <= 1'b0;
                w_done     <= 1'b0;
            end
            
            // CPU 签收回执
            if (axi_bvalid && s_axil_bready) begin
                axi_bvalid <= 1'b0;
            end
        end
    end

    // ==========================================
    // 2. 寄存器逻辑
    // ==========================================
    always @(posedge aclk) begin
        if (~aresetn) begin
            frame_start_pulse <= 1'b0;
            isp_selector      <= 9'd0;
            brightness_thresh <= 8'd128;
            contrast_thresh   <= 8'd128;
            awb_R_thresh      <= 8'd0;
            awb_G_thresh      <= 8'd0;
            awb_B_thresh      <= 8'd0;
            width             <= 16'd0;
            height            <= 16'd0;
        end else begin
            frame_start_pulse <= 1'b0;

            if (write_commit) begin
                case (write_addr[7:0])
                    start: begin
                        if (write_strb[0]) frame_start_pulse <= write_data[0];
                    end
                    isp_setting: begin
                        if (write_strb[0]) isp_selector[7:0] <= write_data[7:0];
                        if (write_strb[1]) isp_selector[8]   <= write_data[8];
                    end
                    brightness: begin
                        if (write_strb[0]) brightness_thresh <= write_data[7:0];
                    end
                    contrast: begin
                        if (write_strb[0]) contrast_thresh <= write_data[7:0];
                    end
                    awb_R: begin
                        if (write_strb[0]) awb_R_thresh <= write_data[7:0];
                    end
                    awb_G: begin
                        if (write_strb[0]) awb_G_thresh <= write_data[7:0];
                    end
                    awb_B: begin
                        if (write_strb[0]) awb_B_thresh <= write_data[7:0];
                    end
                    width_config: begin
                        if (write_strb[0]) width[7:0]  <= write_data[7:0];
                        if (write_strb[1]) width[15:8] <= write_data[15:8];
                    end
                    height_config: begin
                        if (write_strb[0]) height[7:0]  <= write_data[7:0];
                        if (write_strb[1]) height[15:8] <= write_data[15:8];
                    end
                    default: begin
                    end
                endcase
            end
        end
    end


    // ==========================================
    // 3. 读通道：防吞包设计
    // ==========================================
    reg axi_rvalid;
    reg [31:0] axi_rdata;
    
    assign s_axil_arready = ~axi_rvalid; // 手里没货时才允许接新订单
    assign s_axil_rvalid  = axi_rvalid;
    assign s_axil_rdata   = axi_rdata;
    assign s_axil_rresp   = 2'b00;

    always @(posedge aclk) begin
        if (~aresetn) begin
            axi_rvalid <= 1'b0;
            axi_rdata  <= 32'd0;
        end else begin
            if (s_axil_arvalid && s_axil_arready) begin
                axi_rvalid <= 1'b1;
                case (s_axil_araddr[7:0])
                    start:       axi_rdata <= 32'd0;
                    isp_setting: axi_rdata <= {23'd0, isp_selector};
                    brightness:  axi_rdata <= {24'd0, brightness_thresh};
                    contrast:    axi_rdata <= {24'd0, contrast_thresh};
                    awb_R:       axi_rdata <= {24'd0, awb_R_thresh};
                    awb_G:       axi_rdata <= {24'd0, awb_G_thresh};
                    awb_B:       axi_rdata <= {24'd0, awb_B_thresh};
                    width_config:  axi_rdata <= {16'd0, width};
                    height_config: axi_rdata <= {16'd0, height};
                    default:     axi_rdata <= 32'd0;
                endcase
            end else if (s_axil_rready && axi_rvalid) begin
                axi_rvalid <= 1'b0;
            end
        end
    end

endmodule
