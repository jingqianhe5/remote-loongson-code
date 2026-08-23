`timescale 1ns / 1ps

/*
 * ISP processing core wrapper.
 *
 * AXI2Video/Video2AXI are deliberately not instantiated here.  The image
 * source will be connected at the SoC top level later; the AXI-Lite path is
 * used only for configuration in the current build.
 */
module isp_top (
    input  wire        clk,
    input  wire        rst_n,

    // Direct video timing/data interface for the future external source.
    input  wire        video_in_vsync,
    input  wire        video_in_href,
    input  wire        video_in_de,
    input  wire [23:0] video_in_data,
    output wire        video_out_vsync,
    output wire        video_out_href,
    output wire        video_out_de,
    output wire [23:0] video_out_data,

    // Configuration values supplied by isp_config_axil.
    input  wire [15:0] width,
    input  wire [15:0] height,
    input  wire        cpu_frame_start_pulse,
    input  wire [8:0]  isp_selector,
    input  wire [7:0]  brightness_thresh,
    input  wire [7:0]  contrast_thresh,
    input  wire [7:0]  awb_R_thresh,
    input  wire [7:0]  awb_G_thresh,
    input  wire [7:0]  awb_B_thresh,
    output wire        fifo_overflow
);

    // These configuration fields are retained for the future frame-source
    // adapter.  The processing pipeline itself consumes selector/brightness/
    // contrast today; no pixel FIFO is needed while the source is absent.
    wire [8:0] selector_data = isp_selector;

    isp_core u_isp_core (
        .clk              (clk),
        .rst_n            (rst_n),
        .seletor_data     (selector_data),
        .per_img_vsync    (video_in_vsync),
        .per_img_href     (video_in_href),
        .per_img_de       (video_in_de),
        .per_img_data     (video_in_data),
        .brightness_thresh(brightness_thresh),
        .contrast_thresh  (contrast_thresh),
        .post_img_vsync   (video_out_vsync),
        .post_img_href    (video_out_href),
        .post_img_de      (video_out_de),
        .post_img_data    (video_out_data)
    );

    // No AXI-stream FIFO remains in this wrapper after the source disconnect.
    assign fifo_overflow = 1'b0;

endmodule
