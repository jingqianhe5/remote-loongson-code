// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_Axi_CDC.h"
#include "Vsim_top__Syms.h"

VL_ATTR_COLD void Vsim_top_Axi_CDC___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__0(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__0\n"); );
    // Body
    vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrPlus 
        = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrPlus = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrPlus 
        = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrPlus = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__awFifo__DOT__popCC_popPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__wFifo__DOT__popCC_popPtrPlus = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__popCC_popPtrPlus = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__arFifo__DOT__popCC_popPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__rFifo__DOT__popCC_popPtrPlus = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_bready) 
           & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__rFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_rready) 
           & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__awFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg));
    vlSelf->__PVT__arFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg));
    vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_bready;
    if ((1U & (~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_rready;
    if ((1U & (~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__awFifo__DOT__pushCC_full = (((3U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                     >> 1U))) 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrGray) 
                                                    >> 1U))) 
                                               & ((1U 
                                                   & (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrGray)) 
                                                  == 
                                                  (1U 
                                                   & (IData)(vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__wFifo__DOT__pushCC_full = (((3U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                    >> 2U))) 
                                               == (3U 
                                                   & ((IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrGray) 
                                                      >> 2U))) 
                                              & ((3U 
                                                  & (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrGray)) 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__arFifo__DOT__pushCC_full = (((3U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                     >> 1U))) 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray) 
                                                    >> 1U))) 
                                               & ((1U 
                                                   & (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray)) 
                                                  == 
                                                  (1U 
                                                   & (IData)(vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray = 
        (7U & (((IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr) 
                >> 1U) ^ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray = (0xfU 
                                                   & (((IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray = (7U 
                                                   & (((IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray = 
        (7U & (((IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr) 
                >> 1U) ^ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray = (0xfU 
                                                   & (((IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__pushCC_full = (((3U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                    >> 1U))) 
                                               == (3U 
                                                   & ((IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray) 
                                                      >> 1U))) 
                                              & ((1U 
                                                  & (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__rFifo__DOT__pushCC_full = (((3U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                    >> 2U))) 
                                               == (3U 
                                                   & ((IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray) 
                                                      >> 2U))) 
                                              & ((3U 
                                                  & (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray)) 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__wFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_wready) 
           & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_wready;
    if ((1U & (~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__awFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_full)) 
                                                & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_awvalid));
    vlSelf->__PVT__wFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_wvalid));
    vlSelf->__PVT__arFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_full)) 
                                                & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_arvalid));
    vlSelf->__PVT__awFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray) 
                                               == (IData)(vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__wFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__bFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__arFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray) 
                                               == (IData)(vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__rFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__bFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_reg));
    vlSelf->__PVT__rFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg));
    vlSelf->__PVT__awFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__awFifo__DOT__io_push_fire) {
        vlSelf->__PVT__awFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__wFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__wFifo__DOT__io_push_fire) {
        vlSelf->__PVT__wFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__arFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__arFifo__DOT__io_push_fire) {
        vlSelf->__PVT__arFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__awFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__wFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__bFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__arFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__rFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__bFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__bFifo__DOT__io_push_fire) {
        vlSelf->__PVT__bFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__rFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__rFifo__DOT__io_push_fire) {
        vlSelf->__PVT__rFifo__DOT___zz_1 = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_Axi_CDC___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__0(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__0\n"); );
    // Body
    vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrPlus 
        = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrPlus = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__awFifo__DOT__popCC_popPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__wFifo__DOT__popCC_popPtrPlus = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__popCC_popPtrPlus = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__arFifo__DOT__popCC_popPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__rFifo__DOT__popCC_popPtrPlus = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__awFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_reg));
    vlSelf->__PVT__arFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_reg));
    vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray = 
        (7U & (((IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr) 
                >> 1U) ^ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray = (0xfU 
                                                   & (((IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray = (7U 
                                                   & (((IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray = 
        (7U & (((IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr) 
                >> 1U) ^ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray = (0xfU 
                                                   & (((IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__pushCC_full = (((3U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                    >> 1U))) 
                                               == (3U 
                                                   & ((IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray) 
                                                      >> 1U))) 
                                              & ((1U 
                                                  & (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__arFifo__DOT__pushCC_full = (((3U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                     >> 1U))) 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray) 
                                                    >> 1U))) 
                                               & ((1U 
                                                   & (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray)) 
                                                  == 
                                                  (1U 
                                                   & (IData)(vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__rFifo__DOT__pushCC_full = (((3U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                    >> 2U))) 
                                               == (3U 
                                                   & ((IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray) 
                                                      >> 2U))) 
                                              & ((3U 
                                                  & (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray)) 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__wFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_sys_axi_wready) 
           & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_sys_axi_wready;
    if ((1U & (~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__rFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_axi_rready) 
           & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_axi_rready;
    if ((1U & (~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__awFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray) 
                                               == (IData)(vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__wFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__bFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__arFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray) 
                                               == (IData)(vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__rFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__bFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_reg));
    vlSelf->__PVT__arFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_full)) 
                                                & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_axi_arvalid));
    vlSelf->__PVT__rFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg));
    vlSelf->__PVT__awFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__wFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__bFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__arFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__rFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__bFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__bFifo__DOT__io_push_fire) {
        vlSelf->__PVT__bFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__arFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__arFifo__DOT__io_push_fire) {
        vlSelf->__PVT__arFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__rFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__rFifo__DOT__io_push_fire) {
        vlSelf->__PVT__rFifo__DOT___zz_1 = 1U;
    }
}
