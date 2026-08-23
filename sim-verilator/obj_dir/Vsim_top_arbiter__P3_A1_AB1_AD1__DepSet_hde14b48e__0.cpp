// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top__Syms.h"
#include "Vsim_top_arbiter__P3_A1_AB1_AD1.h"

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__PVT__mask_reg = vlSelf->__PVT__mask_next;
        vlSelf->__PVT__grant_reg = vlSelf->__PVT__grant_next;
        vlSelf->__PVT__grant_encoded_reg = vlSelf->__PVT__grant_encoded_next;
        vlSelf->__PVT__grant_valid_reg = vlSelf->__PVT__grant_valid_next;
    } else {
        vlSelf->__PVT__mask_reg = 0U;
        vlSelf->__PVT__grant_reg = 0U;
        vlSelf->__PVT__grant_encoded_reg = 0U;
        vlSelf->__PVT__grant_valid_reg = 0U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__PVT__mask_reg = vlSelf->__PVT__mask_next;
        vlSelf->__PVT__grant_reg = vlSelf->__PVT__grant_next;
        vlSelf->__PVT__grant_valid_reg = vlSelf->__PVT__grant_valid_next;
    } else {
        vlSelf->__PVT__mask_reg = 0U;
        vlSelf->__PVT__grant_reg = 0U;
        vlSelf->__PVT__grant_valid_reg = 0U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__1(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__1\n"); );
    // Body
    vlSelf->__PVT__grant_encoded_reg = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn)
                                         ? (IData)(vlSelf->__PVT__grant_encoded_next)
                                         : 0U);
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__PVT__mask_reg = vlSelf->__PVT__mask_next;
        vlSelf->__PVT__grant_reg = vlSelf->__PVT__grant_next;
        vlSelf->__PVT__grant_encoded_reg = vlSelf->__PVT__grant_encoded_next;
        vlSelf->__PVT__grant_valid_reg = vlSelf->__PVT__grant_valid_next;
    } else {
        vlSelf->__PVT__mask_reg = 0U;
        vlSelf->__PVT__grant_reg = 0U;
        vlSelf->__PVT__grant_encoded_reg = 0U;
        vlSelf->__PVT__grant_valid_reg = 0U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__1(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__1\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__1(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__1\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__1(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__1\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__PVT__mask_reg = vlSelf->__PVT__mask_next;
        vlSelf->__PVT__grant_reg = vlSelf->__PVT__grant_next;
        vlSelf->__PVT__grant_valid_reg = vlSelf->__PVT__grant_valid_next;
    } else {
        vlSelf->__PVT__mask_reg = 0U;
        vlSelf->__PVT__grant_reg = 0U;
        vlSelf->__PVT__grant_valid_reg = 0U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__1(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__1\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        vlSelf->__PVT__grant_next = (7U & ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                            [1U]) ? 
                                           ((IData)(1U) 
                                            << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                            [1U]) : 
                                           ((IData)(1U) 
                                            << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                            [1U])));
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__2(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__2\n"); );
    // Body
    vlSelf->__PVT__grant_encoded_reg = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn)
                                         ? (IData)(vlSelf->__PVT__grant_encoded_next)
                                         : 0U);
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_encoded_next = ((1U & 
                                              vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                              [1U])
                                              ? vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                             [1U] : 
                                             vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                             [1U]);
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__1(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__1\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__1(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__1\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__3(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__3\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__1(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__1\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request));
    vlSelf->__PVT__grant_valid_next = 0U;
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__grant_next = 0U;
    vlSelf->__PVT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
        vlSelf->__PVT__grant_next = vlSelf->__PVT__grant_reg;
        vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__grant_encoded_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
        if ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                [1U];
        } else {
            vlSelf->__PVT__grant_next = (7U & ((IData)(1U) 
                                               << vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                               [1U]));
            vlSelf->__PVT__grant_encoded_next = vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                [1U];
        }
    }
    vlSelf->__PVT__mask_next = vlSelf->__PVT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->__PVT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                                       & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))))) {
        if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
             [1U])) {
            vlSelf->__PVT__mask_next = (7U & ((1U & 
                                               vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                                               [1U])
                                               ? ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)
                                               : ((2U 
                                                   >= 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   ? 
                                                  ((IData)(7U) 
                                                   << 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                                    [1U]))
                                                   : 0U)));
        }
    }
}
