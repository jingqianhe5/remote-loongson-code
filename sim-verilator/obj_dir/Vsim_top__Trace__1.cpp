// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_sub_1(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 5521);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
        bufp->chgIData(oldp+0,(((IData)(4U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_pc)),32);
        bufp->chgBit(oldp+1,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_tlbr));
        bufp->chgBit(oldp+2,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_pif));
        bufp->chgBit(oldp+3,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_ppi));
        bufp->chgBit(oldp+4,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp));
        bufp->chgBit(oldp+5,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_num));
        bufp->chgCData(oldp+6,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_ppi) 
                                 << 3U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_pif) 
                                            << 2U) 
                                           | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_tlbr) 
                                               << 1U) 
                                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_num))))),4);
        bufp->chgBit(oldp+7,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_sign));
        bufp->chgIData(oldp+8,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_rd_buff),32);
        bufp->chgBit(oldp+9,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_buff_enable));
        bufp->chgBit(oldp+10,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_en) 
                                & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_taken)) 
                               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_ha3d303c7__0))));
        bufp->chgBit(oldp+11,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__idle_lock));
        bufp->chgBit(oldp+12,(((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_state) 
                                   | (4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_state)))) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_tlb_excp_cancel_req))));
        bufp->chgIData(oldp+13,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_ret_pc_t),32);
        bufp->chgCData(oldp+14,((0x1fU & (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_en))) 
                                           & (IData)(
                                                     (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_buffer 
                                                      >> 0x20U))) 
                                          | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_index)))),5);
        bufp->chgBit(oldp+15,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_ha3d303c7__0) 
                               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_taken))));
        bufp->chgBit(oldp+16,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_en) 
                               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_en))));
        bufp->chgIData(oldp+17,((((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__excp_tlbrefill))) 
                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbrentry) 
                                 | ((- (IData)((1U 
                                                & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__excp_tlbrefill))))) 
                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_eentry))),32);
        bufp->chgIData(oldp+18,((((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ertn_flush))) 
                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_era) 
                                 | ((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_h52ebff71__0))) 
                                    & ((IData)(4U) 
                                       + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])))),32);
        bufp->chgIData(oldp+19,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_buff_enable)
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_rd_buff
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rdata)),32);
        bufp->chgIData(oldp+20,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_pc),32);
        bufp->chgQData(oldp+21,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_buffer),38);
        bufp->chgBit(oldp+23,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_en));
        bufp->chgIData(oldp+24,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_buffer),32);
        bufp->chgBit(oldp+25,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_state));
        bufp->chgIData(oldp+26,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_buffer),32);
        bufp->chgCData(oldp+27,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_state),3);
        bufp->chgWData(oldp+28,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r),425);
        bufp->chgCData(oldp+42,((0xfU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                         >> 7U))),4);
        bufp->chgCData(oldp+43,((3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])),2);
        bufp->chgCData(oldp+44,((3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 0xbU))),2);
        bufp->chgBit(oldp+45,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                     >> 6U))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                     >> 5U))));
        bufp->chgIData(oldp+47,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]),32);
        bufp->chgIData(oldp+48,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]),32);
        bufp->chgBit(oldp+49,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                     >> 0xdU))));
        bufp->chgSData(oldp+50,((0x3ffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            << 2U) 
                                           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                              >> 0x1eU)))),10);
        bufp->chgBit(oldp+51,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                     >> 0xeU))));
        bufp->chgIData(oldp+52,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                  << 0x11U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                               >> 0xfU))),32);
        bufp->chgSData(oldp+53,((0x3fffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                            >> 0xfU))),14);
        bufp->chgBit(oldp+54,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 8U))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 9U))));
        bufp->chgBit(oldp+57,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+58,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 0xdU))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+61,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+62,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 0xeU))));
        bufp->chgBit(oldp+63,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                     >> 0x10U))));
        bufp->chgSData(oldp+64,((0x3ffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                           >> 0x11U))),10);
        bufp->chgIData(oldp+65,((0x7ffffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                              << 5U) 
                                             | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                >> 0x1bU)))),19);
        bufp->chgBit(oldp+66,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                     >> 0xeU))));
        bufp->chgBit(oldp+67,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+68,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+69,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+70,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+71,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+74,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                     >> 0x16U))));
        bufp->chgIData(oldp+75,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                  << 9U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0x17U))),32);
        bufp->chgBit(oldp+76,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                     >> 0x17U))));
        bufp->chgQData(oldp+77,((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[9U])) 
                                  << 0x29U) | (((QData)((IData)(
                                                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[8U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[7U])) 
                                                  >> 0x17U)))),64);
        bufp->chgIData(oldp+79,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                  << 9U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                            >> 0x17U))),32);
        bufp->chgCData(oldp+80,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                 >> 0x18U)),8);
        bufp->chgIData(oldp+81,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                                  << 0xcU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_index) 
                                               << 4U) 
                                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_offset)))),32);
        bufp->chgIData(oldp+82,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU]),32);
        bufp->chgCData(oldp+83,((0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU])),8);
        bufp->chgIData(oldp+84,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                  << 0x18U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                                               >> 8U))),32);
        bufp->chgBit(oldp+85,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                     >> 8U))));
        bufp->chgIData(oldp+86,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xdU] 
                                  << 0x17U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+87,((((- (IData)((1U & 
                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                >> 0xbU) 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                  >> 0xeU))))) 
                                  & (((- (IData)((1U 
                                                  & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded) 
                                                     >> 7U)))) 
                                      << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                 | (((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                      >> 0xeU)) 
                                                    & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                       >> 0xbU))))) 
                                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded)) 
                                    | (((- (IData)(
                                                   (1U 
                                                    & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                        >> 0xcU) 
                                                       & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                          >> 0xeU))))) 
                                        & (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded))) 
                                       | (((- (IData)(
                                                      (1U 
                                                       & ((~ 
                                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                            >> 0xeU)) 
                                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                             >> 0xcU))))) 
                                           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded)) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                           >> 0xbU)))))))) 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata)))))),32);
        bufp->chgIData(oldp+88,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata),32);
        bufp->chgIData(oldp+89,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__data_rd_buff),32);
        bufp->chgBit(oldp+90,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__data_buff_enable));
        bufp->chgBit(oldp+91,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__access_mem));
        bufp->chgCData(oldp+92,((3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 3U))),2);
        bufp->chgBit(oldp+93,((0U == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))));
        bufp->chgIData(oldp+94,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                                  << 0xcU) | (0xfffU 
                                              & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                  << 9U) 
                                                 | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                    >> 0x17U))))),32);
        bufp->chgSData(oldp+95,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pil) 
                                  << 0xfU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pis) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_ppi) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pme) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_tlbr) 
                                                        << 0xbU) 
                                                       | (0x3ffU 
                                                          & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                              << 2U) 
                                                             | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                >> 0x1eU))))))))),16);
        bufp->chgBit(oldp+96,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp));
        bufp->chgBit(oldp+97,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_tlbr));
        bufp->chgBit(oldp+98,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pil));
        bufp->chgBit(oldp+99,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pis));
        bufp->chgBit(oldp+100,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pme));
        bufp->chgBit(oldp+101,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_ppi));
        bufp->chgBit(oldp+102,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__lladdr 
                                == ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                                     << 8U) | (0xffU 
                                               & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                   << 5U) 
                                                  | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                     >> 0x1bU)))))));
        bufp->chgCData(oldp+103,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded),8);
        bufp->chgSData(oldp+104,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded),16);
        bufp->chgCData(oldp+105,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_index),8);
        bufp->chgCData(oldp+106,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_offset),4);
        bufp->chgIData(oldp+107,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__dcache_miss_counter),32);
        bufp->chgIData(oldp+108,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__icache_miss_counter),32);
        bufp->chgIData(oldp+109,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__commit_inst_counter),32);
        bufp->chgIData(oldp+110,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__br_inst_counter),32);
        bufp->chgIData(oldp+111,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__mem_inst_counter),32);
        bufp->chgIData(oldp+112,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__br_pre_counter),32);
        bufp->chgIData(oldp+113,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__br_pre_error_counter),32);
        bufp->chgBit(oldp+114,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__crmd_wen));
        bufp->chgBit(oldp+115,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x100U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+116,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x400U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+117,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x500U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+118,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x600U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+119,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x700U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0xc00U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+121,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+122,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbehi_wen));
        bufp->chgBit(oldp+123,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1200U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+124,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1300U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+125,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1800U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+126,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1900U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+127,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1a00U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+128,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1b00U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+129,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x2000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+130,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x3000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+131,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x3100U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+132,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x3200U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+133,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x3300U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+134,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x4000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+135,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tcfg_wen));
        bufp->chgBit(oldp+136,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x4200U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+137,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x4300U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+138,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x4400U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+139,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x6000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+140,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x8800U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+141,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__DMW0_wen));
        bufp->chgBit(oldp+142,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__DMW1_wen));
        bufp->chgBit(oldp+143,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x10000U == (0x3fff00U 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+144,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x10100U == (0x3fff00U 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgIData(oldp+145,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_crmd),32);
        bufp->chgIData(oldp+146,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_prmd),32);
        bufp->chgIData(oldp+147,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_ectl),32);
        bufp->chgIData(oldp+148,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_estat),32);
        bufp->chgIData(oldp+149,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_badv),32);
        bufp->chgIData(oldp+150,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_asid),32);
        bufp->chgIData(oldp+151,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpuid),32);
        bufp->chgIData(oldp+152,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save0),32);
        bufp->chgIData(oldp+153,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save1),32);
        bufp->chgIData(oldp+154,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save2),32);
        bufp->chgIData(oldp+155,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save3),32);
        bufp->chgIData(oldp+156,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tcfg),32);
        bufp->chgIData(oldp+157,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tval),32);
        bufp->chgIData(oldp+158,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cntc),32);
        bufp->chgIData(oldp+159,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_ticlr),32);
        bufp->chgIData(oldp+160,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_llbctl),32);
        bufp->chgIData(oldp+161,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_dmw0),32);
        bufp->chgIData(oldp+162,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_dmw1),32);
        bufp->chgIData(oldp+163,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdl),32);
        bufp->chgIData(oldp+164,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdh),32);
        bufp->chgIData(oldp+165,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_brk),32);
        bufp->chgIData(oldp+166,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_disable_cache),32);
        bufp->chgIData(oldp+167,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg1),32);
        bufp->chgIData(oldp+168,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg2),32);
        bufp->chgIData(oldp+169,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg10),32);
        bufp->chgIData(oldp+170,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg11),32);
        bufp->chgIData(oldp+171,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg12),32);
        bufp->chgIData(oldp+172,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg13),32);
        bufp->chgIData(oldp+173,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_badv 
                                   >> 0x1fU) ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdh
                                   : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdl)),32);
        bufp->chgBit(oldp+174,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__timer_en));
        bufp->chgQData(oldp+175,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__timer_64),64);
        bufp->chgBit(oldp+177,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbrd_valid_wr_en));
        bufp->chgBit(oldp+178,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbrd_invalid_wr_en));
        bufp->chgBit(oldp+179,((0x3fU == (0x3fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_estat 
                                                   >> 0x10U)))));
        bufp->chgBit(oldp+180,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__no_forward));
        bufp->chgQData(oldp+181,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS),33);
        bufp->chgQData(oldp+183,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR),33);
        bufp->chgQData(oldp+185,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_r),33);
        bufp->chgCData(oldp+187,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count),8);
        bufp->chgQData(oldp+188,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_d),33);
        bufp->chgQData(oldp+190,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__result_r),33);
        bufp->chgQData(oldp+192,((QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                   ? 
                                                  ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                    >> 0x1fU)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))
                                                    : 
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])
                                                   : 
                                                  vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])))),33);
        bufp->chgQData(oldp+194,((QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                   ? 
                                                  ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                    >> 0x1fU)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]))
                                                    : 
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])
                                                   : 
                                                  vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))),33);
        bufp->chgBit(oldp+196,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__div_signed_buffer));
        bufp->chgBit(oldp+197,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__x_31_buffer));
        bufp->chgBit(oldp+198,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer));
        bufp->chgBit(oldp+199,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed));
        bufp->chgBit(oldp+200,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31));
        bufp->chgBit(oldp+201,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete)
                                       ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer)
                                       : (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+202,((0xf0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count))));
        bufp->chgBit(oldp+203,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete));
        bufp->chgQData(oldp+204,((0x1ffffffffULL & 
                                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                    ? (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31) 
                                        == (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete)
                                                   ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer)
                                                   : 
                                                  (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                   >> 0x1fU))))
                                        ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS
                                        : (~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS 
                                              - 1ULL)))
                                    : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS))),33);
        bufp->chgQData(oldp+206,((0x1ffffffffULL & 
                                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                    ? ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31)
                                        ? (~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR 
                                              - 1ULL))
                                        : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR)
                                    : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR))),33);
        bufp->chgBit(oldp+208,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__error_reg));
        bufp->chgBit(oldp+209,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_full_reg));
        bufp->chgBit(oldp+210,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_overflow_reg));
        bufp->chgCData(oldp+211,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_count_reg),8);
        bufp->chgCData(oldp+212,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__error_code_reg),8);
        bufp->chgBit(oldp+213,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_raw_mode_reg));
        bufp->chgQData(oldp+214,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_valid_bits),64);
        bufp->chgBit(oldp+216,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd));
        bufp->chgBit(oldp+217,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__status_cmd));
        bufp->chgBit(oldp+218,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_cmd));
        bufp->chgBit(oldp+219,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__ub_write_cmd));
        bufp->chgBit(oldp+220,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__set_mode_cmd));
        bufp->chgBit(oldp+221,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__dma_load_cmd));
        bufp->chgBit(oldp+222,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__clear_cmd));
        bufp->chgBit(oldp+223,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd));
        bufp->chgCData(oldp+224,((0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])),6);
        bufp->chgBit(oldp+225,((0x20U <= (0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))));
        bufp->chgBit(oldp+226,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_pair_valid));
        bufp->chgIData(oldp+227,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__i),32);
        bufp->chgIData(oldp+228,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__lane),32);
        bufp->chgCData(oldp+229,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__write_index),8);
        bufp->chgCData(oldp+230,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_class),4);
        bufp->chgQData(oldp+231,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX),64);
        bufp->chgQData(oldp+233,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY),33);
        bufp->chgIData(oldp+235,(((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x) 
                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                   << 0x10U) | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x) 
                                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                                    << 0xeU) 
                                                   | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x) 
                                                        | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                                       << 0xdU) 
                                                      | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x) 
                                                           | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                                          << 0xcU) 
                                                         | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x) 
                                                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                                                             << 0xbU) 
                                                            | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x) 
                                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                                                                << 0xaU) 
                                                               | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x) 
                                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                                                                   << 9U) 
                                                                  | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x) 
                                                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                                                                      << 8U) 
                                                                     | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai.__PVT__neg2x) 
                                                                          | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai.__PVT__negx)) 
                                                                         << 7U) 
                                                                        | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai.__PVT__neg2x) 
                                                                             | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai.__PVT__negx)) 
                                                                            << 6U) 
                                                                           | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai.__PVT__negx)) 
                                                                               << 5U) 
                                                                              | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai.__PVT__negx)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx))))))))))))))))))),17);
        bufp->chgQData(oldp+236,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0]),64);
        bufp->chgQData(oldp+238,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[1]),64);
        bufp->chgQData(oldp+240,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[2]),64);
        bufp->chgQData(oldp+242,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[3]),64);
        bufp->chgQData(oldp+244,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[4]),64);
        bufp->chgQData(oldp+246,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[5]),64);
        bufp->chgQData(oldp+248,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[6]),64);
        bufp->chgQData(oldp+250,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[7]),64);
        bufp->chgQData(oldp+252,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[8]),64);
        bufp->chgQData(oldp+254,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[9]),64);
        bufp->chgQData(oldp+256,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[10]),64);
        bufp->chgQData(oldp+258,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[11]),64);
        bufp->chgQData(oldp+260,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[12]),64);
        bufp->chgQData(oldp+262,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[13]),64);
        bufp->chgQData(oldp+264,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[14]),64);
        bufp->chgQData(oldp+266,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[15]),64);
        bufp->chgQData(oldp+268,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[16]),64);
        bufp->chgIData(oldp+270,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry),17);
        bufp->chgQData(oldp+271,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[0]),64);
        bufp->chgQData(oldp+273,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[1]),64);
        bufp->chgQData(oldp+275,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[2]),64);
        bufp->chgQData(oldp+277,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[3]),64);
        bufp->chgQData(oldp+279,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[4]),64);
        bufp->chgQData(oldp+281,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[5]),64);
        bufp->chgQData(oldp+283,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[6]),64);
        bufp->chgQData(oldp+285,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[7]),64);
        bufp->chgQData(oldp+287,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[8]),64);
        bufp->chgQData(oldp+289,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[9]),64);
        bufp->chgQData(oldp+291,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[10]),64);
        bufp->chgQData(oldp+293,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[11]),64);
        bufp->chgQData(oldp+295,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[12]),64);
        bufp->chgQData(oldp+297,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[13]),64);
        bufp->chgQData(oldp+299,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[14]),64);
        bufp->chgQData(oldp+301,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[15]),64);
        bufp->chgQData(oldp+303,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[16]),64);
        bufp->chgIData(oldp+305,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__p),32);
        bufp->chgQData(oldp+306,((((QData)((IData)(
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi.__PVT__FifSig) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3000U 
                                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.COut))))) 
                                                       | (IData)(
                                                                 (0x3000U 
                                                                  == 
                                                                  (0x3000U 
                                                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.COut)))))))) 
                                   << 0x3fU) | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____VdfgTmp_hb9b19849__0)),64);
        bufp->chgQData(oldp+308,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SOut),64);
        bufp->chgWData(oldp+310,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r),493);
        bufp->chgBit(oldp+326,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+327,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 6U))));
        bufp->chgSData(oldp+328,((0xffffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                              << 9U) 
                                             | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                >> 0x17U)))),16);
        bufp->chgBit(oldp+329,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+330,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+331,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                      >> 7U))));
        bufp->chgBit(oldp+332,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                      >> 8U))));
        bufp->chgIData(oldp+333,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                   << 0x17U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                >> 9U))),32);
        bufp->chgBit(oldp+334,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 9U))));
        bufp->chgBit(oldp+335,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+336,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+337,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+338,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+339,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+340,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+341,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+342,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+343,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+344,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+345,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+346,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+347,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+348,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
                                   << 6U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                             >> 0x1aU))),32);
        bufp->chgBit(oldp+349,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+350,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                      >> 0x1bU))));
        bufp->chgQData(oldp+351,((((QData)((IData)(
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU])) 
                                   << 0x25U) | (((QData)((IData)(
                                                                 vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U])) 
                                                 << 5U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[8U])) 
                                                   >> 0x1bU)))),64);
        bufp->chgCData(oldp+353,((0xffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                            << 4U) 
                                           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+354,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                   << 0x1cU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                                >> 4U))),32);
        bufp->chgIData(oldp+355,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                   << 0x1cU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                                >> 4U))),32);
        bufp->chgCData(oldp+356,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                           >> 4U))),8);
        bufp->chgIData(oldp+357,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                   << 0x14U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                                >> 0xcU))),32);
        bufp->chgBit(oldp+358,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+359,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xfU] 
                                   << 0x13U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                                >> 0xdU))),32);
        bufp->chgSData(oldp+360,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][0U]),16);
        bufp->chgSData(oldp+361,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][1U]),16);
        bufp->chgSData(oldp+362,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][2U]),16);
        bufp->chgSData(oldp+363,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][3U]),16);
        bufp->chgSData(oldp+364,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][4U]),16);
        bufp->chgSData(oldp+365,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][5U]),16);
        bufp->chgSData(oldp+366,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][6U]),16);
        bufp->chgSData(oldp+367,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][7U]),16);
        bufp->chgSData(oldp+368,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][0U]),16);
        bufp->chgSData(oldp+369,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][1U]),16);
        bufp->chgSData(oldp+370,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][2U]),16);
        bufp->chgSData(oldp+371,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][3U]),16);
        bufp->chgSData(oldp+372,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][4U]),16);
        bufp->chgSData(oldp+373,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][5U]),16);
        bufp->chgSData(oldp+374,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][6U]),16);
        bufp->chgSData(oldp+375,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][7U]),16);
        bufp->chgSData(oldp+376,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][0U]),16);
        bufp->chgSData(oldp+377,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][1U]),16);
        bufp->chgSData(oldp+378,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][2U]),16);
        bufp->chgSData(oldp+379,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][3U]),16);
        bufp->chgSData(oldp+380,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][4U]),16);
        bufp->chgSData(oldp+381,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][5U]),16);
        bufp->chgSData(oldp+382,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][6U]),16);
        bufp->chgSData(oldp+383,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][7U]),16);
        bufp->chgSData(oldp+384,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+385,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+386,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+387,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+388,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+389,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+390,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+391,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+392,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+393,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+394,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+395,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+396,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+397,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+398,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+399,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+400,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+401,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+402,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+403,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+404,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+405,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+406,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+407,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgQData(oldp+408,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[0]),57);
        bufp->chgQData(oldp+410,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[1]),57);
        bufp->chgQData(oldp+412,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[2]),57);
        bufp->chgQData(oldp+414,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[3]),57);
        bufp->chgQData(oldp+416,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[0]),57);
        bufp->chgQData(oldp+418,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[1]),57);
        bufp->chgQData(oldp+420,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[2]),57);
        bufp->chgQData(oldp+422,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[3]),57);
        bufp->chgCData(oldp+424,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rData),2);
        bufp->chgCData(oldp+425,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rData),3);
        bufp->chgQData(oldp+426,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[0]),37);
        bufp->chgQData(oldp+428,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[1]),37);
        bufp->chgQData(oldp+430,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[2]),37);
        bufp->chgQData(oldp+432,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[3]),37);
        bufp->chgQData(oldp+434,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[4]),37);
        bufp->chgQData(oldp+436,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[5]),37);
        bufp->chgQData(oldp+438,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[6]),37);
        bufp->chgQData(oldp+440,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[7]),37);
        bufp->chgCData(oldp+442,((0xfU & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT___zz_ram_port1))),4);
        bufp->chgQData(oldp+443,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[0]),57);
        bufp->chgQData(oldp+445,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[1]),57);
        bufp->chgQData(oldp+447,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[2]),57);
        bufp->chgQData(oldp+449,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[3]),57);
        bufp->chgQData(oldp+451,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[0]),57);
        bufp->chgQData(oldp+453,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[1]),57);
        bufp->chgQData(oldp+455,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[2]),57);
        bufp->chgQData(oldp+457,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[3]),57);
        bufp->chgCData(oldp+459,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rData),2);
        bufp->chgCData(oldp+460,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rData),3);
        bufp->chgQData(oldp+461,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[0]),37);
        bufp->chgQData(oldp+463,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[1]),37);
        bufp->chgQData(oldp+465,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[2]),37);
        bufp->chgQData(oldp+467,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[3]),37);
        bufp->chgQData(oldp+469,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[4]),37);
        bufp->chgQData(oldp+471,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[5]),37);
        bufp->chgQData(oldp+473,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[6]),37);
        bufp->chgQData(oldp+475,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[7]),37);
        bufp->chgCData(oldp+477,((6U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY) 
                                        << 1U))),3);
        bufp->chgQData(oldp+478,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.OutX),64);
        bufp->chgBit(oldp+480,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0) 
                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx))));
        bufp->chgBit(oldp+481,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx));
        bufp->chgBit(oldp+482,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0));
        bufp->chgBit(oldp+483,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0));
        bufp->chgBit(oldp+484,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))));
        bufp->chgBit(oldp+485,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+486,((((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0)))));
        bufp->chgBit(oldp+487,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+488,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+489,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+490,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+491,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xaU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xaU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+492,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+493,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+494,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+495,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+496,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xbU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xbU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+497,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+498,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+499,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+500,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+501,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xcU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xcU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+502,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+503,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+504,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+505,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+506,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xdU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xdU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+507,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+508,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+509,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+510,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+511,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xeU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xeU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+512,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+513,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+514,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+515,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+516,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xfU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xfU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+517,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+518,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+519,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+520,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+521,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x10U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x10U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+522,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+523,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+524,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+525,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+526,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x11U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+527,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+528,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+529,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+530,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+531,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x12U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+532,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+533,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+534,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+535,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+536,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x13U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+537,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 1U)))));
        bufp->chgBit(oldp+538,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+539,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+540,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+541,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 1U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 1U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+542,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+543,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+544,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+545,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+546,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x14U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+547,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+548,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+549,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+550,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+551,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x15U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x15U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+552,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+553,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+554,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+555,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+556,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x16U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x16U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+557,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+558,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+559,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+560,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+561,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x17U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x17U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+562,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+563,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+564,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+565,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+566,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x18U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x18U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+567,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+568,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+569,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+570,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+571,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x19U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x19U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+572,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+573,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+574,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+575,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+576,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+577,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+578,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+579,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+580,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+581,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+582,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+583,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+584,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+585,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+586,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+587,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+588,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+589,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+590,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+591,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+592,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 2U)))));
        bufp->chgBit(oldp+593,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+594,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+595,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+596,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 2U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 2U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [2U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+597,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+598,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+599,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+600,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+601,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+602,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+603,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+604,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+605,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+606,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+607,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+608,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+609,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+610,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+611,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x20U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x20U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+612,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+613,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+614,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+615,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+616,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x21U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x21U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+617,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+618,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+619,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+620,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+621,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x22U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x22U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+622,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+623,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+624,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+625,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+626,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x23U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x23U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+627,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+628,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+629,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+630,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+631,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x24U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x24U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+632,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+633,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+634,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+635,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+636,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x25U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x25U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+637,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+638,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+639,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+640,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+641,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x26U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x26U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+642,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+643,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+644,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+645,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+646,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x27U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x27U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+647,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 3U)))));
        bufp->chgBit(oldp+648,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+649,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+650,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+651,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 3U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 3U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [3U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+652,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+653,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+654,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+655,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+656,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x28U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x28U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+657,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+658,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+659,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+660,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+661,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x29U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x29U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+662,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+663,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+664,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+665,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+666,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+667,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+668,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+669,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+670,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+671,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+672,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+673,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+674,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+675,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+676,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+677,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+678,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+679,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+680,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+681,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+682,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+683,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+684,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+685,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+686,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+687,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+688,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+689,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+690,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+691,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+692,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+693,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+694,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+695,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+696,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x30U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x30U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+697,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+698,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+699,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+700,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+701,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x31U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x31U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+702,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 4U)))));
        bufp->chgBit(oldp+703,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+704,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+705,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+706,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 4U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 4U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [4U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+707,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+708,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+709,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+710,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+711,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x32U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x32U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+712,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+713,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+714,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+715,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+716,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x33U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x33U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+717,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+718,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+719,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+720,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+721,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x34U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x34U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x34U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+722,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+723,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+724,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+725,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+726,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x35U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x35U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x35U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+727,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+728,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+729,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+730,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+731,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x36U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x36U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x36U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+732,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+733,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+734,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+735,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+736,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x37U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x37U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x37U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+737,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+738,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+739,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+740,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+741,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x38U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x38U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x38U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+742,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+743,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+744,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+745,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+746,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x39U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x39U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x39U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+747,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+748,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+749,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+750,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+751,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3aU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3aU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+753,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+754,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+755,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+756,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 5U)))));
        bufp->chgBit(oldp+758,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+759,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+760,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+761,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 5U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 5U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [5U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+762,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+763,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+764,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+765,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+766,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3cU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3cU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+767,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+768,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+769,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+770,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+771,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3dU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3dU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+772,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+773,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+774,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+775,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+776,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3eU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3eU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+777,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+778,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+779,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+780,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+781,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3fU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3fU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+782,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 6U)))));
        bufp->chgBit(oldp+783,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+784,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+785,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+786,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 6U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 6U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [6U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+787,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 7U)))));
        bufp->chgBit(oldp+788,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+789,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+790,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+791,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 7U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 7U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [7U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+792,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 8U)))));
        bufp->chgBit(oldp+793,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+794,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+795,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+796,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 8U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 8U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [8U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+797,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 9U)))));
        bufp->chgBit(oldp+798,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+799,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+800,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+801,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 9U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 9U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [9U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+802,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 1U)))));
        bufp->chgBit(oldp+803,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY))));
        bufp->chgCData(oldp+804,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y),3);
        bufp->chgQData(oldp+805,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                  << 0x20U)),64);
        bufp->chgQData(oldp+807,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.OutX),64);
        bufp->chgBit(oldp+809,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x) 
                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx))));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x));
        bufp->chgBit(oldp+813,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x20U)))));
        bufp->chgBit(oldp+814,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x20U))))));
        bufp->chgBit(oldp+815,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x20U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x20U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)))));
        bufp->chgBit(oldp+816,((1U & (IData)((0x3fffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))));
        bufp->chgBit(oldp+817,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+818,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+819,((1U & (~ (IData)((0x3fffffffc00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))))));
        bufp->chgBit(oldp+820,((((~ (IData)((0x3fffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xaU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+821,((1U & (IData)((0x1fffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+822,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+823,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+824,((1U & (~ (IData)((0x1fffffffe00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+825,((((~ (IData)((0x1fffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1fffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xbU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+826,((1U & (IData)((0xffffffff00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+827,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+828,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+829,((1U & (~ (IData)((0xffffffff00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+830,((((~ (IData)((0xffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0xffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xcU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+831,((1U & (IData)((0x7fffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+832,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+833,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+834,((1U & (~ (IData)((0x7fffffff80000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+835,((((~ (IData)((0x7fffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x7fffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xdU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+836,((1U & (IData)((0x3fffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+837,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+838,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+839,((1U & (~ (IData)((0x3fffffffc0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+840,((((~ (IData)((0x3fffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xeU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+841,((1U & (IData)((0x1fffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+842,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+843,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+844,((1U & (~ (IData)((0x1fffffffe0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+845,((((~ (IData)((0x1fffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1fffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xfU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+846,((1U & (IData)((0xffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+847,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+848,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+849,((1U & (~ (IData)((0xffffffff0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+850,((((~ (IData)((0xffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0xffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x10U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+851,((1U & (IData)((0x7fffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+852,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+853,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+854,((1U & (~ (IData)((0x7fffffff8000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+855,((((~ (IData)((0x7fffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x7fffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x11U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+856,((1U & (IData)((0x3fffffffc000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+857,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+858,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+859,((1U & (~ (IData)((0x3fffffffc000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+860,((((~ (IData)((0x3fffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x12U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+861,((1U & (IData)((0x1fffffffe000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+862,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+863,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+864,((1U & (~ (IData)((0x1fffffffe000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+865,((((~ (IData)((0x1fffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1fffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x13U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+866,((1U & (IData)((0x7fffffff80000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1fU))))));
        bufp->chgBit(oldp+867,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+868,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+869,((1U & (~ (IData)((0x7fffffff80000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1fU)))))));
        bufp->chgBit(oldp+870,((((~ (IData)((0x7fffffff80000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1fU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x7fffffff80000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1fU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [1U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+871,((1U & (IData)((0xffffffff000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+872,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+873,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+874,((1U & (~ (IData)((0xffffffff000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+875,((((~ (IData)((0xffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0xffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x14U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+876,((1U & (IData)((0x7fffffff800ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+877,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+878,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+879,((1U & (~ (IData)((0x7fffffff800ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+880,((((~ (IData)((0x7fffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x7fffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x15U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+881,((1U & (IData)((0x3fffffffc00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))));
        bufp->chgBit(oldp+882,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+883,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+884,((1U & (~ (IData)((0x3fffffffc00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))))));
        bufp->chgBit(oldp+885,((((~ (IData)((0x3fffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x16U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+886,((1U & (IData)((0x1fffffffe00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 9U))))));
        bufp->chgBit(oldp+887,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+888,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+889,((1U & (~ (IData)((0x1fffffffe00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 9U)))))));
        bufp->chgBit(oldp+890,((((~ (IData)((0x1fffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1fffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x17U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+891,((1U & (IData)((0xffffffff00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+892,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+893,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+894,((1U & (~ (IData)((0xffffffff00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 8U)))))));
        bufp->chgBit(oldp+895,((((~ (IData)((0xffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0xffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x18U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+896,((1U & (IData)((0x7fffffff80ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+897,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+898,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+899,((1U & (~ (IData)((0x7fffffff80ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+900,((((~ (IData)((0x7fffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x7fffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x19U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+901,((1U & (IData)((0x3fffffffc0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+902,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+903,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+904,((1U & (~ (IData)((0x3fffffffc0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+905,((((~ (IData)((0x3fffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+906,((1U & (IData)((0x1fffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+907,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+908,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+909,((1U & (~ (IData)((0x1fffffffe0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+910,((((~ (IData)((0x1fffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1fffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+911,((1U & (IData)((0xffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+912,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+913,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+914,((1U & (~ (IData)((0xffffffff0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+915,((((~ (IData)((0xffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0xffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+916,((1U & (IData)((0x7fffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+917,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+918,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+919,((1U & (~ (IData)((0x7fffffff8ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+920,((((~ (IData)((0x7fffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x7fffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+921,((1U & (IData)((0x3fffffffc0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1eU))))));
        bufp->chgBit(oldp+922,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+923,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+924,((1U & (~ (IData)((0x3fffffffc0000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1eU)))))));
        bufp->chgBit(oldp+925,((((~ (IData)((0x3fffffffc0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1eU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffffc0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1eU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [2U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+926,((1U & (IData)((0x3fffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+927,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+928,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+929,((1U & (~ (IData)((0x3fffffffcULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+930,((((~ (IData)((0x3fffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+931,((1U & (IData)((0x1fffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+932,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+933,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+934,((1U & (~ (IData)((0x1fffffffeULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+935,((((~ (IData)((0x1fffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1fffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+936,((1U & (IData)((0xffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+937,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+938,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+939,((1U & (~ (IData)((0xffffffffULL 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+940,((((~ (IData)((0xffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0xffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x20U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+941,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+942,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+943,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+944,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+945,((((~ (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x21U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+946,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+947,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+948,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+949,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+950,((((~ (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x22U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+951,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+952,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+953,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+954,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+955,((((~ (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x23U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+956,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+957,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+958,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+959,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+960,((((~ (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x24U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+961,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+962,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+963,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+964,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+965,((((~ (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x25U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+966,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+967,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+968,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+969,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+970,((((~ (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x26U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+971,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+972,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+973,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+974,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+975,((((~ (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x27U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+976,((1U & (IData)((0x1fffffffe0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1dU))))));
        bufp->chgBit(oldp+977,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+978,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+979,((1U & (~ (IData)((0x1fffffffe0000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1dU)))))));
        bufp->chgBit(oldp+980,((((~ (IData)((0x1fffffffe0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1dU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1fffffffe0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1dU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [3U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+981,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+982,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+983,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+984,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+985,((((~ (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x28U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+986,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+987,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+988,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+989,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+990,((((~ (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x29U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+991,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+992,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+993,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+994,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+995,((((~ (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x2aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+996,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+997,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+998,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+999,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+1000,((((~ (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1001,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1002,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1003,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1004,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1005,((((~ (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1006,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1007,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1008,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1009,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1010,((((~ (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1011,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1012,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1013,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1014,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1015,((((~ (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1016,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1017,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1018,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1019,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1020,((((~ (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1021,((1U & (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1022,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1023,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1024,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1025,((((~ (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x30U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1026,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1027,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1028,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1029,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1030,((((~ (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x31U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1031,((1U & (IData)((0xffffffff0000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU))))));
        bufp->chgBit(oldp+1032,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1033,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1034,((1U & (~ (IData)((0xffffffff0000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU)))))));
        bufp->chgBit(oldp+1035,((((~ (IData)((0xffffffff0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffff0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [4U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1036,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1037,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1038,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1039,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1040,((((~ (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x32U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1041,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1042,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1043,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1044,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1045,((((~ (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x33U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1046,((1U & (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1047,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1048,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1049,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1050,((((~ (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x34U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1051,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1052,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1053,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1054,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1055,((((~ (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x35U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1056,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1057,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1058,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1059,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1060,((((~ (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x36U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1061,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1062,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1063,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1064,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1065,((((~ (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x37U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1066,((1U & (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1067,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1068,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1069,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1070,((((~ (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x38U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1071,((1U & (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1072,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1073,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1074,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1075,((((~ (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x39U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1076,((1U & (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1077,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1078,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1079,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1080,((((~ (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1081,((1U & (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1082,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1083,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1084,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1085,((((~ (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1086,((1U & (IData)((0x7fffffff8000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU))))));
        bufp->chgBit(oldp+1087,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1088,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1089,((1U & (~ (IData)((0x7fffffff8000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU)))))));
        bufp->chgBit(oldp+1090,((((~ (IData)((0x7fffffff8000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff8000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [5U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1091,((1U & (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1092,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1093,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1094,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1095,((((~ (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1096,((1U & (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1097,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1098,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1099,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1100,((((~ (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1101,((1U & (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1102,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1103,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1104,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1105,((((~ (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1106,((1U & (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1107,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1108,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1109,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1110,((((~ (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU) 
                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x))) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1111,((1U & (IData)((0x3fffffffc000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU))))));
        bufp->chgBit(oldp+1112,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1113,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1114,((1U & (~ (IData)((0x3fffffffc000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU)))))));
        bufp->chgBit(oldp+1115,((((~ (IData)((0x3fffffffc000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffffc000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [6U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1116,((1U & (IData)((0x1fffffffe000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x19U))))));
        bufp->chgBit(oldp+1117,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1118,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1119,((1U & (~ (IData)((0x1fffffffe000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x19U)))))));
        bufp->chgBit(oldp+1120,((((~ (IData)((0x1fffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [7U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1121,((1U & (IData)((0xffffffff000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))));
        bufp->chgBit(oldp+1122,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1123,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1124,((1U & (~ (IData)((0xffffffff000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x18U)))))));
        bufp->chgBit(oldp+1125,((((~ (IData)((0xffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [8U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1126,((1U & (IData)((0x7fffffff800000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))));
        bufp->chgBit(oldp+1127,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1128,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1129,((1U & (~ (IData)((0x7fffffff800000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x17U)))))));
        bufp->chgBit(oldp+1130,((((~ (IData)((0x7fffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [9U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1131,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y) 
                                       >> 2U))));
        bufp->chgBit(oldp+1132,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y) 
                                       >> 1U))));
        bufp->chgBit(oldp+1133,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y))));
        bufp->chgCData(oldp+1134,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                 >> 1U)))),3);
        bufp->chgQData(oldp+1135,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                   << 2U)),64);
        bufp->chgQData(oldp+1137,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+1139,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+1141,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+1143,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U)))));
        bufp->chgBit(oldp+1144,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+1145,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 2U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 2U)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+1146,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1147,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1148,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1149,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1150,((((~ (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1151,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1152,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1153,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1154,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1155,((((~ (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1156,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1157,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1158,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1159,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1160,((((~ (IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1161,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1162,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1163,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1164,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1165,((((~ (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1166,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1167,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1168,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1169,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1170,((((~ (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1171,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1172,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1173,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1174,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1175,((((~ (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1176,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1177,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1178,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1179,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1180,((((~ (IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1181,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1182,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1183,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1184,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1185,((((~ (IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1186,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1187,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1188,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1189,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1190,((((~ (IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1191,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1192,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1193,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1194,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1195,((((~ (IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1196,((1U & (IData)((0x7ffffffffffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1197,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1198,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1199,((1U & (~ (IData)((0x7ffffffffffffffeULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1200,((((~ (IData)((0x7ffffffffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [1U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1201,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1202,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1203,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1204,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1205,((((~ (IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1206,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1207,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1208,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1209,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1210,((((~ (IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1211,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1212,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1213,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1214,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1215,((((~ (IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1216,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1217,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1218,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1219,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1220,((((~ (IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1221,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1222,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1223,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1224,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1225,((((~ (IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1226,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1227,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1228,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1229,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1230,((((~ (IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1231,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1232,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1233,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1234,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1235,((((~ (IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1236,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1237,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1238,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1239,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1240,((((~ (IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1241,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1242,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1243,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1244,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1245,((((~ (IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1246,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1247,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1248,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1249,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1250,((((~ (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1251,((1U & (IData)((0x3fffffffffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1252,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1253,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1254,((1U & (~ (IData)((0x3fffffffffffffffULL 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1255,((((~ (IData)((0x3fffffffffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [2U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1256,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1257,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1258,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1259,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1260,((((~ (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1261,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1262,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1263,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1264,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1265,((((~ (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1266,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1267,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1268,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1269,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1270,((((~ (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1271,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1272,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1273,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1274,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1275,((((~ (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1276,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1277,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1278,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1279,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1280,((((~ (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1281,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1282,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1283,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1284,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1285,((((~ (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1286,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1287,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1288,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1289,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1290,((((~ (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1291,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1292,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1293,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1294,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1295,((((~ (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1296,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1297,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1298,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1299,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1300,((((~ (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1301,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1302,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1303,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1304,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1305,((((~ (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1306,((1U & (IData)((0x1fffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1307,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1308,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1309,((1U & (~ (IData)((0x1fffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1310,((((~ (IData)((0x1fffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [3U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1311,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1312,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1313,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1314,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1315,((((~ (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1316,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1317,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1318,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1319,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1320,((((~ (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1321,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1322,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1323,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1324,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1325,((((~ (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1326,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1327,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1328,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1329,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1330,((((~ (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1331,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1332,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1333,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1334,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1335,((((~ (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1336,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1337,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1338,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1339,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1340,((((~ (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1341,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1342,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1343,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1344,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1345,((((~ (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1346,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1347,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1348,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1349,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1350,((((~ (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1351,((1U & (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1352,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1353,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1354,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1355,((((~ (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1356,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1357,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1358,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1359,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1360,((((~ (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1361,((1U & (IData)((0xfffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1362,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1363,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1364,((1U & (~ (IData)((0xfffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1365,((((~ (IData)((0xfffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [4U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1366,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1367,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1368,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1369,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1370,((((~ (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1371,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1372,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1373,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1374,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1375,((((~ (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1376,((1U & (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1377,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1378,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1379,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1380,((((~ (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1381,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1382,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1383,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1384,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1385,((((~ (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1386,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1387,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1388,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1389,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1390,((((~ (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1391,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1392,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1393,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1394,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1395,((((~ (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1396,((1U & (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1397,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1398,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1399,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1400,((((~ (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1401,((1U & (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1402,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1403,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1404,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1405,((((~ (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1406,((1U & (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1407,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1408,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1409,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1410,((((~ (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1411,((1U & (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1412,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1413,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1414,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1415,((((~ (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1416,((1U & (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1417,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1418,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1419,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1420,((((~ (IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [5U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1421,((1U & (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1422,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1423,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1424,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1425,((((~ (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1426,((1U & (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1427,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1428,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1429,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1430,((((~ (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1431,((1U & (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1432,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1433,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1434,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1435,((((~ (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1436,((1U & (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1437,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1438,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1439,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1440,((((~ (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU) 
                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x))) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1441,((1U & (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1442,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1443,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1444,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1445,((((~ (IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [6U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1446,((1U & (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1447,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1448,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1449,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1450,((((~ (IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [7U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1451,((1U & (IData)((0xffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1452,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1453,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1454,((1U & (~ (IData)((0xffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1455,((((~ (IData)((0xffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [8U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1456,((1U & (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1457,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1458,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1459,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1460,((((~ (IData)((0x7fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [9U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1461,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 3U)))));
        bufp->chgBit(oldp+1462,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 2U)))));
        bufp->chgCData(oldp+1463,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                 >> 3U)))),3);
        bufp->chgQData(oldp+1464,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                   << 4U)),64);
        bufp->chgQData(oldp+1466,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+1468,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+1469,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+1470,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+1471,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+1472,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U)))));
        bufp->chgBit(oldp+1473,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+1474,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+1475,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1476,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1477,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1478,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1479,((((~ (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1480,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1481,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1482,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1483,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1484,((((~ (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1485,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1486,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1487,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1488,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1489,((((~ (IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1490,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1491,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1492,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1493,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1494,((((~ (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1495,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1496,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1497,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1498,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1499,((((~ (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1500,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1501,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1502,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1503,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1504,((((~ (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1505,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1506,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1507,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1508,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1509,((((~ (IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1510,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1511,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1512,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1513,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1514,((((~ (IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1515,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1516,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1517,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1518,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1519,((((~ (IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1520,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1521,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1522,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1523,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1524,((((~ (IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1525,((1U & (IData)((0x7ffffffffffffff8ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+1526,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1527,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1528,((1U & (~ (IData)((0x7ffffffffffffff8ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+1529,((((~ (IData)((0x7ffffffffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [1U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1530,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1531,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1532,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1533,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1534,((((~ (IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1535,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1536,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1537,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1538,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1539,((((~ (IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1540,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1541,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1542,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1543,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1544,((((~ (IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1545,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1546,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1547,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1548,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1549,((((~ (IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1550,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1551,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1552,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1553,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1554,((((~ (IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1555,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1556,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1557,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1558,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1559,((((~ (IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1560,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1561,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1562,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1563,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1564,((((~ (IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1565,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1566,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1567,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1568,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1569,((((~ (IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1570,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1571,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1572,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1573,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1574,((((~ (IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1575,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1576,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1577,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1578,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1579,((((~ (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1580,((1U & (IData)((0x3ffffffffffffffcULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+1581,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1582,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1583,((1U & (~ (IData)((0x3ffffffffffffffcULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+1584,((((~ (IData)((0x3ffffffffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [2U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1585,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1586,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1587,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1588,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1589,((((~ (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1590,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1591,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1592,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1593,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1594,((((~ (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1595,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1596,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1597,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1598,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1599,((((~ (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1600,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1601,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1602,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1603,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1604,((((~ (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1605,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1606,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1607,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1608,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1609,((((~ (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1610,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1611,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1612,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1613,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1614,((((~ (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1615,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1616,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1617,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1618,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1619,((((~ (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1620,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1621,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1622,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1623,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1624,((((~ (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1625,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1626,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1627,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1628,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1629,((((~ (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1630,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1631,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1632,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1633,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1634,((((~ (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1635,((1U & (IData)((0x1ffffffffffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1636,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1637,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1638,((1U & (~ (IData)((0x1ffffffffffffffeULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1639,((((~ (IData)((0x1ffffffffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [3U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1640,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1641,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1642,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1643,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1644,((((~ (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1645,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1646,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1647,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1648,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1649,((((~ (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1650,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1651,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1652,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1653,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1654,((((~ (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1655,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1656,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1657,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1658,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1659,((((~ (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1660,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1661,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1662,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1663,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1664,((((~ (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1665,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1666,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1667,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1668,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1669,((((~ (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1670,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1671,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1672,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1673,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1674,((((~ (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1675,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1676,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1677,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1678,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1679,((((~ (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1680,((1U & (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1681,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1682,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1683,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1684,((((~ (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1685,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1686,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1687,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1688,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1689,((((~ (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1690,((1U & (IData)((0xfffffffffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1691,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1692,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1693,((1U & (~ (IData)((0xfffffffffffffffULL 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1694,((((~ (IData)((0xfffffffffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [4U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1695,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1696,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1697,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1698,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1699,((((~ (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1700,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1701,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1702,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1703,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1704,((((~ (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1705,((1U & (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1706,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1707,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1708,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1709,((((~ (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1710,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1711,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1712,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1713,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1714,((((~ (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1715,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1716,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1717,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1718,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1719,((((~ (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1720,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1721,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1722,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1723,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1724,((((~ (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1725,((1U & (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1726,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1727,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1728,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1729,((((~ (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1730,((1U & (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1731,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1732,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1733,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1734,((((~ (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1735,((1U & (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1736,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1737,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1738,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1739,((((~ (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1740,((1U & (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1741,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1742,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1743,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1744,((((~ (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1745,((1U & (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1746,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1747,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1748,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1749,((((~ (IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [5U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1750,((1U & (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1751,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1752,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1753,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1754,((((~ (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1755,((1U & (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1756,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1757,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1758,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1759,((((~ (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1760,((1U & (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1761,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1762,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1763,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1764,((((~ (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1765,((1U & (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1766,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1767,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1768,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1769,((((~ (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU) 
                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x))) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1770,((1U & (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1771,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1772,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1773,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1774,((((~ (IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [6U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1775,((1U & (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1776,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1777,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1778,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1779,((((~ (IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [7U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1780,((1U & (IData)((0xffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1781,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1782,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1783,((1U & (~ (IData)((0xffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1784,((((~ (IData)((0xffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [8U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1785,((1U & (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1786,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1787,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1788,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1789,((((~ (IData)((0x7fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [9U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1790,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 5U)))));
        bufp->chgBit(oldp+1791,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 4U)))));
        bufp->chgCData(oldp+1792,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                 >> 5U)))),3);
        bufp->chgQData(oldp+1793,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                   << 6U)),64);
        bufp->chgQData(oldp+1795,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+1797,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+1799,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+1801,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U)))));
        bufp->chgBit(oldp+1802,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+1803,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 6U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 6U)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+1804,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1805,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1806,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1807,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1808,((((~ (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1809,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1810,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1811,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1812,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1813,((((~ (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1814,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1815,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1816,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1817,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1818,((((~ (IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1819,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1820,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1821,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1822,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1823,((((~ (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1824,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1825,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1826,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1827,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1828,((((~ (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1829,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1830,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1831,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1832,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1833,((((~ (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1834,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1835,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1836,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1837,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1838,((((~ (IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1839,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1840,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1841,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1842,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1843,((((~ (IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1844,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1845,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1846,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1847,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1848,((((~ (IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1849,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1850,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1851,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1852,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1853,((((~ (IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1854,((1U & (IData)((0x7fffffffffffffe0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+1855,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1856,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1857,((1U & (~ (IData)((0x7fffffffffffffe0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+1858,((((~ (IData)((0x7fffffffffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [1U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1859,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1860,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1861,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1862,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1863,((((~ (IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1864,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1865,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1866,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1867,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1868,((((~ (IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1869,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1870,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1871,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1872,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1873,((((~ (IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1874,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1875,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1876,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1877,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1878,((((~ (IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1879,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1880,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1881,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1882,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1883,((((~ (IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1884,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1885,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1886,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1887,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1888,((((~ (IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1889,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1890,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1891,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1892,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1893,((((~ (IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1894,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1895,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1896,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1897,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1898,((((~ (IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1899,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1900,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1901,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1902,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1903,((((~ (IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1904,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1905,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1906,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1907,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1908,((((~ (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1909,((1U & (IData)((0x3ffffffffffffff0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+1910,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1911,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1912,((1U & (~ (IData)((0x3ffffffffffffff0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+1913,((((~ (IData)((0x3ffffffffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [2U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1914,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1915,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1916,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1917,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1918,((((~ (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1919,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1920,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1921,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1922,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1923,((((~ (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1924,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1925,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1926,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1927,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1928,((((~ (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1929,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1930,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1931,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1932,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1933,((((~ (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1934,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1935,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1936,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1937,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1938,((((~ (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1939,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1940,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1941,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1942,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1943,((((~ (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1944,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1945,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1946,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1947,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1948,((((~ (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1949,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1950,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1951,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1952,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1953,((((~ (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1954,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1955,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1956,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1957,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1958,((((~ (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1959,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1960,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1961,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1962,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1963,((((~ (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1964,((1U & (IData)((0x1ffffffffffffff8ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+1965,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1966,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1967,((1U & (~ (IData)((0x1ffffffffffffff8ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+1968,((((~ (IData)((0x1ffffffffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [3U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1969,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1970,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1971,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1972,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1973,((((~ (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1974,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1975,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1976,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1977,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1978,((((~ (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1979,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1980,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1981,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1982,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1983,((((~ (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1984,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1985,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1986,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1987,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1988,((((~ (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1989,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1990,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1991,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1992,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1993,((((~ (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1994,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1995,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1996,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1997,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1998,((((~ (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1999,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2000,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+2001,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+2002,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+2003,((((~ (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
    }
}
