`timescale 1ns/1ps

module tpu_axi_fetch_top #(
    parameter SYSTOLIC_ARRAY_WIDTH = 8,
    parameter AXI_ID_WIDTH = 4,
    parameter INSN_CACHE_WORDS = 64,
    parameter DMA_MAX_BURST_BEATS = 16,
    parameter TPU_UB_WORDS = 2048
) (
    input  wire                      clk,
    input  wire                      rst_n,

    input  wire                      start,
    input  wire [31:0]               start_pc,
    output wire                      busy,
    output wire                      done,
    output wire                      error,
    output reg  [31:0]               pc_current,
    output reg  [31:0]               last_ins,

    input  wire                      ub_wr_ext_valid,
    input  wire [15:0]               ub_wr_ext_addr,
    input  wire [15:0]               ub_wr_ext_data,

    // Descriptor word 0: SRAM source byte address.
    // Descriptor word 1: {UB halfword address, halfword count}.
    input  wire                      dma_req_valid,
    output wire                      dma_req_ready,
    input  wire [31:0]               dma_desc_addr,
    // Clears execution/DMA completion state while preserving the instruction
    // cache.  The command is ordered through the same async FIFO as START and
    // DMA, so a following transfer cannot observe stale DONE.
    input  wire                      clear,

    output wire [AXI_ID_WIDTH-1:0]   m_axi_awid,
    output wire [31:0]               m_axi_awaddr,
    output wire [7:0]                m_axi_awlen,
    output wire [2:0]                m_axi_awsize,
    output wire [1:0]                m_axi_awburst,
    output wire [0:0]                m_axi_awlock,
    output wire [3:0]                m_axi_awcache,
    output wire [2:0]                m_axi_awprot,
    output wire                      m_axi_awvalid,
    input  wire                      m_axi_awready,
    output wire [31:0]               m_axi_wdata,
    output wire [3:0]                m_axi_wstrb,
    output wire                      m_axi_wlast,
    output wire                      m_axi_wvalid,
    input  wire                      m_axi_wready,
    input  wire [AXI_ID_WIDTH-1:0]   m_axi_bid,
    input  wire [1:0]                m_axi_bresp,
    input  wire                      m_axi_bvalid,
    output wire                      m_axi_bready,

    output wire [AXI_ID_WIDTH-1:0]   m_axi_arid,
    output wire [31:0]               m_axi_araddr,
    output wire [7:0]                m_axi_arlen,
    output wire [2:0]                m_axi_arsize,
    output wire [1:0]                m_axi_arburst,
    output wire [0:0]                m_axi_arlock,
    output wire [3:0]                m_axi_arcache,
    output wire [2:0]                m_axi_arprot,
    output wire                      m_axi_arvalid,
    input  wire                      m_axi_arready,
    input  wire [AXI_ID_WIDTH-1:0]   m_axi_rid,
    input  wire [31:0]               m_axi_rdata,
    input  wire [1:0]                m_axi_rresp,
    input  wire                      m_axi_rlast,
    input  wire                      m_axi_rvalid,
    output wire                      m_axi_rready,

    output wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] infer_result_data,
    output wire [SYSTOLIC_ARRAY_WIDTH-1:0]    infer_result_valid
);

    localparam [3:0] OP_WAIT = 4'h5;
    localparam [3:0] OP_END  = 4'hf;

    localparam [3:0] WAIT_CYCLES = 4'd0;
    localparam [3:0] WAIT_WEIGHT = 4'd1;
    localparam [3:0] WAIT_VPU    = 4'd2;
    localparam [3:0] WAIT_SYS    = 4'd3;

    localparam [2:0] ST_IDLE  = 3'd0;
    localparam [2:0] ST_AR    = 3'd1;
    localparam [2:0] ST_R     = 3'd2;
    localparam [2:0] ST_ISSUE = 3'd3;
    localparam [2:0] ST_WAIT  = 3'd4;
    localparam [2:0] ST_HALT  = 3'd5;
    localparam [2:0] ST_CACHE = 3'd6;
    localparam [8:0] RESULT_DRAIN_CYCLES = 9'd255;

    localparam DMA_DESC = 1'b0;
    localparam DMA_DATA = 1'b1;
    localparam INSN_CACHE_ADDR_W = $clog2(INSN_CACHE_WORDS);

    reg [2:0]  state;
    reg [31:0] ins_reg;
    reg        ins_valid_reg;
    reg [3:0]  wait_type;
    reg [23:0] wait_limit;
    reg [23:0] wait_counter;
    reg        wait_seen_valid;
    reg        exec_busy_reg;
    reg        exec_done_reg;
    reg        exec_error_reg;
    reg        exec_drain_pending;
    reg [8:0]  exec_drain_count;

    reg [31:0] insn_cache_0 [0:INSN_CACHE_WORDS-1];
    reg [31:0] insn_cache_1 [0:INSN_CACHE_WORDS-1];
    reg [31:0] cache_base_0;
    reg [31:0] cache_base_1;
    reg        cache_complete_0;
    reg        cache_complete_1;
    reg        cache_replay;
    reg        cache_replay_slot;
    reg        cache_fill_slot;
    reg        cache_replace_slot;
    reg        cache_overflow;
    reg [INSN_CACHE_ADDR_W:0] cache_word_count;
    reg [INSN_CACHE_ADDR_W-1:0] cache_index;

    reg [31:0] if_araddr_reg;
    reg        if_arvalid_reg;
    reg        if_rready_reg;

    reg        dma_busy_reg;
    reg        dma_done_reg;
    reg        dma_error_reg;
    reg        dma_phase;
    reg [31:0] dma_desc_addr_reg;
    reg [31:0] dma_src_addr_reg;
    reg [15:0] dma_ub_addr_reg;
    reg [15:0] dma_remaining_reg;
    reg        dma_arvalid_reg;
    reg [31:0] dma_araddr_reg;
    reg [7:0]  dma_arlen_reg;
    reg        dma_read_active_reg;
    reg        dma_txn_is_data_reg;
    reg [7:0]  dma_beats_left_reg;
    reg        dma_desc_word_index;

    wire [15:0] vpu_data_out_0;
    wire [15:0] vpu_data_out_1;
    wire [15:0] vpu_data_out_2;
    wire [15:0] vpu_data_out_3;
    wire [15:0] vpu_data_out_4;
    wire [15:0] vpu_data_out_5;
    wire [15:0] vpu_data_out_6;
    wire [15:0] vpu_data_out_7;
    wire        vpu_data_valid_out_0;
    wire        vpu_data_valid_out_1;
    wire        vpu_data_valid_out_2;
    wire        vpu_data_valid_out_3;
    wire        vpu_data_valid_out_4;
    wire        vpu_data_valid_out_5;
    wire        vpu_data_valid_out_6;
    wire        vpu_data_valid_out_7;

    wire [15:0] sys_data_out_0;
    wire [15:0] sys_data_out_1;
    wire [15:0] sys_data_out_2;
    wire [15:0] sys_data_out_3;
    wire [15:0] sys_data_out_4;
    wire [15:0] sys_data_out_5;
    wire [15:0] sys_data_out_6;
    wire [15:0] sys_data_out_7;
    wire        sys_valid_out_0;
    wire        sys_valid_out_1;
    wire        sys_valid_out_2;
    wire        sys_valid_out_3;
    wire        sys_valid_out_4;
    wire        sys_valid_out_5;
    wire        sys_valid_out_6;
    wire        sys_valid_out_7;

    wire [15:0] ub_rd_input_data_out_0;
    wire [15:0] ub_rd_input_data_out_1;
    wire        ub_rd_input_valid_out_0;
    wire        ub_rd_input_valid_out_1;
    wire [15:0] ub_rd_weight_data_out_0;
    wire [15:0] ub_rd_weight_data_out_1;
    wire        ub_rd_weight_valid_out_0;
    wire        ub_rd_weight_valid_out_1;
    wire [15:0] ub_rd_bias_data_out_0;
    wire [15:0] ub_rd_bias_data_out_1;
    wire [15:0] ub_rd_Y_data_out_0;
    wire [15:0] ub_rd_Y_data_out_1;
    wire [15:0] ub_rd_H_data_out_0;
    wire [15:0] ub_rd_H_data_out_1;
    wire [15:0] ub_rd_col_size_out;
    wire        ub_rd_col_size_valid_out;

    assign infer_result_data = {
        vpu_data_out_7, vpu_data_out_6, vpu_data_out_5, vpu_data_out_4,
        vpu_data_out_3, vpu_data_out_2, vpu_data_out_1, vpu_data_out_0
    };
    assign infer_result_valid = {
        vpu_data_valid_out_7, vpu_data_valid_out_6,
        vpu_data_valid_out_5, vpu_data_valid_out_4,
        vpu_data_valid_out_3, vpu_data_valid_out_2,
        vpu_data_valid_out_1, vpu_data_valid_out_0
    };

    wire weight_valid_any = ub_rd_weight_valid_out_0 | ub_rd_weight_valid_out_1;
    wire vpu_valid_any =
        vpu_data_valid_out_0 | vpu_data_valid_out_1 |
        vpu_data_valid_out_2 | vpu_data_valid_out_3 |
        vpu_data_valid_out_4 | vpu_data_valid_out_5 |
        vpu_data_valid_out_6 | vpu_data_valid_out_7;
    wire sys_valid_any =
        sys_valid_out_0 | sys_valid_out_1 | sys_valid_out_2 | sys_valid_out_3 |
        sys_valid_out_4 | sys_valid_out_5 | sys_valid_out_6 | sys_valid_out_7;

    wire wait_signal =
        (wait_type == WAIT_WEIGHT) ? weight_valid_any :
        (wait_type == WAIT_VPU)    ? vpu_valid_any :
        (wait_type == WAIT_SYS)    ? sys_valid_any : 1'b0;
    wire wait_cycles_done = (wait_type == WAIT_CYCLES) &&
                            (wait_counter >= wait_limit);
    wire wait_signal_done = (wait_type != WAIT_CYCLES) &&
                            wait_seen_valid && !wait_signal;
    wire wait_timeout = (wait_type != WAIT_CYCLES) &&
                        (wait_limit != 24'd0) &&
                        (wait_counter >= wait_limit) &&
                        !wait_signal_done;

    wire cache_hit_0 = cache_complete_0 && (cache_base_0 == start_pc);
    wire cache_hit_1 = cache_complete_1 && (cache_base_1 == start_pc);
    wire [31:0] cache_replay_word = cache_replay_slot ?
        insn_cache_1[cache_index] : insn_cache_0[cache_index];

    wire fetch_dma_window = cache_replay ||
                            (state == ST_IDLE) ||
                            (state == ST_WAIT) ||
                            (state == ST_HALT);
    wire [15:0] dma_word_beats = (dma_remaining_reg + 16'd1) >> 1;
    wire [7:0] dma_next_beats =
        (dma_word_beats > DMA_MAX_BURST_BEATS) ?
        DMA_MAX_BURST_BEATS[7:0] : dma_word_beats[7:0];

    wire dma_ar_handshake = dma_arvalid_reg && m_axi_arready;
    wire if_ar_handshake = if_arvalid_reg && !dma_arvalid_reg && m_axi_arready;
    wire dma_rready_int = dma_read_active_reg &&
                          (!dma_txn_is_data_reg || !vpu_valid_any);
    wire dma_r_handshake = dma_rready_int && m_axi_rvalid;
    wire if_r_handshake = if_rready_reg && !dma_read_active_reg && m_axi_rvalid;
    wire dma_ub_write_fire = dma_r_handshake && dma_txn_is_data_reg &&
                             (m_axi_rresp == 2'b00);

    wire ext_write_0_valid = dma_ub_write_fire | ub_wr_ext_valid;
    wire [15:0] ext_write_0_addr = dma_ub_write_fire ?
                                   dma_ub_addr_reg : ub_wr_ext_addr;
    wire [15:0] ext_write_0_data = dma_ub_write_fire ?
                                   m_axi_rdata[15:0] : ub_wr_ext_data;
    wire ext_write_1_valid = dma_ub_write_fire && (dma_remaining_reg > 16'd1);
    wire [15:0] ext_write_1_addr = dma_ub_addr_reg + 16'd1;
    wire [15:0] ext_write_1_data = m_axi_rdata[31:16];

    assign busy  = exec_busy_reg | dma_busy_reg;
    // A tile is reusable only after both execution and an overlapped DMA have
    // stopped.  Holding DONE low while either engine is active makes the
    // software completion test double as the bank hand-off barrier.
    assign done  = (exec_done_reg | dma_done_reg) && !busy;
    assign error = exec_error_reg | dma_error_reg;
    assign dma_req_ready = !dma_busy_reg && !dma_arvalid_reg &&
                           !dma_read_active_reg;

    assign m_axi_awid     = {AXI_ID_WIDTH{1'b0}};
    assign m_axi_awaddr   = 32'd0;
    assign m_axi_awlen    = 8'd0;
    assign m_axi_awsize   = 3'b010;
    assign m_axi_awburst  = 2'b01;
    assign m_axi_awlock   = 1'b0;
    assign m_axi_awcache  = 4'b0011;
    assign m_axi_awprot   = 3'b000;
    assign m_axi_awvalid  = 1'b0;
    assign m_axi_wdata    = 32'd0;
    assign m_axi_wstrb    = 4'd0;
    assign m_axi_wlast    = 1'b1;
    assign m_axi_wvalid   = 1'b0;
    assign m_axi_bready   = 1'b1;

    assign m_axi_arid     = {AXI_ID_WIDTH{1'b0}};
    assign m_axi_araddr   = dma_arvalid_reg ? dma_araddr_reg : if_araddr_reg;
    assign m_axi_arlen    = dma_arvalid_reg ? dma_arlen_reg : 8'd0;
    assign m_axi_arsize   = 3'b010;
    assign m_axi_arburst  = 2'b01;
    assign m_axi_arlock   = 1'b0;
    assign m_axi_arcache  = 4'b0011;
    assign m_axi_arprot   = 3'b000;
    assign m_axi_arvalid  = dma_arvalid_reg | if_arvalid_reg;
    assign m_axi_rready   = dma_read_active_reg ? dma_rready_int : if_rready_reg;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state               <= ST_IDLE;
            ins_reg             <= 32'd0;
            ins_valid_reg       <= 1'b0;
            wait_type           <= WAIT_CYCLES;
            wait_limit          <= 24'd0;
            wait_counter        <= 24'd0;
            wait_seen_valid     <= 1'b0;
            exec_busy_reg       <= 1'b0;
            exec_done_reg       <= 1'b0;
            exec_error_reg      <= 1'b0;
            exec_drain_pending  <= 1'b0;
            exec_drain_count    <= 9'd0;
            pc_current          <= 32'd0;
            last_ins            <= 32'd0;
            cache_base_0        <= 32'd0;
            cache_base_1        <= 32'd0;
            cache_complete_0    <= 1'b0;
            cache_complete_1    <= 1'b0;
            cache_replay        <= 1'b0;
            cache_replay_slot   <= 1'b0;
            cache_fill_slot     <= 1'b0;
            cache_replace_slot  <= 1'b0;
            cache_overflow      <= 1'b0;
            cache_word_count    <= 0;
            cache_index         <= 0;
            if_araddr_reg       <= 32'd0;
            if_arvalid_reg      <= 1'b0;
            if_rready_reg       <= 1'b0;
        end else begin
            ins_valid_reg <= 1'b0;

            if (clear) begin
                state          <= ST_IDLE;
                exec_busy_reg  <= 1'b0;
                exec_done_reg  <= 1'b0;
                exec_error_reg <= 1'b0;
                exec_drain_pending <= 1'b0;
                exec_drain_count   <= 9'd0;
                wait_counter   <= 24'd0;
                wait_seen_valid <= 1'b0;
                if_arvalid_reg <= 1'b0;
                if_rready_reg  <= 1'b0;
                cache_replay   <= 1'b0;
            end else if (((state == ST_IDLE) || (state == ST_HALT)) && start) begin
                exec_busy_reg   <= 1'b1;
                exec_done_reg   <= 1'b0;
                exec_error_reg  <= 1'b0;
                exec_drain_pending <= 1'b0;
                exec_drain_count   <= 9'd0;
                pc_current      <= start_pc;
                wait_counter    <= 24'd0;
                wait_seen_valid <= 1'b0;
                if_arvalid_reg  <= 1'b0;
                if_rready_reg   <= 1'b0;
                cache_index     <= 0;

                if (cache_hit_0 || cache_hit_1) begin
                    cache_replay      <= 1'b1;
                    cache_replay_slot <= cache_hit_1;
                    state             <= ST_CACHE;
                end else begin
                    cache_replay     <= 1'b0;
                    cache_overflow   <= 1'b0;
                    cache_word_count <= 0;
                    state            <= ST_AR;
                    if (!cache_complete_0) begin
                        cache_fill_slot  <= 1'b0;
                        cache_base_0     <= start_pc;
                        cache_complete_0 <= 1'b0;
                    end else if (!cache_complete_1) begin
                        cache_fill_slot  <= 1'b1;
                        cache_base_1     <= start_pc;
                        cache_complete_1 <= 1'b0;
                    end else if (!cache_replace_slot) begin
                        cache_fill_slot    <= 1'b0;
                        cache_base_0       <= start_pc;
                        cache_complete_0   <= 1'b0;
                        cache_replace_slot <= 1'b1;
                    end else begin
                        cache_fill_slot    <= 1'b1;
                        cache_base_1       <= start_pc;
                        cache_complete_1   <= 1'b0;
                        cache_replace_slot <= 1'b0;
                    end
                end
            end else begin
                case (state)
                    ST_IDLE: begin
                        exec_busy_reg  <= 1'b0;
                        if_arvalid_reg <= 1'b0;
                        if_rready_reg  <= 1'b0;
                    end

                    ST_AR: begin
                        exec_busy_reg <= 1'b1;
                        if (!if_arvalid_reg && !if_rready_reg &&
                            !dma_arvalid_reg && !dma_read_active_reg) begin
                            if_araddr_reg  <= pc_current;
                            if_arvalid_reg <= 1'b1;
                        end
                        if (if_ar_handshake) begin
                            if_arvalid_reg <= 1'b0;
                            if_rready_reg  <= 1'b1;
                            state          <= ST_R;
                        end
                    end

                    ST_R: begin
                        if (if_r_handshake) begin
                            if_rready_reg <= 1'b0;
                            last_ins      <= m_axi_rdata;
                            ins_reg       <= m_axi_rdata;

                            if (m_axi_rresp != 2'b00 || !m_axi_rlast) begin
                                exec_error_reg <= 1'b1;
                                exec_done_reg  <= 1'b1;
                                exec_busy_reg  <= 1'b0;
                                state          <= ST_HALT;
                            end else begin
                                if (!cache_overflow &&
                                    (cache_word_count < INSN_CACHE_WORDS)) begin
                                    if (cache_fill_slot)
                                        insn_cache_1[cache_word_count[INSN_CACHE_ADDR_W-1:0]] <= m_axi_rdata;
                                    else
                                        insn_cache_0[cache_word_count[INSN_CACHE_ADDR_W-1:0]] <= m_axi_rdata;
                                    cache_word_count <= cache_word_count + 1'b1;
                                end else begin
                                    cache_overflow <= 1'b1;
                                end

                                if (m_axi_rdata[31:28] == OP_END) begin
                                exec_done_reg      <= 1'b0;
                                exec_busy_reg      <= 1'b1;
                                exec_drain_pending <= 1'b1;
                                exec_drain_count   <= 9'd0;
                                state         <= ST_HALT;
                                    if (!cache_overflow &&
                                        (cache_word_count < INSN_CACHE_WORDS)) begin
                                        if (cache_fill_slot)
                                            cache_complete_1 <= 1'b1;
                                        else
                                            cache_complete_0 <= 1'b1;
                                    end
                                end else if (m_axi_rdata[31:28] == OP_WAIT) begin
                                    wait_type       <= m_axi_rdata[27:24];
                                    wait_limit      <= m_axi_rdata[23:0];
                                    wait_counter    <= 24'd0;
                                    wait_seen_valid <= 1'b0;
                                    state           <= ST_WAIT;
                                end else begin
                                    state <= ST_ISSUE;
                                end
                            end
                        end
                    end

                    ST_CACHE: begin
                        last_ins <= cache_replay_word;
                        ins_reg  <= cache_replay_word;
                        if (cache_replay_word[31:28] == OP_END) begin
                            exec_done_reg      <= 1'b0;
                            exec_busy_reg      <= 1'b1;
                            exec_drain_pending <= 1'b1;
                            exec_drain_count   <= 9'd0;
                            state         <= ST_HALT;
                        end else if (cache_replay_word[31:28] == OP_WAIT) begin
                            wait_type       <= cache_replay_word[27:24];
                            wait_limit      <= cache_replay_word[23:0];
                            wait_counter    <= 24'd0;
                            wait_seen_valid <= 1'b0;
                            state           <= ST_WAIT;
                        end else begin
                            state <= ST_ISSUE;
                        end
                    end

                    ST_ISSUE: begin
                        ins_valid_reg <= 1'b1;
                        pc_current    <= pc_current + 32'd4;
                        if (cache_replay) begin
                            cache_index <= cache_index + 1'b1;
                            state       <= ST_CACHE;
                        end else begin
                            state <= ST_AR;
                        end
                    end

                    ST_WAIT: begin
                        wait_counter <= wait_counter + 24'd1;
                        if (wait_signal)
                            wait_seen_valid <= 1'b1;

                        if (wait_cycles_done || wait_signal_done) begin
                            pc_current      <= pc_current + 32'd4;
                            wait_counter    <= 24'd0;
                            wait_seen_valid <= 1'b0;
                            if (cache_replay) begin
                                cache_index <= cache_index + 1'b1;
                                state       <= ST_CACHE;
                            end else begin
                                state <= ST_AR;
                            end
                        end else if (wait_timeout) begin
                            exec_error_reg <= 1'b1;
                            exec_done_reg  <= 1'b1;
                            exec_busy_reg  <= 1'b0;
                            state          <= ST_HALT;
                        end
                    end

                    ST_HALT: begin
                        if_arvalid_reg <= 1'b0;
                        if_rready_reg  <= 1'b0;
                        if (exec_drain_pending) begin
                            exec_busy_reg <= 1'b1;
                            if (vpu_valid_any) begin
                                exec_drain_count <= 9'd0;
                            end else if (exec_drain_count >= RESULT_DRAIN_CYCLES) begin
                                exec_drain_pending <= 1'b0;
                                exec_done_reg       <= 1'b1;
                                exec_busy_reg       <= 1'b0;
                            end else begin
                                exec_drain_count <= exec_drain_count + 1'b1;
                            end
                        end else begin
                            exec_busy_reg <= 1'b0;
                        end
                    end

                    default: state <= ST_IDLE;
                endcase
            end
        end
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            dma_busy_reg         <= 1'b0;
            dma_done_reg         <= 1'b0;
            dma_error_reg        <= 1'b0;
            dma_phase            <= DMA_DESC;
            dma_desc_addr_reg    <= 32'd0;
            dma_src_addr_reg     <= 32'd0;
            dma_ub_addr_reg      <= 16'd0;
            dma_remaining_reg    <= 16'd0;
            dma_arvalid_reg      <= 1'b0;
            dma_araddr_reg       <= 32'd0;
            dma_arlen_reg        <= 8'd0;
            dma_read_active_reg  <= 1'b0;
            dma_txn_is_data_reg  <= 1'b0;
            dma_beats_left_reg   <= 8'd0;
            dma_desc_word_index  <= 1'b0;
        end else if (clear) begin
            dma_busy_reg         <= 1'b0;
            dma_done_reg         <= 1'b0;
            dma_error_reg        <= 1'b0;
            dma_phase            <= DMA_DESC;
            dma_desc_addr_reg    <= 32'd0;
            dma_src_addr_reg     <= 32'd0;
            dma_ub_addr_reg      <= 16'd0;
            dma_remaining_reg    <= 16'd0;
            dma_arvalid_reg      <= 1'b0;
            dma_araddr_reg       <= 32'd0;
            dma_arlen_reg        <= 8'd0;
            dma_read_active_reg  <= 1'b0;
            dma_txn_is_data_reg  <= 1'b0;
            dma_beats_left_reg   <= 8'd0;
            dma_desc_word_index  <= 1'b0;
        end else begin
            if (start)
                dma_done_reg <= 1'b0;

            if (dma_req_valid && dma_req_ready) begin
                dma_done_reg        <= 1'b0;
                dma_error_reg       <= 1'b0;
                dma_desc_addr_reg   <= dma_desc_addr;
                dma_phase           <= DMA_DESC;
                dma_desc_word_index <= 1'b0;
                if (dma_desc_addr[1:0] != 2'b00) begin
                    dma_busy_reg  <= 1'b0;
                    dma_done_reg  <= 1'b1;
                    dma_error_reg <= 1'b1;
                end else begin
                    dma_busy_reg <= 1'b1;
                end
            end

            if (dma_busy_reg && !dma_arvalid_reg && !dma_read_active_reg &&
                fetch_dma_window && !if_arvalid_reg && !if_rready_reg) begin
                if (dma_phase == DMA_DESC) begin
                    dma_araddr_reg      <= dma_desc_addr_reg;
                    dma_arlen_reg       <= 8'd1;
                    dma_txn_is_data_reg <= 1'b0;
                end else begin
                    dma_araddr_reg      <= dma_src_addr_reg;
                    dma_arlen_reg       <= dma_next_beats - 1'b1;
                    dma_txn_is_data_reg <= 1'b1;
                end
                dma_arvalid_reg <= 1'b1;
            end

            if (dma_ar_handshake) begin
                dma_arvalid_reg     <= 1'b0;
                dma_read_active_reg <= 1'b1;
                dma_beats_left_reg  <= dma_arlen_reg + 1'b1;
                if (!dma_txn_is_data_reg)
                    dma_desc_word_index <= 1'b0;
            end

            if (dma_r_handshake) begin
                if ((m_axi_rresp != 2'b00) ||
                    (m_axi_rlast != (dma_beats_left_reg == 8'd1))) begin
                    dma_busy_reg        <= 1'b0;
                    dma_done_reg        <= 1'b1;
                    dma_error_reg       <= 1'b1;
                    dma_arvalid_reg     <= 1'b0;
                    dma_read_active_reg <= 1'b0;
                end else begin
                    dma_beats_left_reg <= dma_beats_left_reg - 1'b1;
                    if (!dma_txn_is_data_reg) begin
                        if (!dma_desc_word_index) begin
                            dma_src_addr_reg    <= m_axi_rdata;
                            dma_desc_word_index <= 1'b1;
                        end else begin
                            dma_ub_addr_reg   <= m_axi_rdata[31:16];
                            dma_remaining_reg <= m_axi_rdata[15:0];
                            if ((dma_src_addr_reg[1:0] != 2'b00) ||
                                (m_axi_rdata[15:0] == 16'd0) ||
                                m_axi_rdata[0] ||
                                (({1'b0, m_axi_rdata[31:16]} +
                                  {1'b0, m_axi_rdata[15:0]}) > TPU_UB_WORDS)) begin
                                dma_busy_reg  <= 1'b0;
                                dma_done_reg  <= 1'b1;
                                dma_error_reg <= 1'b1;
                            end else begin
                                dma_phase <= DMA_DATA;
                            end
                        end
                    end else begin
                        dma_src_addr_reg  <= dma_src_addr_reg + 32'd4;
                        dma_ub_addr_reg   <= dma_ub_addr_reg + 16'd2;
                        dma_remaining_reg <= dma_remaining_reg - 16'd2;
                        if (dma_remaining_reg <= 16'd2) begin
                            dma_busy_reg <= 1'b0;
                            dma_done_reg <= 1'b1;
                        end
                    end

                    if (m_axi_rlast)
                        dma_read_active_reg <= 1'b0;
                end
            end
        end
    end

    tpu_isa_confreg #(
        .SYSTOLIC_ARRAY_WIDTH(SYSTOLIC_ARRAY_WIDTH)
    ) u_tpu_isa_confreg (
        .clk(clk),
        .rst_n(rst_n),
        .ins_valid(ins_valid_reg),
        .ins(ins_reg),
        .ub_wr_ext_valid_0(ext_write_0_valid),
        .ub_wr_ext_addr_0(ext_write_0_addr),
        .ub_wr_ext_data_0(ext_write_0_data),
        .ub_wr_ext_valid_1(ext_write_1_valid),
        .ub_wr_ext_addr_1(ext_write_1_addr),
        .ub_wr_ext_data_1(ext_write_1_data),
        .learn_rate_in(16'd0),
        .vpu_factor_in(16'd0),
        .two_div_N_in(16'd0),
        .vpu_data_out_0(vpu_data_out_0),
        .vpu_data_out_1(vpu_data_out_1),
        .vpu_data_out_2(vpu_data_out_2),
        .vpu_data_out_3(vpu_data_out_3),
        .vpu_data_out_4(vpu_data_out_4),
        .vpu_data_out_5(vpu_data_out_5),
        .vpu_data_out_6(vpu_data_out_6),
        .vpu_data_out_7(vpu_data_out_7),
        .vpu_data_valid_out_0(vpu_data_valid_out_0),
        .vpu_data_valid_out_1(vpu_data_valid_out_1),
        .vpu_data_valid_out_2(vpu_data_valid_out_2),
        .vpu_data_valid_out_3(vpu_data_valid_out_3),
        .vpu_data_valid_out_4(vpu_data_valid_out_4),
        .vpu_data_valid_out_5(vpu_data_valid_out_5),
        .vpu_data_valid_out_6(vpu_data_valid_out_6),
        .vpu_data_valid_out_7(vpu_data_valid_out_7),
        .sys_data_out_0(sys_data_out_0),
        .sys_data_out_1(sys_data_out_1),
        .sys_data_out_2(sys_data_out_2),
        .sys_data_out_3(sys_data_out_3),
        .sys_data_out_4(sys_data_out_4),
        .sys_data_out_5(sys_data_out_5),
        .sys_data_out_6(sys_data_out_6),
        .sys_data_out_7(sys_data_out_7),
        .sys_valid_out_0(sys_valid_out_0),
        .sys_valid_out_1(sys_valid_out_1),
        .sys_valid_out_2(sys_valid_out_2),
        .sys_valid_out_3(sys_valid_out_3),
        .sys_valid_out_4(sys_valid_out_4),
        .sys_valid_out_5(sys_valid_out_5),
        .sys_valid_out_6(sys_valid_out_6),
        .sys_valid_out_7(sys_valid_out_7),
        .ub_rd_input_data_out_0(ub_rd_input_data_out_0),
        .ub_rd_input_data_out_1(ub_rd_input_data_out_1),
        .ub_rd_input_valid_out_0(ub_rd_input_valid_out_0),
        .ub_rd_input_valid_out_1(ub_rd_input_valid_out_1),
        .ub_rd_weight_data_out_0(ub_rd_weight_data_out_0),
        .ub_rd_weight_data_out_1(ub_rd_weight_data_out_1),
        .ub_rd_weight_valid_out_0(ub_rd_weight_valid_out_0),
        .ub_rd_weight_valid_out_1(ub_rd_weight_valid_out_1),
        .ub_rd_bias_data_out_0(ub_rd_bias_data_out_0),
        .ub_rd_bias_data_out_1(ub_rd_bias_data_out_1),
        .ub_rd_Y_data_out_0(ub_rd_Y_data_out_0),
        .ub_rd_Y_data_out_1(ub_rd_Y_data_out_1),
        .ub_rd_H_data_out_0(ub_rd_H_data_out_0),
        .ub_rd_H_data_out_1(ub_rd_H_data_out_1),
        .ub_rd_col_size_out(ub_rd_col_size_out),
        .ub_rd_col_size_valid_out(ub_rd_col_size_valid_out)
    );

endmodule
