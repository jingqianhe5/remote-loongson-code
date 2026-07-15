`timescale 1ns/1ps

module tpu_dma_tb;
    localparam integer MEM_WORDS = 4096;
    localparam [31:0] PROGRAM_0  = 32'h00001000;
    localparam [31:0] PROGRAM_1  = 32'h00001100;
    localparam [31:0] PROGRAM_MATH = 32'h00001200;
    localparam [31:0] PROGRAM_MATH_1 = 32'h00001300;
    localparam [31:0] DESC_0     = 32'h00002000;
    localparam [31:0] DESC_1     = 32'h00002010;
    localparam [31:0] DESC_MATH  = 32'h00002020;
    localparam [31:0] DESC_MATH_1 = 32'h00002030;
    localparam [31:0] DATA_0     = 32'h00003000;
    localparam [31:0] DATA_1     = 32'h00003800;
    localparam [31:0] DATA_MATH  = 32'h00000400;
    localparam integer TILE_HALFWORDS = 576;
    localparam integer TPU_TILE = 8;
    localparam integer TPU_K_CHUNK = 64;
    localparam integer TPU_SCRATCH_BASE = 1800;

    reg clk = 1'b0;
    reg rst_n = 1'b0;
    always #5 clk = ~clk;

    reg start = 1'b0;
    reg [31:0] start_pc = 32'd0;
    reg clear = 1'b0;
    wire busy;
    wire done;
    wire error;
    wire [31:0] pc_current;
    wire [31:0] last_ins;

    reg dma_req_valid = 1'b0;
    reg [31:0] dma_desc_addr = 32'd0;
    wire dma_req_ready;

    wire [3:0] awid;
    wire [31:0] awaddr;
    wire [7:0] awlen;
    wire [2:0] awsize;
    wire [1:0] awburst;
    wire [0:0] awlock;
    wire [3:0] awcache;
    wire [2:0] awprot;
    wire awvalid;
    wire [31:0] wdata;
    wire [3:0] wstrb;
    wire wlast;
    wire wvalid;
    wire bready;

    wire [3:0] arid;
    wire [31:0] araddr;
    wire [7:0] arlen;
    wire [2:0] arsize;
    wire [1:0] arburst;
    wire [0:0] arlock;
    wire [3:0] arcache;
    wire [2:0] arprot;
    wire arvalid;
    wire arready;
    wire [31:0] rdata;
    wire [1:0] rresp;
    wire rlast;
    wire rvalid;
    wire rready;
    wire [127:0] infer_result_data;
    wire [7:0] infer_result_valid;

    reg [31:0] memory [0:MEM_WORDS-1];
    reg read_active = 1'b0;
    reg [31:0] read_addr = 32'd0;
    reg [8:0] read_beats_left = 9'd0;

    integer instruction_reads = 0;
    integer dma_data_beats = 0;
    integer overlap_cycles = 0;
    integer math_result_count = 0;
    integer result_lane;
    reg capture_math_results = 1'b0;
    reg [15:0] math_results [0:TPU_K_CHUNK-1];

    assign arready = !read_active;
    assign rvalid = read_active;
    assign rdata = memory[read_addr[13:2]];
    assign rresp = 2'b00;
    assign rlast = read_active && (read_beats_left == 9'd1);

    always @(posedge clk) begin
        if (!rst_n) begin
            read_active <= 1'b0;
            read_addr <= 32'd0;
            read_beats_left <= 9'd0;
        end else begin
            if (arvalid && arready) begin
                read_active <= 1'b1;
                read_addr <= araddr;
                read_beats_left <= {1'b0, arlen} + 9'd1;
            end else if (rvalid && rready) begin
                if (read_beats_left == 9'd1) begin
                    read_active <= 1'b0;
                    read_beats_left <= 9'd0;
                end else begin
                    read_addr <= read_addr + 32'd4;
                    read_beats_left <= read_beats_left - 9'd1;
                end
            end
        end
    end

    always @(posedge clk) begin
        if (rst_n) begin
            if (dut.if_arvalid_reg && arready)
                instruction_reads <= instruction_reads + 1;
            if (dut.dma_ub_write_fire)
                dma_data_beats <= dma_data_beats + 1;
            if (dut.exec_busy_reg && dut.dma_busy_reg)
                overlap_cycles <= overlap_cycles + 1;
            if (capture_math_results) begin
                for (result_lane = 0; result_lane < TPU_TILE;
                     result_lane = result_lane + 1) begin
                    if (infer_result_valid[result_lane]) begin
                        if (math_result_count >= TPU_K_CHUNK)
                            $fatal(1, "too many math results");
                        math_results[math_result_count] =
                            infer_result_data[result_lane*16 +: 16];
                        math_result_count = math_result_count + 1;
                    end
                end
            end
        end
    end

    tpu_axi_fetch_top dut (
        .clk(clk),
        .rst_n(rst_n),
        .start(start),
        .start_pc(start_pc),
        .busy(busy),
        .done(done),
        .error(error),
        .pc_current(pc_current),
        .last_ins(last_ins),
        .ub_wr_ext_valid(1'b0),
        .ub_wr_ext_addr(16'd0),
        .ub_wr_ext_data(16'd0),
        .dma_req_valid(dma_req_valid),
        .dma_req_ready(dma_req_ready),
        .dma_desc_addr(dma_desc_addr),
        .clear(clear),
        .m_axi_awid(awid),
        .m_axi_awaddr(awaddr),
        .m_axi_awlen(awlen),
        .m_axi_awsize(awsize),
        .m_axi_awburst(awburst),
        .m_axi_awlock(awlock),
        .m_axi_awcache(awcache),
        .m_axi_awprot(awprot),
        .m_axi_awvalid(awvalid),
        .m_axi_awready(1'b1),
        .m_axi_wdata(wdata),
        .m_axi_wstrb(wstrb),
        .m_axi_wlast(wlast),
        .m_axi_wvalid(wvalid),
        .m_axi_wready(1'b1),
        .m_axi_bid(4'd0),
        .m_axi_bresp(2'b00),
        .m_axi_bvalid(1'b0),
        .m_axi_bready(bready),
        .m_axi_arid(arid),
        .m_axi_araddr(araddr),
        .m_axi_arlen(arlen),
        .m_axi_arsize(arsize),
        .m_axi_arburst(arburst),
        .m_axi_arlock(arlock),
        .m_axi_arcache(arcache),
        .m_axi_arprot(arprot),
        .m_axi_arvalid(arvalid),
        .m_axi_arready(arready),
        .m_axi_rid(4'd0),
        .m_axi_rdata(rdata),
        .m_axi_rresp(rresp),
        .m_axi_rlast(rlast),
        .m_axi_rvalid(rvalid),
        .m_axi_rready(rready),
        .infer_result_data(infer_result_data),
        .infer_result_valid(infer_result_valid)
    );

    task automatic submit_dma(input [31:0] descriptor);
        begin
            while (!dma_req_ready)
                @(posedge clk);
            @(negedge clk);
            dma_desc_addr = descriptor;
            dma_req_valid = 1'b1;
            @(negedge clk);
            dma_req_valid = 1'b0;
        end
    endtask

    task automatic launch_program(input [31:0] program_addr);
        begin
            while (busy)
                @(posedge clk);
            @(negedge clk);
            start_pc = program_addr;
            start = 1'b1;
            @(negedge clk);
            start = 1'b0;
        end
    endtask

    task automatic pulse_clear;
        begin
            @(negedge clk);
            clear = 1'b1;
            @(negedge clk);
            clear = 1'b0;
            @(posedge clk);
        end
    endtask

    task automatic wait_for_idle;
        integer timeout;
        reg saw_busy;
        begin
            timeout = 0;
            saw_busy = 1'b0;
            while (timeout < 200000) begin
                @(posedge clk);
                if (busy)
                    saw_busy = 1'b1;
                if (saw_busy && !busy)
                    return;
                if (error)
                    $fatal(1, "TPU reported error at pc=%08x last=%08x", pc_current, last_ins);
                timeout = timeout + 1;
            end
            $fatal(1, "timeout waiting for TPU idle");
        end
    endtask

    task automatic check_bank(input integer base, input integer tag);
        integer index;
        reg [15:0] expected;
        begin
            for (index = 0; index < TILE_HALFWORDS; index = index + 1) begin
                expected = tag + index + 1;
                if (dut.u_tpu_isa_confreg.u_tpu.ub_inst.ub_memory[base + index] !== expected)
                    $fatal(1, "UB mismatch bank=%0d index=%0d got=%04x expected=%04x",
                           base, index,
                           dut.u_tpu_isa_confreg.u_tpu.ub_inst.ub_memory[base + index],
                           expected);
            end
        end
    endtask

    integer i;
    integer kt;
    integer k_index;
    integer lane_index;
    integer data_halfword_index;
    integer program_word_index;
    integer instruction_reads_before_hit;
    reg [15:0] math_expected;
    initial begin
        for (i = 0; i < MEM_WORDS; i = i + 1)
            memory[i] = 32'd0;

        // WAIT 512 cycles, then END. Two different PCs exercise both cache ways.
        memory[PROGRAM_0[13:2]] = 32'h50000200;
        memory[PROGRAM_0[13:2] + 1] = 32'hf0000000;
        memory[PROGRAM_1[13:2]] = 32'h50000200;
        memory[PROGRAM_1[13:2] + 1] = 32'hf0000000;

        memory[DESC_0[13:2]] = DATA_0;
        memory[DESC_0[13:2] + 1] = {16'd0, TILE_HALFWORDS[15:0]};
        memory[DESC_1[13:2]] = DATA_1;
        memory[DESC_1[13:2] + 1] = {16'd1024, TILE_HALFWORDS[15:0]};
        memory[DESC_MATH[13:2]] = DATA_MATH;
        memory[DESC_MATH[13:2] + 1] = {16'd0, TILE_HALFWORDS[15:0]};
        memory[DESC_MATH_1[13:2]] = DATA_MATH;
        memory[DESC_MATH_1[13:2] + 1] = {16'd1024, TILE_HALFWORDS[15:0]};
        for (i = 0; i < TILE_HALFWORDS / 2; i = i + 1) begin
            memory[DATA_0[13:2] + i] = {16'(2*i + 2), 16'(2*i + 1)};
            memory[DATA_1[13:2] + i] = {16'(16'h4000 + 2*i + 2),
                                        16'(16'h4000 + 2*i + 1)};
        end

        // Same 8x8-by-8 microprogram used by llama. Each input vector is Q8.8
        // 1..8 and every weight tile is an identity matrix, so this also checks
        // that DMA packing, transpose mode, and result lanes preserve order.
        for (i = 0; i < TILE_HALFWORDS / 2; i = i + 1)
            memory[DATA_MATH[13:2] + i] = 32'd0;
        for (kt = 0; kt < TPU_K_CHUNK / TPU_TILE; kt = kt + 1) begin
            for (lane_index = 0; lane_index < TPU_TILE;
                 lane_index = lane_index + 1) begin
                data_halfword_index = kt*TPU_TILE + lane_index;
                if ((data_halfword_index & 1) == 0)
                    memory[DATA_MATH[13:2] + data_halfword_index/2][15:0] =
                        (lane_index + 1) << 8;
                else
                    memory[DATA_MATH[13:2] + data_halfword_index/2][31:16] =
                        (lane_index + 1) << 8;
            end
            for (k_index = 0; k_index < TPU_TILE; k_index = k_index + 1) begin
                for (lane_index = 0; lane_index < TPU_TILE;
                     lane_index = lane_index + 1) begin
                    if (k_index == lane_index) begin
                        data_halfword_index = TPU_K_CHUNK +
                            kt*TPU_TILE*TPU_TILE + k_index*TPU_TILE + lane_index;
                        if ((data_halfword_index & 1) == 0)
                            memory[DATA_MATH[13:2] + data_halfword_index/2][15:0] =
                                16'h0100;
                        else
                            memory[DATA_MATH[13:2] + data_halfword_index/2][31:16] =
                                16'h0100;
                    end
                end
            end
        end
        program_word_index = PROGRAM_MATH[13:2];
        for (kt = 0; kt < TPU_K_CHUNK / TPU_TILE; kt = kt + 1) begin
            memory[program_word_index] =
                32'h30000000 |
                (32'd1 << 25) |
                ((32'(TPU_K_CHUNK + kt*TPU_TILE*TPU_TILE)) << 13) |
                (32'(TPU_TILE) << 9) |
                (32'(TPU_TILE) << 5) |
                32'h00000010;
            memory[program_word_index + 1] = 32'h50000020;
            memory[program_word_index + 2] = 32'h40000000;
            memory[program_word_index + 3] = 32'h5000000c;
            memory[program_word_index + 4] =
                32'h20000000 | (32'(TPU_SCRATCH_BASE) << 16);
            memory[program_word_index + 5] =
                32'h30000000 |
                ((32'(kt*TPU_TILE)) << 13) |
                (32'd1 << 9) |
                (32'(TPU_TILE) << 5);
            memory[program_word_index + 6] = 32'h500000a0;
            program_word_index = program_word_index + 7;
        end
        memory[program_word_index] = 32'h50000200;
        memory[program_word_index + 1] = 32'hf0000000;

        program_word_index = PROGRAM_MATH_1[13:2];
        for (kt = 0; kt < TPU_K_CHUNK / TPU_TILE; kt = kt + 1) begin
            memory[program_word_index] =
                32'h30000000 |
                (32'd1 << 25) |
                ((32'(1024 + TPU_K_CHUNK + kt*TPU_TILE*TPU_TILE)) << 13) |
                (32'(TPU_TILE) << 9) |
                (32'(TPU_TILE) << 5) |
                32'h00000010;
            memory[program_word_index + 1] = 32'h50000020;
            memory[program_word_index + 2] = 32'h40000000;
            memory[program_word_index + 3] = 32'h5000000c;
            memory[program_word_index + 4] =
                32'h20000000 | (32'(TPU_SCRATCH_BASE) << 16);
            memory[program_word_index + 5] =
                32'h30000000 |
                ((32'(1024 + kt*TPU_TILE)) << 13) |
                (32'd1 << 9) |
                (32'(TPU_TILE) << 5);
            memory[program_word_index + 6] = 32'h500000a0;
            program_word_index = program_word_index + 7;
        end
        memory[program_word_index] = 32'h50000200;
        memory[program_word_index + 1] = 32'hf0000000;

        repeat (8) @(posedge clk);
        @(negedge clk);
        rst_n = 1'b1;
        repeat (4) @(posedge clk);

        submit_dma(DESC_0);
        wait_for_idle();
        check_bank(0, 0);
        if (!done)
            $fatal(1, "DMA completion did not set DONE");
        pulse_clear();
        if (busy || done || error)
            $fatal(1, "CLEAR did not reset TPU status");

        launch_program(PROGRAM_0);
        submit_dma(DESC_1);
        wait_for_idle();
        check_bank(1024, 16'h4000);
        if (overlap_cycles == 0)
            $fatal(1, "DMA never overlapped TPU execution");

        launch_program(PROGRAM_1);
        wait_for_idle();
        instruction_reads_before_hit = instruction_reads;

        launch_program(PROGRAM_0);
        wait_for_idle();
        if (instruction_reads != instruction_reads_before_hit)
            $fatal(1, "program cache miss: reads before=%0d after=%0d",
                   instruction_reads_before_hit, instruction_reads);
        submit_dma(DESC_MATH);
        wait_for_idle();
        pulse_clear();

        math_result_count = 0;
        capture_math_results = 1'b1;
        launch_program(PROGRAM_MATH);
        wait_for_idle();
        capture_math_results = 1'b0;
        if (math_result_count != TPU_K_CHUNK)
            $fatal(1, "math result count=%0d expected=%0d",
                   math_result_count, TPU_K_CHUNK);
        for (i = 0; i < TPU_K_CHUNK; i = i + 1) begin
            math_expected = ((i % TPU_TILE) + 1) << 8;
            if (math_results[i] !== math_expected)
                $fatal(1, "math result[%0d]=%04x expected=%04x",
                       i, math_results[i], math_expected);
        end
        for (k_index = 0; k_index < 16; k_index = k_index + 1) begin
            pulse_clear();
            math_result_count = 0;
            capture_math_results = 1'b1;
            launch_program(PROGRAM_MATH);
            wait_for_idle();
            capture_math_results = 1'b0;
            if (math_result_count != TPU_K_CHUNK)
                $fatal(1, "repeated math run=%0d count=%0d expected=%0d",
                       k_index, math_result_count, TPU_K_CHUNK);
        end

        // Each K micro-tile now has a different diagonal scale.  This catches
        // a stale/one-tile-late weight-buffer switch that identical identity
        // matrices cannot expose.  Run the same data through both UB banks.
        for (i = 0; i < TILE_HALFWORDS / 2; i = i + 1)
            memory[DATA_MATH[13:2] + i] = 32'd0;
        for (kt = 0; kt < TPU_K_CHUNK / TPU_TILE; kt = kt + 1) begin
            for (lane_index = 0; lane_index < TPU_TILE;
                 lane_index = lane_index + 1) begin
                data_halfword_index = kt*TPU_TILE + lane_index;
                if ((data_halfword_index & 1) == 0)
                    memory[DATA_MATH[13:2] + data_halfword_index/2][15:0] =
                        (lane_index + 1) << 8;
                else
                    memory[DATA_MATH[13:2] + data_halfword_index/2][31:16] =
                        (lane_index + 1) << 8;
            end
            for (k_index = 0; k_index < TPU_TILE; k_index = k_index + 1) begin
                for (lane_index = 0; lane_index < TPU_TILE;
                     lane_index = lane_index + 1) begin
                    if (k_index == lane_index) begin
                        data_halfword_index = TPU_K_CHUNK +
                            kt*TPU_TILE*TPU_TILE + k_index*TPU_TILE + lane_index;
                        if ((data_halfword_index & 1) == 0)
                            memory[DATA_MATH[13:2] + data_halfword_index/2][15:0] =
                                (kt + 1) << 8;
                        else
                            memory[DATA_MATH[13:2] + data_halfword_index/2][31:16] =
                                (kt + 1) << 8;
                    end
                end
            end
        end
        pulse_clear();
        submit_dma(DESC_MATH);
        wait_for_idle();
        pulse_clear();
        math_result_count = 0;
        capture_math_results = 1'b1;
        launch_program(PROGRAM_MATH);
        wait_for_idle();
        capture_math_results = 1'b0;
        if (math_result_count != TPU_K_CHUNK)
            $fatal(1, "varying bank0 result count=%0d expected=%0d",
                   math_result_count, TPU_K_CHUNK);
        for (i = 0; i < TPU_K_CHUNK; i = i + 1) begin
            math_expected = ((i / TPU_TILE) + 1) *
                            ((i % TPU_TILE) + 1) << 8;
            if (math_results[i] !== math_expected)
                $fatal(1, "varying bank0 result[%0d]=%04x expected=%04x",
                       i, math_results[i], math_expected);
        end

        pulse_clear();
        submit_dma(DESC_MATH_1);
        wait_for_idle();
        pulse_clear();
        math_result_count = 0;
        capture_math_results = 1'b1;
        launch_program(PROGRAM_MATH_1);
        wait_for_idle();
        capture_math_results = 1'b0;
        if (math_result_count != TPU_K_CHUNK)
            $fatal(1, "varying bank1 result count=%0d expected=%0d",
                   math_result_count, TPU_K_CHUNK);
        for (i = 0; i < TPU_K_CHUNK; i = i + 1) begin
            math_expected = ((i / TPU_TILE) + 1) *
                            ((i % TPU_TILE) + 1) << 8;
            if (math_results[i] !== math_expected)
                $fatal(1, "varying bank1 result[%0d]=%04x expected=%04x",
                       i, math_results[i], math_expected);
        end
        // Reload a dense fractional tile.  Outputs alternate between sums of
        // eight products (0x0008 * +/-0x0010) in Q16.16.  Keeping each product
        // until the final conversion gives +/-0x0004; the old PE rounded each
        // product first and incorrectly produced +/-0x0008.
        for (i = 0; i < TILE_HALFWORDS / 2; i = i + 1)
            memory[DATA_MATH[13:2] + i] = {16'hfff0, 16'h0010};
        for (i = 0; i < TPU_K_CHUNK / 2; i = i + 1)
            memory[DATA_MATH[13:2] + i] = {16'h0008, 16'h0008};
        pulse_clear();
        submit_dma(DESC_MATH);
        wait_for_idle();
        pulse_clear();
        math_result_count = 0;
        capture_math_results = 1'b1;
        launch_program(PROGRAM_MATH);
        wait_for_idle();
        capture_math_results = 1'b0;
        if (math_result_count != TPU_K_CHUNK)
            $fatal(1, "fractional math result count=%0d expected=%0d",
                   math_result_count, TPU_K_CHUNK);
        for (i = 0; i < TPU_K_CHUNK; i = i + 1) begin
            math_expected = ((i % TPU_TILE) & 1) ? 16'hfffc : 16'h0004;
            if (math_results[i] !== math_expected)
                $fatal(1, "fractional math result[%0d]=%04x expected=%04x",
                       i, math_results[i], math_expected);
        end

        // Exercise the single output narrowing point as well.  +/-512 cannot
        // be represented in Q8.8 and must saturate instead of wrapping.
        for (i = 0; i < TILE_HALFWORDS / 2; i = i + 1)
            memory[DATA_MATH[13:2] + i] = {16'hff00, 16'h0100};
        for (i = 0; i < TPU_K_CHUNK / 2; i = i + 1)
            memory[DATA_MATH[13:2] + i] = {16'h4000, 16'h4000};
        pulse_clear();
        submit_dma(DESC_MATH);
        wait_for_idle();
        pulse_clear();
        math_result_count = 0;
        capture_math_results = 1'b1;
        launch_program(PROGRAM_MATH);
        wait_for_idle();
        capture_math_results = 1'b0;
        if (math_result_count != TPU_K_CHUNK)
            $fatal(1, "saturation math result count=%0d expected=%0d",
                   math_result_count, TPU_K_CHUNK);
        for (i = 0; i < TPU_K_CHUNK; i = i + 1) begin
            math_expected = ((i % TPU_TILE) & 1) ? 16'h8000 : 16'h7fff;
            if (math_results[i] !== math_expected)
                $fatal(1, "saturation math result[%0d]=%04x expected=%04x",
                       i, math_results[i], math_expected);
        end
        if (dma_data_beats != (7*TILE_HALFWORDS/2))
            $fatal(1, "unexpected DMA beat count %0d", dma_data_beats);

        $display("[tpu_dma_tb] PASS dma_beats=%0d overlap_cycles=%0d instruction_reads=%0d math_results=%0d",
                 dma_data_beats, overlap_cycles, instruction_reads,
                 math_result_count);
        $finish;
    end
endmodule
