// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


VL_ATTR_COLD void Vsim_top___024root__trace_full_sub_1(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_full_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+5732,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_andi));
    bufp->fullBit(oldp+5733,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ori));
    bufp->fullBit(oldp+5734,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_xori));
    bufp->fullBit(oldp+5735,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mul_w));
    bufp->fullBit(oldp+5736,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mulh_w));
    bufp->fullBit(oldp+5737,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mulh_wu));
    bufp->fullBit(oldp+5738,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_div_w));
    bufp->fullBit(oldp+5739,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mod_w));
    bufp->fullBit(oldp+5740,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_div_wu));
    bufp->fullBit(oldp+5741,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mod_wu));
    bufp->fullBit(oldp+5742,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slli_w));
    bufp->fullBit(oldp+5743,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_srli_w));
    bufp->fullBit(oldp+5744,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_srai_w));
    bufp->fullBit(oldp+5745,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sll_w));
    bufp->fullBit(oldp+5746,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_srl_w));
    bufp->fullBit(oldp+5747,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sra_w));
    bufp->fullBit(oldp+5748,((0x14U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x1aU))));
    bufp->fullBit(oldp+5749,((0x16U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x1aU))));
    bufp->fullBit(oldp+5750,((0x17U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x1aU))));
    bufp->fullBit(oldp+5751,((0x18U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x1aU))));
    bufp->fullBit(oldp+5752,((0x19U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x1aU))));
    bufp->fullBit(oldp+5753,((0x1aU == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x1aU))));
    bufp->fullBit(oldp+5754,((0x1bU == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x1aU))));
    bufp->fullBit(oldp+5755,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w));
    bufp->fullBit(oldp+5756,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w));
    bufp->fullBit(oldp+5757,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b));
    bufp->fullBit(oldp+5758,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu));
    bufp->fullBit(oldp+5759,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h));
    bufp->fullBit(oldp+5760,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu));
    bufp->fullBit(oldp+5761,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w));
    bufp->fullBit(oldp+5762,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b));
    bufp->fullBit(oldp+5763,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h));
    bufp->fullBit(oldp+5764,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w));
    bufp->fullBit(oldp+5765,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_syscall));
    bufp->fullBit(oldp+5766,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_break));
    bufp->fullBit(oldp+5767,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_csrrd));
    bufp->fullBit(oldp+5768,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_csrwr));
    bufp->fullBit(oldp+5769,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ertn));
    bufp->fullBit(oldp+5770,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_cpucfg));
    bufp->fullBit(oldp+5771,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w));
    bufp->fullBit(oldp+5772,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w));
    bufp->fullBit(oldp+5773,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_idle));
    bufp->fullBit(oldp+5774,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbsrch));
    bufp->fullBit(oldp+5775,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd));
    bufp->fullBit(oldp+5776,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr));
    bufp->fullBit(oldp+5777,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill));
    bufp->fullBit(oldp+5778,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb));
    bufp->fullBit(oldp+5779,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_cacop));
    bufp->fullBit(oldp+5780,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid_cacop));
    bufp->fullBit(oldp+5781,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_preld));
    bufp->fullBit(oldp+5782,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_dbar));
    bufp->fullBit(oldp+5783,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar));
    bufp->fullBit(oldp+5784,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_nop));
    bufp->fullBit(oldp+5785,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__lacc_req));
    bufp->fullBit(oldp+5786,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__need_ui5));
    bufp->fullBit(oldp+5787,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_addi_w) 
                              | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b) 
                                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h) 
                                    | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w) 
                                       | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b) 
                                          | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                             | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                                   | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                                      | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slti) 
                                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sltui) 
                                                            | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h1d0e0636__0))))))))))))));
    bufp->fullBit(oldp+5788,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_andi) 
                              | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ori) 
                                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_xori) 
                                    | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__lacc_req))))));
    bufp->fullBit(oldp+5789,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w) 
                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w))));
    bufp->fullBit(oldp+5790,(((0x13U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU)) 
                              | ((0x16U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)) 
                                 | ((0x17U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0x1aU)) 
                                    | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h38353e9a__0))))));
    bufp->fullBit(oldp+5791,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_lu12i_w) 
                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddu12i))));
    bufp->fullBit(oldp+5792,(((0x14U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU)) 
                              | (0x15U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)))));
    bufp->fullIData(oldp+5793,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata1),32);
    bufp->fullCData(oldp+5794,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_raddr2),5);
    bufp->fullIData(oldp+5795,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata2),32);
    bufp->fullBit(oldp+5796,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__pipeline_no_empty));
    bufp->fullBit(oldp+5797,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_dbar) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__pipeline_no_empty))));
    bufp->fullBit(oldp+5798,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__pipeline_no_empty))));
    bufp->fullBit(oldp+5799,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_enable));
    bufp->fullCData(oldp+5800,((0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])),5);
    bufp->fullIData(oldp+5801,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data),32);
    bufp->fullBit(oldp+5802,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__excp));
    bufp->fullSData(oldp+5803,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__excp_ipe) 
                                 << 8U) | ((0x80U & 
                                            ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid)) 
                                             << 7U)) 
                                           | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_break) 
                                               << 6U) 
                                              | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_syscall) 
                                                  << 5U) 
                                                 | ((0x1eU 
                                                     & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__has_int))))))),9);
    bufp->fullBit(oldp+5804,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid));
    bufp->fullBit(oldp+5805,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid)))));
    bufp->fullBit(oldp+5806,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__excp_ipe));
    bufp->fullBit(oldp+5807,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr) 
                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill) 
                                  | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd) 
                                     | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb) 
                                        | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar))))) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_valid))));
    bufp->fullBit(oldp+5808,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__excp));
    bufp->fullBit(oldp+5809,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6983a416__0) 
                              | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid_cacop) 
                                  & (2U != (3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 3U)))) 
                                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbsrch) 
                                    | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd) 
                                       | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr) 
                                          | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill) 
                                             | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb) 
                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ertn) 
                                                   | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_idle)))))))))));
    bufp->fullIData(oldp+5810,((((IData)((0x1ffffffffULL 
                                          & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64)) 
                                | (((IData)((0x1ffffffffULL 
                                             & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                    & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                               >> 0x20U))) 
                                   | ((IData)((0x1ffffffffULL 
                                               & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))))) 
                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid)))),32);
    bufp->fullBit(oldp+5811,((1U & (IData)(((((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                              >> 0x20U) 
                                             & (1ULL 
                                                | ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64)) 
                                                   >> 0x20U))) 
                                            | ((((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                 >> 0x20U) 
                                                & (1ULL 
                                                   | ((QData)((IData)(
                                                                      (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                                                       >> 0x20U))) 
                                                      >> 0x20U))) 
                                               | (((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))) 
                                                   >> 0x20U) 
                                                  & (1ULL 
                                                     | ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid)) 
                                                        >> 0x20U)))))))));
    bufp->fullBit(oldp+5812,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__branch_slot_cancel));
    bufp->fullBit(oldp+5813,(((((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                 >> 0x1eU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                              >> 2U)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid)) 
                              | (((IData)((0U != (0x8800U 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U]))) 
                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_valid)) 
                                 | ((IData)((0U != 
                                             (0x80200U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U]))) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ws_valid))))));
    bufp->fullBit(oldp+5814,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_need_reg_data) 
                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h1c4a3e54__0))));
    bufp->fullBit(oldp+5815,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_need_reg_data));
    bufp->fullBit(oldp+5816,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_to_btb));
    bufp->fullBit(oldp+5817,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_need_rj));
    bufp->fullBit(oldp+5818,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_need_rkd));
    bufp->fullCData(oldp+5819,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w) 
                                 << 5U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w) 
                                            << 4U) 
                                           | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                               << 3U) 
                                              | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b))))))),8);
    bufp->fullCData(oldp+5820,(((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__llbit) 
                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w)) 
                                 << 3U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                            << 2U) 
                                           | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                               << 1U) 
                                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b))))),8);
    bufp->fullBit(oldp+5821,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6983a416__0) 
                              & (0x1400U == (0xfffc00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
    bufp->fullIData(oldp+5822,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+5823,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+5824,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+5825,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+5826,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+5827,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+5828,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+5829,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+5830,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+5831,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+5832,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+5833,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+5834,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+5835,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+5836,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+5837,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+5838,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+5839,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+5840,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+5841,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+5842,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+5843,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+5844,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+5845,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+5846,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+5847,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+5848,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+5849,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+5850,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+5851,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+5852,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+5853,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+5854,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_valid));
    bufp->fullIData(oldp+5855,(((IData)(4U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_pc)),32);
    bufp->fullBit(oldp+5856,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_tlbr));
    bufp->fullBit(oldp+5857,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_pif));
    bufp->fullBit(oldp+5858,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_ppi));
    bufp->fullBit(oldp+5859,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp));
    bufp->fullBit(oldp+5860,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_num));
    bufp->fullCData(oldp+5861,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_ppi) 
                                 << 3U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_pif) 
                                            << 2U) 
                                           | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_tlbr) 
                                               << 1U) 
                                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_num))))),4);
    bufp->fullBit(oldp+5862,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_sign));
    bufp->fullIData(oldp+5863,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_rd_buff),32);
    bufp->fullBit(oldp+5864,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_buff_enable));
    bufp->fullBit(oldp+5865,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_en) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_taken)) 
                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_ha3d303c7__0))));
    bufp->fullBit(oldp+5866,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__idle_lock));
    bufp->fullBit(oldp+5867,(((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_state) 
                                  | (4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_state)))) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_tlb_excp_cancel_req))));
    bufp->fullIData(oldp+5868,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_ret_pc_t),32);
    bufp->fullCData(oldp+5869,((0x1fU & (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_en))) 
                                          & (IData)(
                                                    (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_buffer 
                                                     >> 0x20U))) 
                                         | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_index)))),5);
    bufp->fullBit(oldp+5870,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_ha3d303c7__0) 
                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_taken))));
    bufp->fullBit(oldp+5871,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_en) 
                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_en))));
    bufp->fullIData(oldp+5872,((((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__excp_tlbrefill))) 
                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbrentry) 
                                | ((- (IData)((1U & 
                                               (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__excp_tlbrefill))))) 
                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_eentry))),32);
    bufp->fullIData(oldp+5873,((((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ertn_flush))) 
                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_era) 
                                | ((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_h52ebff71__0))) 
                                   & ((IData)(4U) + 
                                      vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])))),32);
    bufp->fullIData(oldp+5874,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_buff_enable)
                                 ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_rd_buff
                                 : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rdata)),32);
    bufp->fullIData(oldp+5875,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_pc),32);
    bufp->fullQData(oldp+5876,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_buffer),38);
    bufp->fullBit(oldp+5878,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_en));
    bufp->fullIData(oldp+5879,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_buffer),32);
    bufp->fullBit(oldp+5880,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_state));
    bufp->fullIData(oldp+5881,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_buffer),32);
    bufp->fullCData(oldp+5882,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_state),3);
    bufp->fullWData(oldp+5883,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r),425);
    bufp->fullCData(oldp+5897,((0xfU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                        >> 7U))),4);
    bufp->fullCData(oldp+5898,((3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])),2);
    bufp->fullCData(oldp+5899,((3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 0xbU))),2);
    bufp->fullBit(oldp+5900,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 6U))));
    bufp->fullBit(oldp+5901,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 5U))));
    bufp->fullIData(oldp+5902,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]),32);
    bufp->fullIData(oldp+5903,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]),32);
    bufp->fullBit(oldp+5904,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 0xdU))));
    bufp->fullSData(oldp+5905,((0x3ffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                           << 2U) | 
                                          (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                           >> 0x1eU)))),10);
    bufp->fullBit(oldp+5906,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 0xeU))));
    bufp->fullIData(oldp+5907,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                 << 0x11U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                              >> 0xfU))),32);
    bufp->fullSData(oldp+5908,((0x3fffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                           >> 0xfU))),14);
    bufp->fullBit(oldp+5909,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+5910,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                    >> 8U))));
    bufp->fullBit(oldp+5911,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                    >> 9U))));
    bufp->fullBit(oldp+5912,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                    >> 0xaU))));
    bufp->fullBit(oldp+5913,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+5914,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+5915,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                    >> 0xcU))));
    bufp->fullBit(oldp+5916,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+5917,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+5918,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                    >> 0x10U))));
    bufp->fullSData(oldp+5919,((0x3ffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                          >> 0x11U))),10);
    bufp->fullIData(oldp+5920,((0x7ffffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                             << 5U) 
                                            | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                               >> 0x1bU)))),19);
    bufp->fullBit(oldp+5921,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+5922,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+5923,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+5924,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+5925,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+5926,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+5927,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+5928,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                    >> 0x15U))));
    bufp->fullBit(oldp+5929,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+5930,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                 << 9U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                           >> 0x17U))),32);
    bufp->fullBit(oldp+5931,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                    >> 0x17U))));
    bufp->fullQData(oldp+5932,((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[9U])) 
                                 << 0x29U) | (((QData)((IData)(
                                                               vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[8U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[7U])) 
                                                 >> 0x17U)))),64);
    bufp->fullIData(oldp+5934,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                 << 9U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                           >> 0x17U))),32);
    bufp->fullCData(oldp+5935,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+5936,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                                 << 0xcU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_index) 
                                              << 4U) 
                                             | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_offset)))),32);
    bufp->fullIData(oldp+5937,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU]),32);
    bufp->fullCData(oldp+5938,((0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU])),8);
    bufp->fullIData(oldp+5939,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                 << 0x18U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                                              >> 8U))),32);
    bufp->fullBit(oldp+5940,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                    >> 8U))));
    bufp->fullIData(oldp+5941,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xdU] 
                                 << 0x17U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                              >> 9U))),32);
    bufp->fullIData(oldp+5942,((((- (IData)((1U & (
                                                   (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
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
                                   | (((- (IData)((1U 
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
    bufp->fullIData(oldp+5943,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata),32);
    bufp->fullIData(oldp+5944,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__data_rd_buff),32);
    bufp->fullBit(oldp+5945,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__data_buff_enable));
    bufp->fullBit(oldp+5946,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__access_mem));
    bufp->fullCData(oldp+5947,((3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 3U))),2);
    bufp->fullBit(oldp+5948,((0U == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))));
    bufp->fullIData(oldp+5949,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                                 << 0xcU) | (0xfffU 
                                             & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                 << 9U) 
                                                | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                   >> 0x17U))))),32);
    bufp->fullSData(oldp+5950,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pil) 
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
    bufp->fullBit(oldp+5951,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp));
    bufp->fullBit(oldp+5952,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_tlbr));
    bufp->fullBit(oldp+5953,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pil));
    bufp->fullBit(oldp+5954,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pis));
    bufp->fullBit(oldp+5955,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pme));
    bufp->fullBit(oldp+5956,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_ppi));
    bufp->fullBit(oldp+5957,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__lladdr 
                              == ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                                   << 8U) | (0xffU 
                                             & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                 << 5U) 
                                                | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                   >> 0x1bU)))))));
    bufp->fullCData(oldp+5958,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded),8);
    bufp->fullSData(oldp+5959,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded),16);
    bufp->fullCData(oldp+5960,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_index),8);
    bufp->fullCData(oldp+5961,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_offset),4);
    bufp->fullIData(oldp+5962,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__dcache_miss_counter),32);
    bufp->fullIData(oldp+5963,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__icache_miss_counter),32);
    bufp->fullIData(oldp+5964,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__commit_inst_counter),32);
    bufp->fullIData(oldp+5965,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__br_inst_counter),32);
    bufp->fullIData(oldp+5966,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__mem_inst_counter),32);
    bufp->fullIData(oldp+5967,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__br_pre_counter),32);
    bufp->fullIData(oldp+5968,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__br_pre_error_counter),32);
    bufp->fullBit(oldp+5969,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__crmd_wen));
    bufp->fullBit(oldp+5970,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x100U == (0x3fff00U 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5971,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x400U == (0x3fff00U 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5972,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x500U == (0x3fff00U 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5973,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x600U == (0x3fff00U 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5974,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x700U == (0x3fff00U 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5975,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0xc00U == (0x3fff00U 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5976,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x1000U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5977,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbehi_wen));
    bufp->fullBit(oldp+5978,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x1200U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5979,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x1300U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5980,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x1800U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5981,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x1900U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5982,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x1a00U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5983,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x1b00U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5984,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x2000U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5985,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x3000U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5986,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x3100U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5987,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x3200U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5988,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x3300U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5989,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x4000U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5990,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tcfg_wen));
    bufp->fullBit(oldp+5991,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x4200U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5992,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x4300U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5993,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x4400U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5994,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x6000U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5995,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x8800U == (0x3fff00U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5996,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__DMW0_wen));
    bufp->fullBit(oldp+5997,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__DMW1_wen));
    bufp->fullBit(oldp+5998,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x10000U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullBit(oldp+5999,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                              & (0x10100U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
    bufp->fullIData(oldp+6000,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_crmd),32);
    bufp->fullIData(oldp+6001,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_prmd),32);
    bufp->fullIData(oldp+6002,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_ectl),32);
    bufp->fullIData(oldp+6003,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_estat),32);
    bufp->fullIData(oldp+6004,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_badv),32);
    bufp->fullIData(oldp+6005,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_asid),32);
    bufp->fullIData(oldp+6006,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpuid),32);
    bufp->fullIData(oldp+6007,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save0),32);
    bufp->fullIData(oldp+6008,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save1),32);
    bufp->fullIData(oldp+6009,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save2),32);
    bufp->fullIData(oldp+6010,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save3),32);
    bufp->fullIData(oldp+6011,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tcfg),32);
    bufp->fullIData(oldp+6012,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tval),32);
    bufp->fullIData(oldp+6013,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cntc),32);
    bufp->fullIData(oldp+6014,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_ticlr),32);
    bufp->fullIData(oldp+6015,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_llbctl),32);
    bufp->fullIData(oldp+6016,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_dmw0),32);
    bufp->fullIData(oldp+6017,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_dmw1),32);
    bufp->fullIData(oldp+6018,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdl),32);
    bufp->fullIData(oldp+6019,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdh),32);
    bufp->fullIData(oldp+6020,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_brk),32);
    bufp->fullIData(oldp+6021,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_disable_cache),32);
    bufp->fullIData(oldp+6022,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg1),32);
    bufp->fullIData(oldp+6023,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg2),32);
    bufp->fullIData(oldp+6024,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg10),32);
    bufp->fullIData(oldp+6025,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg11),32);
    bufp->fullIData(oldp+6026,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg12),32);
    bufp->fullIData(oldp+6027,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg13),32);
    bufp->fullIData(oldp+6028,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_badv 
                                 >> 0x1fU) ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdh
                                 : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdl)),32);
    bufp->fullBit(oldp+6029,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__timer_en));
    bufp->fullQData(oldp+6030,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__timer_64),64);
    bufp->fullBit(oldp+6032,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbrd_valid_wr_en));
    bufp->fullBit(oldp+6033,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbrd_invalid_wr_en));
    bufp->fullBit(oldp+6034,((0x3fU == (0x3fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_estat 
                                                 >> 0x10U)))));
    bufp->fullBit(oldp+6035,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__no_forward));
    bufp->fullQData(oldp+6036,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS),33);
    bufp->fullQData(oldp+6038,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR),33);
    bufp->fullQData(oldp+6040,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_r),33);
    bufp->fullCData(oldp+6042,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count),8);
    bufp->fullQData(oldp+6043,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_d),33);
    bufp->fullQData(oldp+6045,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__result_r),33);
    bufp->fullQData(oldp+6047,((QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
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
    bufp->fullQData(oldp+6049,((QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
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
    bufp->fullBit(oldp+6051,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__div_signed_buffer));
    bufp->fullBit(oldp+6052,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__x_31_buffer));
    bufp->fullBit(oldp+6053,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer));
    bufp->fullBit(oldp+6054,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed));
    bufp->fullBit(oldp+6055,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31));
    bufp->fullBit(oldp+6056,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete)
                                     ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer)
                                     : (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                        >> 0x1fU)))));
    bufp->fullBit(oldp+6057,((0xf0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count))));
    bufp->fullBit(oldp+6058,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete));
    bufp->fullQData(oldp+6059,((0x1ffffffffULL & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                   ? 
                                                  (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete)
                                                         ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer)
                                                         : 
                                                        (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                         >> 0x1fU))))
                                                    ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS
                                                    : 
                                                   (~ 
                                                    (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS 
                                                     - 1ULL)))
                                                   : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS))),33);
    bufp->fullQData(oldp+6061,((0x1ffffffffULL & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                   ? 
                                                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31)
                                                    ? 
                                                   (~ 
                                                    (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR 
                                                     - 1ULL))
                                                    : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR)
                                                   : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR))),33);
    bufp->fullBit(oldp+6063,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__error_reg));
    bufp->fullBit(oldp+6064,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_full_reg));
    bufp->fullBit(oldp+6065,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_overflow_reg));
    bufp->fullCData(oldp+6066,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_count_reg),8);
    bufp->fullCData(oldp+6067,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__error_code_reg),8);
    bufp->fullBit(oldp+6068,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_raw_mode_reg));
    bufp->fullQData(oldp+6069,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_valid_bits),64);
    bufp->fullBit(oldp+6071,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd));
    bufp->fullBit(oldp+6072,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__status_cmd));
    bufp->fullBit(oldp+6073,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_cmd));
    bufp->fullBit(oldp+6074,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__ub_write_cmd));
    bufp->fullBit(oldp+6075,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__set_mode_cmd));
    bufp->fullBit(oldp+6076,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__dma_load_cmd));
    bufp->fullBit(oldp+6077,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__clear_cmd));
    bufp->fullBit(oldp+6078,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd));
    bufp->fullCData(oldp+6079,((0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])),6);
    bufp->fullBit(oldp+6080,((0x20U <= (0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))));
    bufp->fullBit(oldp+6081,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_pair_valid));
    bufp->fullIData(oldp+6082,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__i),32);
    bufp->fullIData(oldp+6083,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__lane),32);
    bufp->fullCData(oldp+6084,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__write_index),8);
    bufp->fullCData(oldp+6085,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_class),4);
    bufp->fullQData(oldp+6086,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX),64);
    bufp->fullQData(oldp+6088,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY),33);
    bufp->fullIData(oldp+6090,(((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x) 
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
    bufp->fullQData(oldp+6091,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0]),64);
    bufp->fullQData(oldp+6093,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[1]),64);
    bufp->fullQData(oldp+6095,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[2]),64);
    bufp->fullQData(oldp+6097,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[3]),64);
    bufp->fullQData(oldp+6099,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[4]),64);
    bufp->fullQData(oldp+6101,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[5]),64);
    bufp->fullQData(oldp+6103,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[6]),64);
    bufp->fullQData(oldp+6105,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[7]),64);
    bufp->fullQData(oldp+6107,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[8]),64);
    bufp->fullQData(oldp+6109,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[9]),64);
    bufp->fullQData(oldp+6111,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[10]),64);
    bufp->fullQData(oldp+6113,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[11]),64);
    bufp->fullQData(oldp+6115,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[12]),64);
    bufp->fullQData(oldp+6117,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[13]),64);
    bufp->fullQData(oldp+6119,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[14]),64);
    bufp->fullQData(oldp+6121,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[15]),64);
    bufp->fullQData(oldp+6123,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[16]),64);
    bufp->fullIData(oldp+6125,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry),17);
    bufp->fullQData(oldp+6126,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[0]),64);
    bufp->fullQData(oldp+6128,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[1]),64);
    bufp->fullQData(oldp+6130,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[2]),64);
    bufp->fullQData(oldp+6132,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[3]),64);
    bufp->fullQData(oldp+6134,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[4]),64);
    bufp->fullQData(oldp+6136,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[5]),64);
    bufp->fullQData(oldp+6138,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[6]),64);
    bufp->fullQData(oldp+6140,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[7]),64);
    bufp->fullQData(oldp+6142,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[8]),64);
    bufp->fullQData(oldp+6144,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[9]),64);
    bufp->fullQData(oldp+6146,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[10]),64);
    bufp->fullQData(oldp+6148,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[11]),64);
    bufp->fullQData(oldp+6150,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[12]),64);
    bufp->fullQData(oldp+6152,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[13]),64);
    bufp->fullQData(oldp+6154,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[14]),64);
    bufp->fullQData(oldp+6156,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[15]),64);
    bufp->fullQData(oldp+6158,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[16]),64);
    bufp->fullIData(oldp+6160,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__p),32);
    bufp->fullQData(oldp+6161,((((QData)((IData)((1U 
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
    bufp->fullQData(oldp+6163,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SOut),64);
    bufp->fullWData(oldp+6165,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r),493);
    bufp->fullBit(oldp+6181,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                    >> 5U))));
    bufp->fullBit(oldp+6182,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                    >> 6U))));
    bufp->fullSData(oldp+6183,((0xffffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                            << 9U) 
                                           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                              >> 0x17U)))),16);
    bufp->fullBit(oldp+6184,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                    >> 7U))));
    bufp->fullBit(oldp+6185,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                    >> 0x16U))));
    bufp->fullBit(oldp+6186,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                    >> 7U))));
    bufp->fullBit(oldp+6187,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                    >> 8U))));
    bufp->fullIData(oldp+6188,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                 << 0x17U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                              >> 9U))),32);
    bufp->fullBit(oldp+6189,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                    >> 9U))));
    bufp->fullBit(oldp+6190,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+6191,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+6192,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+6193,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+6194,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+6195,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+6196,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+6197,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+6198,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                    >> 0x15U))));
    bufp->fullBit(oldp+6199,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                    >> 0x16U))));
    bufp->fullBit(oldp+6200,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+6201,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+6202,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+6203,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
                                 << 6U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                           >> 0x1aU))),32);
    bufp->fullBit(oldp+6204,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+6205,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                    >> 0x1bU))));
    bufp->fullQData(oldp+6206,((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU])) 
                                 << 0x25U) | (((QData)((IData)(
                                                               vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[8U])) 
                                                 >> 0x1bU)))),64);
    bufp->fullCData(oldp+6208,((0xffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                          << 4U) | 
                                         (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                          >> 0x1cU)))),8);
    bufp->fullIData(oldp+6209,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                 << 0x1cU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                              >> 4U))),32);
    bufp->fullIData(oldp+6210,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                 << 0x1cU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                              >> 4U))),32);
    bufp->fullCData(oldp+6211,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                         >> 4U))),8);
    bufp->fullIData(oldp+6212,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                 << 0x14U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                              >> 0xcU))),32);
    bufp->fullBit(oldp+6213,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                    >> 0xcU))));
    bufp->fullIData(oldp+6214,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xfU] 
                                 << 0x13U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                              >> 0xdU))),32);
    bufp->fullSData(oldp+6215,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [0U][0U]),16);
    bufp->fullSData(oldp+6216,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [0U][1U]),16);
    bufp->fullSData(oldp+6217,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [0U][2U]),16);
    bufp->fullSData(oldp+6218,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [0U][3U]),16);
    bufp->fullSData(oldp+6219,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [0U][4U]),16);
    bufp->fullSData(oldp+6220,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [0U][5U]),16);
    bufp->fullSData(oldp+6221,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [0U][6U]),16);
    bufp->fullSData(oldp+6222,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [0U][7U]),16);
    bufp->fullSData(oldp+6223,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [1U][0U]),16);
    bufp->fullSData(oldp+6224,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [1U][1U]),16);
    bufp->fullSData(oldp+6225,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [1U][2U]),16);
    bufp->fullSData(oldp+6226,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [1U][3U]),16);
    bufp->fullSData(oldp+6227,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [1U][4U]),16);
    bufp->fullSData(oldp+6228,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [1U][5U]),16);
    bufp->fullSData(oldp+6229,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [1U][6U]),16);
    bufp->fullSData(oldp+6230,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [1U][7U]),16);
    bufp->fullSData(oldp+6231,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [2U][0U]),16);
    bufp->fullSData(oldp+6232,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [2U][1U]),16);
    bufp->fullSData(oldp+6233,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [2U][2U]),16);
    bufp->fullSData(oldp+6234,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [2U][3U]),16);
    bufp->fullSData(oldp+6235,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [2U][4U]),16);
    bufp->fullSData(oldp+6236,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [2U][5U]),16);
    bufp->fullSData(oldp+6237,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [2U][6U]),16);
    bufp->fullSData(oldp+6238,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                               [2U][7U]),16);
    bufp->fullSData(oldp+6239,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6240,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6241,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6242,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6243,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6244,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6245,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6246,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6247,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6248,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6249,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6250,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6251,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6252,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6253,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6254,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6255,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6256,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6257,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6258,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6259,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6260,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6261,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
    bufp->fullSData(oldp+6262,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
    bufp->fullQData(oldp+6263,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[0]),57);
    bufp->fullQData(oldp+6265,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[1]),57);
    bufp->fullQData(oldp+6267,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[2]),57);
    bufp->fullQData(oldp+6269,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[3]),57);
    bufp->fullQData(oldp+6271,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[0]),57);
    bufp->fullQData(oldp+6273,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[1]),57);
    bufp->fullQData(oldp+6275,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[2]),57);
    bufp->fullQData(oldp+6277,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[3]),57);
    bufp->fullCData(oldp+6279,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rData),2);
    bufp->fullCData(oldp+6280,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rData),3);
    bufp->fullQData(oldp+6281,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[0]),37);
    bufp->fullQData(oldp+6283,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[1]),37);
    bufp->fullQData(oldp+6285,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[2]),37);
    bufp->fullQData(oldp+6287,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[3]),37);
    bufp->fullQData(oldp+6289,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[4]),37);
    bufp->fullQData(oldp+6291,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[5]),37);
    bufp->fullQData(oldp+6293,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[6]),37);
    bufp->fullQData(oldp+6295,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[7]),37);
    bufp->fullCData(oldp+6297,((0xfU & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT___zz_ram_port1))),4);
    bufp->fullQData(oldp+6298,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[0]),57);
    bufp->fullQData(oldp+6300,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[1]),57);
    bufp->fullQData(oldp+6302,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[2]),57);
    bufp->fullQData(oldp+6304,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[3]),57);
    bufp->fullQData(oldp+6306,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[0]),57);
    bufp->fullQData(oldp+6308,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[1]),57);
    bufp->fullQData(oldp+6310,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[2]),57);
    bufp->fullQData(oldp+6312,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[3]),57);
    bufp->fullCData(oldp+6314,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rData),2);
    bufp->fullCData(oldp+6315,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rData),3);
    bufp->fullQData(oldp+6316,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[0]),37);
    bufp->fullQData(oldp+6318,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[1]),37);
    bufp->fullQData(oldp+6320,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[2]),37);
    bufp->fullQData(oldp+6322,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[3]),37);
    bufp->fullQData(oldp+6324,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[4]),37);
    bufp->fullQData(oldp+6326,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[5]),37);
    bufp->fullQData(oldp+6328,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[6]),37);
    bufp->fullQData(oldp+6330,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[7]),37);
    bufp->fullCData(oldp+6332,((6U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY) 
                                      << 1U))),3);
    bufp->fullQData(oldp+6333,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.OutX),64);
    bufp->fullBit(oldp+6335,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0) 
                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx))));
    bufp->fullBit(oldp+6336,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx));
    bufp->fullBit(oldp+6337,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0));
    bufp->fullBit(oldp+6338,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0));
    bufp->fullBit(oldp+6339,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))));
    bufp->fullBit(oldp+6340,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+6341,((((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0)))));
    bufp->fullBit(oldp+6342,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+6343,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+6344,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+6345,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+6346,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xaU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xaU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xaU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6347,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+6348,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+6349,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+6350,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+6351,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xbU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xbU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xbU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6352,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+6353,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+6354,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+6355,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+6356,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xcU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xcU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xcU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6357,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+6358,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+6359,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+6360,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+6361,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xdU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xdU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xdU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6362,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+6363,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+6364,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+6365,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+6366,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xeU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xeU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xeU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6367,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+6368,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+6369,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+6370,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+6371,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xfU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0xfU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xfU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6372,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+6373,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+6374,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+6375,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+6376,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x10U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x10U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x10U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6377,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+6378,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+6379,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+6380,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+6381,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x11U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x11U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x11U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6382,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+6383,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+6384,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+6385,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+6386,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x12U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x12U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x12U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6387,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+6388,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+6389,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+6390,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+6391,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x13U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x13U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x13U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6392,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 1U)))));
    bufp->fullBit(oldp+6393,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+6394,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+6395,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+6396,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 1U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 1U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [1U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6397,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+6398,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+6399,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+6400,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+6401,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x14U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x14U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x14U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6402,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+6403,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+6404,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+6405,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+6406,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x15U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x15U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x15U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6407,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+6408,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+6409,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+6410,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+6411,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x16U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x16U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x16U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6412,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+6413,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+6414,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+6415,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+6416,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x17U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x17U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x17U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6417,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+6418,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+6419,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+6420,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+6421,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x18U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x18U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x18U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6422,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+6423,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+6424,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+6425,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+6426,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x19U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x19U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x19U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6427,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+6428,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+6429,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+6430,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+6431,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1aU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1aU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1aU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6432,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+6433,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+6434,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+6435,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+6436,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1bU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1bU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1bU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6437,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+6438,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+6439,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+6440,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+6441,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1cU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1cU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1cU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6442,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+6443,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+6444,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+6445,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+6446,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1dU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1dU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1dU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6447,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 2U)))));
    bufp->fullBit(oldp+6448,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+6449,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+6450,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+6451,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 2U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 2U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [2U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6452,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+6453,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+6454,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+6455,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+6456,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1eU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1eU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1eU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6457,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+6458,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+6459,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+6460,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+6461,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1fU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x1fU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1fU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6462,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+6463,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+6464,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+6465,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+6466,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x20U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x20U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x20U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6467,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+6468,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+6469,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+6470,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+6471,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x21U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x21U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x21U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6472,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+6473,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+6474,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+6475,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+6476,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x22U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x22U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x22U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6477,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+6478,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+6479,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+6480,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+6481,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x23U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x23U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x23U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6482,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+6483,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+6484,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+6485,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+6486,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x24U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x24U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x24U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6487,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+6488,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+6489,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+6490,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+6491,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x25U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x25U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x25U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6492,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+6493,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+6494,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+6495,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+6496,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x26U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x26U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x26U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6497,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+6498,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+6499,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+6500,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+6501,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x27U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x27U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x27U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6502,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 3U)))));
    bufp->fullBit(oldp+6503,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+6504,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+6505,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+6506,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 3U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 3U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [3U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6507,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+6508,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+6509,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+6510,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+6511,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x28U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x28U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x28U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6512,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+6513,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+6514,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+6515,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+6516,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x29U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x29U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x29U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6517,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+6518,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+6519,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+6520,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+6521,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2aU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2aU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2aU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6522,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+6523,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+6524,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+6525,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+6526,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2bU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2bU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2bU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6527,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+6528,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+6529,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+6530,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+6531,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2cU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2cU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2cU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6532,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+6533,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+6534,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+6535,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+6536,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2dU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2dU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2dU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6537,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+6538,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+6539,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+6540,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+6541,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2eU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2eU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2eU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6542,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+6543,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+6544,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+6545,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+6546,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2fU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2fU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2fU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6547,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+6548,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+6549,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+6550,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+6551,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x30U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x30U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x30U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6552,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+6553,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+6554,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+6555,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+6556,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x31U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x31U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x31U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6557,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 4U)))));
    bufp->fullBit(oldp+6558,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+6559,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+6560,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+6561,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 4U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 4U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [4U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6562,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+6563,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+6564,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+6565,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+6566,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x32U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x32U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x32U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6567,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+6568,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+6569,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+6570,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+6571,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x33U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x33U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x33U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6572,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+6573,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+6574,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+6575,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+6576,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x34U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x34U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x34U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6577,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+6578,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+6579,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+6580,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+6581,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x35U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x35U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x35U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6582,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+6583,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+6584,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+6585,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+6586,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x36U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x36U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6587,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+6588,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+6589,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+6590,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+6591,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x37U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x37U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x37U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6592,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+6593,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+6594,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+6595,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+6596,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x38U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x38U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x38U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6597,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+6598,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+6599,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+6600,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+6601,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x39U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x39U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x39U] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6602,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+6603,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+6604,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+6605,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+6606,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3aU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3aU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3aU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6607,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+6608,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+6609,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+6610,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+6611,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3bU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3bU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3bU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6612,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 5U)))));
    bufp->fullBit(oldp+6613,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+6614,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+6615,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+6616,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 5U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 5U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [5U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6617,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+6618,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+6619,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+6620,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+6621,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3cU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3cU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3cU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6622,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+6623,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+6624,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+6625,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+6626,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3dU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3dU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3dU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6627,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+6628,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+6629,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+6630,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+6631,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3eU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3eU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3eU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6632,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+6633,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+6634,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+6635,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x3fU))))));
    bufp->fullBit(oldp+6636,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3fU))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x3fU)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3fU] >> 1U) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6637,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 6U)))));
    bufp->fullBit(oldp+6638,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+6639,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+6640,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+6641,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 6U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 6U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [6U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6642,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 7U)))));
    bufp->fullBit(oldp+6643,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+6644,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+6645,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+6646,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 7U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 7U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [7U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6647,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 8U)))));
    bufp->fullBit(oldp+6648,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+6649,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+6650,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+6651,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 8U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 8U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [8U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6652,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 9U)))));
    bufp->fullBit(oldp+6653,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+6654,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+6655,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+6656,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 9U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 9U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                 | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [9U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+6657,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                            >> 1U)))));
    bufp->fullBit(oldp+6658,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY))));
    bufp->fullCData(oldp+6659,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y),3);
    bufp->fullQData(oldp+6660,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                << 0x20U)),64);
    bufp->fullQData(oldp+6662,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.OutX),64);
    bufp->fullBit(oldp+6664,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x) 
                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx))));
    bufp->fullBit(oldp+6665,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx));
    bufp->fullBit(oldp+6666,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x));
    bufp->fullBit(oldp+6667,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x));
    bufp->fullBit(oldp+6668,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x20U)))));
    bufp->fullBit(oldp+6669,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x20U))))));
    bufp->fullBit(oldp+6670,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 0x20U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 0x20U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)))));
    bufp->fullBit(oldp+6671,((1U & (IData)((0x3fffffffc00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x16U))))));
    bufp->fullBit(oldp+6672,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+6673,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+6674,((1U & (~ (IData)((0x3fffffffc00000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x16U)))))));
    bufp->fullBit(oldp+6675,((((~ (IData)((0x3fffffffc00000ULL 
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
    bufp->fullBit(oldp+6676,((1U & (IData)((0x1fffffffe00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x15U))))));
    bufp->fullBit(oldp+6677,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+6678,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+6679,((1U & (~ (IData)((0x1fffffffe00000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x15U)))))));
    bufp->fullBit(oldp+6680,((((~ (IData)((0x1fffffffe00000ULL 
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
    bufp->fullBit(oldp+6681,((1U & (IData)((0xffffffff00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x14U))))));
    bufp->fullBit(oldp+6682,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+6683,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+6684,((1U & (~ (IData)((0xffffffff00000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x14U)))))));
    bufp->fullBit(oldp+6685,((((~ (IData)((0xffffffff00000ULL 
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
    bufp->fullBit(oldp+6686,((1U & (IData)((0x7fffffff80000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x13U))))));
    bufp->fullBit(oldp+6687,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+6688,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+6689,((1U & (~ (IData)((0x7fffffff80000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x13U)))))));
    bufp->fullBit(oldp+6690,((((~ (IData)((0x7fffffff80000ULL 
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
    bufp->fullBit(oldp+6691,((1U & (IData)((0x3fffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U))))));
    bufp->fullBit(oldp+6692,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+6693,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+6694,((1U & (~ (IData)((0x3fffffffc0000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x12U)))))));
    bufp->fullBit(oldp+6695,((((~ (IData)((0x3fffffffc0000ULL 
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
    bufp->fullBit(oldp+6696,((1U & (IData)((0x1fffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U))))));
    bufp->fullBit(oldp+6697,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+6698,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+6699,((1U & (~ (IData)((0x1fffffffe0000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x11U)))))));
    bufp->fullBit(oldp+6700,((((~ (IData)((0x1fffffffe0000ULL 
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
    bufp->fullBit(oldp+6701,((1U & (IData)((0xffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U))))));
    bufp->fullBit(oldp+6702,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+6703,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+6704,((1U & (~ (IData)((0xffffffff0000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x10U)))))));
    bufp->fullBit(oldp+6705,((((~ (IData)((0xffffffff0000ULL 
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
    bufp->fullBit(oldp+6706,((1U & (IData)((0x7fffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU))))));
    bufp->fullBit(oldp+6707,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+6708,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+6709,((1U & (~ (IData)((0x7fffffff8000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xfU)))))));
    bufp->fullBit(oldp+6710,((((~ (IData)((0x7fffffff8000ULL 
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
    bufp->fullBit(oldp+6711,((1U & (IData)((0x3fffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU))))));
    bufp->fullBit(oldp+6712,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+6713,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+6714,((1U & (~ (IData)((0x3fffffffc000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xeU)))))));
    bufp->fullBit(oldp+6715,((((~ (IData)((0x3fffffffc000ULL 
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
    bufp->fullBit(oldp+6716,((1U & (IData)((0x1fffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU))))));
    bufp->fullBit(oldp+6717,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+6718,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+6719,((1U & (~ (IData)((0x1fffffffe000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xdU)))))));
    bufp->fullBit(oldp+6720,((((~ (IData)((0x1fffffffe000ULL 
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
    bufp->fullBit(oldp+6721,((1U & (IData)((0x7fffffff80000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1fU))))));
    bufp->fullBit(oldp+6722,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+6723,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+6724,((1U & (~ (IData)((0x7fffffff80000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1fU)))))));
    bufp->fullBit(oldp+6725,((((~ (IData)((0x7fffffff80000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1fU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0x7fffffff80000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1fU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [1U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6726,((1U & (IData)((0xffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU))))));
    bufp->fullBit(oldp+6727,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+6728,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+6729,((1U & (~ (IData)((0xffffffff000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xcU)))))));
    bufp->fullBit(oldp+6730,((((~ (IData)((0xffffffff000ULL 
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
    bufp->fullBit(oldp+6731,((1U & (IData)((0x7fffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU))))));
    bufp->fullBit(oldp+6732,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+6733,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+6734,((1U & (~ (IData)((0x7fffffff800ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xbU)))))));
    bufp->fullBit(oldp+6735,((((~ (IData)((0x7fffffff800ULL 
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
    bufp->fullBit(oldp+6736,((1U & (IData)((0x3fffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU))))));
    bufp->fullBit(oldp+6737,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+6738,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+6739,((1U & (~ (IData)((0x3fffffffc00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xaU)))))));
    bufp->fullBit(oldp+6740,((((~ (IData)((0x3fffffffc00ULL 
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
    bufp->fullBit(oldp+6741,((1U & (IData)((0x1fffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U))))));
    bufp->fullBit(oldp+6742,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+6743,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+6744,((1U & (~ (IData)((0x1fffffffe00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 9U)))))));
    bufp->fullBit(oldp+6745,((((~ (IData)((0x1fffffffe00ULL 
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
    bufp->fullBit(oldp+6746,((1U & (IData)((0xffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U))))));
    bufp->fullBit(oldp+6747,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+6748,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+6749,((1U & (~ (IData)((0xffffffff00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 8U)))))));
    bufp->fullBit(oldp+6750,((((~ (IData)((0xffffffff00ULL 
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
    bufp->fullBit(oldp+6751,((1U & (IData)((0x7fffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U))))));
    bufp->fullBit(oldp+6752,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+6753,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+6754,((1U & (~ (IData)((0x7fffffff80ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 7U)))))));
    bufp->fullBit(oldp+6755,((((~ (IData)((0x7fffffff80ULL 
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
    bufp->fullBit(oldp+6756,((1U & (IData)((0x3fffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U))))));
    bufp->fullBit(oldp+6757,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+6758,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+6759,((1U & (~ (IData)((0x3fffffffc0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 6U)))))));
    bufp->fullBit(oldp+6760,((((~ (IData)((0x3fffffffc0ULL 
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
    bufp->fullBit(oldp+6761,((1U & (IData)((0x1fffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U))))));
    bufp->fullBit(oldp+6762,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+6763,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+6764,((1U & (~ (IData)((0x1fffffffe0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 5U)))))));
    bufp->fullBit(oldp+6765,((((~ (IData)((0x1fffffffe0ULL 
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
    bufp->fullBit(oldp+6766,((1U & (IData)((0xffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+6767,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+6768,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+6769,((1U & (~ (IData)((0xffffffff0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U)))))));
    bufp->fullBit(oldp+6770,((((~ (IData)((0xffffffff0ULL 
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
    bufp->fullBit(oldp+6771,((1U & (IData)((0x7fffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+6772,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+6773,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+6774,((1U & (~ (IData)((0x7fffffff8ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 3U)))))));
    bufp->fullBit(oldp+6775,((((~ (IData)((0x7fffffff8ULL 
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
    bufp->fullBit(oldp+6776,((1U & (IData)((0x3fffffffc0000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1eU))))));
    bufp->fullBit(oldp+6777,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+6778,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+6779,((1U & (~ (IData)((0x3fffffffc0000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1eU)))))));
    bufp->fullBit(oldp+6780,((((~ (IData)((0x3fffffffc0000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1eU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0x3fffffffc0000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1eU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [2U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6781,((1U & (IData)((0x3fffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+6782,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+6783,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+6784,((1U & (~ (IData)((0x3fffffffcULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 2U)))))));
    bufp->fullBit(oldp+6785,((((~ (IData)((0x3fffffffcULL 
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
    bufp->fullBit(oldp+6786,((1U & (IData)((0x1fffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+6787,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+6788,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+6789,((1U & (~ (IData)((0x1fffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+6790,((((~ (IData)((0x1fffffffeULL 
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
    bufp->fullBit(oldp+6791,((1U & (IData)((0xffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+6792,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+6793,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+6794,((1U & (~ (IData)((0xffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+6795,((((~ (IData)((0xffffffffULL 
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
    bufp->fullBit(oldp+6796,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+6797,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+6798,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+6799,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+6800,((((~ (IData)((0x7fffffffULL 
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
    bufp->fullBit(oldp+6801,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+6802,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+6803,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+6804,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+6805,((((~ (IData)((0x3fffffffULL 
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
    bufp->fullBit(oldp+6806,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+6807,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+6808,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+6809,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+6810,((((~ (IData)((0x1fffffffULL 
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
    bufp->fullBit(oldp+6811,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+6812,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+6813,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+6814,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+6815,((((~ (IData)((0xfffffffULL 
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
    bufp->fullBit(oldp+6816,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+6817,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+6818,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+6819,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+6820,((((~ (IData)((0x7ffffffULL 
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
    bufp->fullBit(oldp+6821,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+6822,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+6823,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+6824,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+6825,((((~ (IData)((0x3ffffffULL 
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
    bufp->fullBit(oldp+6826,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+6827,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+6828,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+6829,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+6830,((((~ (IData)((0x1ffffffULL 
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
    bufp->fullBit(oldp+6831,((1U & (IData)((0x1fffffffe0000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1dU))))));
    bufp->fullBit(oldp+6832,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+6833,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+6834,((1U & (~ (IData)((0x1fffffffe0000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1dU)))))));
    bufp->fullBit(oldp+6835,((((~ (IData)((0x1fffffffe0000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1dU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0x1fffffffe0000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1dU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [3U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6836,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+6837,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+6838,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+6839,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+6840,((((~ (IData)((0xffffffULL 
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
    bufp->fullBit(oldp+6841,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+6842,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+6843,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+6844,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+6845,((((~ (IData)((0x7fffffULL 
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
    bufp->fullBit(oldp+6846,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+6847,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+6848,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+6849,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+6850,((((~ (IData)((0x3fffffULL 
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
    bufp->fullBit(oldp+6851,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+6852,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+6853,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+6854,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+6855,((((~ (IData)((0x1fffffULL 
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
    bufp->fullBit(oldp+6856,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+6857,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+6858,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+6859,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+6860,((((~ (IData)((0xfffffULL 
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
    bufp->fullBit(oldp+6861,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+6862,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+6863,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+6864,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+6865,((((~ (IData)((0x7ffffULL 
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
    bufp->fullBit(oldp+6866,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+6867,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+6868,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+6869,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+6870,((((~ (IData)((0x3ffffULL 
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
    bufp->fullBit(oldp+6871,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+6872,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+6873,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+6874,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+6875,((((~ (IData)((0x1ffffULL 
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
    bufp->fullBit(oldp+6876,((1U & (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+6877,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+6878,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+6879,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+6880,((((~ (IData)((0xffffULL 
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
    bufp->fullBit(oldp+6881,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+6882,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+6883,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+6884,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+6885,((((~ (IData)((0x7fffULL 
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
    bufp->fullBit(oldp+6886,((1U & (IData)((0xffffffff0000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1cU))))));
    bufp->fullBit(oldp+6887,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+6888,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+6889,((1U & (~ (IData)((0xffffffff0000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU)))))));
    bufp->fullBit(oldp+6890,((((~ (IData)((0xffffffff0000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1cU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0xffffffff0000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1cU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [4U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6891,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+6892,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+6893,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+6894,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+6895,((((~ (IData)((0x3fffULL 
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
    bufp->fullBit(oldp+6896,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+6897,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+6898,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+6899,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+6900,((((~ (IData)((0x1fffULL 
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
    bufp->fullBit(oldp+6901,((1U & (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+6902,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+6903,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+6904,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+6905,((((~ (IData)((0xfffULL 
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
    bufp->fullBit(oldp+6906,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+6907,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+6908,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+6909,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+6910,((((~ (IData)((0x7ffULL 
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
    bufp->fullBit(oldp+6911,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+6912,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+6913,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+6914,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+6915,((((~ (IData)((0x3ffULL 
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
    bufp->fullBit(oldp+6916,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+6917,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+6918,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+6919,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+6920,((((~ (IData)((0x1ffULL 
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
    bufp->fullBit(oldp+6921,((1U & (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+6922,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+6923,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+6924,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+6925,((((~ (IData)((0xffULL 
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
    bufp->fullBit(oldp+6926,((1U & (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+6927,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+6928,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+6929,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+6930,((((~ (IData)((0x7fULL 
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
    bufp->fullBit(oldp+6931,((1U & (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+6932,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+6933,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+6934,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+6935,((((~ (IData)((0x3fULL 
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
    bufp->fullBit(oldp+6936,((1U & (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+6937,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+6938,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+6939,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+6940,((((~ (IData)((0x1fULL 
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
    bufp->fullBit(oldp+6941,((1U & (IData)((0x7fffffff8000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1bU))))));
    bufp->fullBit(oldp+6942,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+6943,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+6944,((1U & (~ (IData)((0x7fffffff8000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU)))))));
    bufp->fullBit(oldp+6945,((((~ (IData)((0x7fffffff8000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1bU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0x7fffffff8000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1bU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [5U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6946,((1U & (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+6947,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+6948,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+6949,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+6950,((((~ (IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1cU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1cU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x3cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6951,((1U & (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU))))));
    bufp->fullBit(oldp+6952,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+6953,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+6954,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+6955,((((~ (IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x3dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6956,((1U & (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU))))));
    bufp->fullBit(oldp+6957,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+6958,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+6959,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+6960,((((~ (IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0x3eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6961,((1U & (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU))))));
    bufp->fullBit(oldp+6962,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+6963,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+6964,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+6965,((((~ (IData)((1ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
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
    bufp->fullBit(oldp+6966,((1U & (IData)((0x3fffffffc000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1aU))))));
    bufp->fullBit(oldp+6967,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+6968,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+6969,((1U & (~ (IData)((0x3fffffffc000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU)))))));
    bufp->fullBit(oldp+6970,((((~ (IData)((0x3fffffffc000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1aU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0x3fffffffc000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1aU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [6U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6971,((1U & (IData)((0x1fffffffe000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x19U))))));
    bufp->fullBit(oldp+6972,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+6973,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+6974,((1U & (~ (IData)((0x1fffffffe000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x19U)))))));
    bufp->fullBit(oldp+6975,((((~ (IData)((0x1fffffffe000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x19U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0x1fffffffe000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x19U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [7U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6976,((1U & (IData)((0xffffffff000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x18U))))));
    bufp->fullBit(oldp+6977,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+6978,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+6979,((1U & (~ (IData)((0xffffffff000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x18U)))))));
    bufp->fullBit(oldp+6980,((((~ (IData)((0xffffffff000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x18U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0xffffffff000000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x18U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [8U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6981,((1U & (IData)((0x7fffffff800000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x17U))))));
    bufp->fullBit(oldp+6982,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+6983,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+6984,((1U & (~ (IData)((0x7fffffff800000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x17U)))))));
    bufp->fullBit(oldp+6985,((((~ (IData)((0x7fffffff800000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x17U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                              | (((IData)((0x7fffffff800000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x17U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [9U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+6986,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y) 
                                    >> 2U))));
    bufp->fullBit(oldp+6987,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y) 
                                    >> 1U))));
    bufp->fullBit(oldp+6988,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y))));
    bufp->fullCData(oldp+6989,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 1U)))),3);
    bufp->fullQData(oldp+6990,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                << 2U)),64);
    bufp->fullQData(oldp+6992,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+6994,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x) 
                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+6995,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+6996,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+6997,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+6998,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 2U)))));
    bufp->fullBit(oldp+6999,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+7000,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 2U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 2U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+7001,((1U & (IData)((0x3fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+7002,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+7003,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+7004,((1U & (~ (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+7005,((((~ (IData)((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+7006,((1U & (IData)((0x1fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+7007,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+7008,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+7009,((1U & (~ (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+7010,((((~ (IData)((0x1fffffffffffffULL 
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
    bufp->fullBit(oldp+7011,((1U & (IData)((0xfffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+7012,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+7013,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+7014,((1U & (~ (IData)((0xfffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+7015,((((~ (IData)((0xfffffffffffffULL 
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
    bufp->fullBit(oldp+7016,((1U & (IData)((0x7ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+7017,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+7018,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+7019,((1U & (~ (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+7020,((((~ (IData)((0x7ffffffffffffULL 
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
    bufp->fullBit(oldp+7021,((1U & (IData)((0x3ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+7022,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+7023,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+7024,((1U & (~ (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+7025,((((~ (IData)((0x3ffffffffffffULL 
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
    bufp->fullBit(oldp+7026,((1U & (IData)((0x1ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+7027,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+7028,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+7029,((1U & (~ (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+7030,((((~ (IData)((0x1ffffffffffffULL 
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
    bufp->fullBit(oldp+7031,((1U & (IData)((0xffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+7032,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+7033,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+7034,((1U & (~ (IData)((0xffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+7035,((((~ (IData)((0xffffffffffffULL 
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
    bufp->fullBit(oldp+7036,((1U & (IData)((0x7fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+7037,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+7038,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+7039,((1U & (~ (IData)((0x7fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+7040,((((~ (IData)((0x7fffffffffffULL 
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
    bufp->fullBit(oldp+7041,((1U & (IData)((0x3fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+7042,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+7043,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+7044,((1U & (~ (IData)((0x3fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+7045,((((~ (IData)((0x3fffffffffffULL 
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
    bufp->fullBit(oldp+7046,((1U & (IData)((0x1fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+7047,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+7048,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+7049,((1U & (~ (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+7050,((((~ (IData)((0x1fffffffffffULL 
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
    bufp->fullBit(oldp+7051,((1U & (IData)((0x7ffffffffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+7052,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+7053,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+7054,((1U & (~ (IData)((0x7ffffffffffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+7055,((((~ (IData)((0x7ffffffffffffffeULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 1U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffffffeULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 1U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [1U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7056,((1U & (IData)((0xfffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+7057,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+7058,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+7059,((1U & (~ (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+7060,((((~ (IData)((0xfffffffffffULL 
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
    bufp->fullBit(oldp+7061,((1U & (IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+7062,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+7063,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+7064,((1U & (~ (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+7065,((((~ (IData)((0x7ffffffffffULL 
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
    bufp->fullBit(oldp+7066,((1U & (IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+7067,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+7068,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+7069,((1U & (~ (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+7070,((((~ (IData)((0x3ffffffffffULL 
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
    bufp->fullBit(oldp+7071,((1U & (IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+7072,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+7073,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+7074,((1U & (~ (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+7075,((((~ (IData)((0x1ffffffffffULL 
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
    bufp->fullBit(oldp+7076,((1U & (IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+7077,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+7078,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+7079,((1U & (~ (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+7080,((((~ (IData)((0xffffffffffULL 
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
    bufp->fullBit(oldp+7081,((1U & (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+7082,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+7083,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+7084,((1U & (~ (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+7085,((((~ (IData)((0x7fffffffffULL 
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
    bufp->fullBit(oldp+7086,((1U & (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+7087,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+7088,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+7089,((1U & (~ (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+7090,((((~ (IData)((0x3fffffffffULL 
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
    bufp->fullBit(oldp+7091,((1U & (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+7092,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+7093,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+7094,((1U & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+7095,((((~ (IData)((0x1fffffffffULL 
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
    bufp->fullBit(oldp+7096,((1U & (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+7097,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+7098,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+7099,((1U & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+7100,((((~ (IData)((0xfffffffffULL 
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
    bufp->fullBit(oldp+7101,((1U & (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+7102,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+7103,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+7104,((1U & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+7105,((((~ (IData)((0x7ffffffffULL 
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
    bufp->fullBit(oldp+7106,((1U & (IData)((0x3fffffffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+7107,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+7108,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+7109,((1U & (~ (IData)((0x3fffffffffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+7110,((((~ (IData)((0x3fffffffffffffffULL 
                                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffffffffULL 
                                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7111,((1U & (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+7112,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+7113,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+7114,((1U & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+7115,((((~ (IData)((0x3ffffffffULL 
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
    bufp->fullBit(oldp+7116,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+7117,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+7118,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+7119,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+7120,((((~ (IData)((0x1ffffffffULL 
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
    bufp->fullBit(oldp+7121,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+7122,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+7123,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+7124,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+7125,((((~ (IData)((0xffffffffULL 
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
    bufp->fullBit(oldp+7126,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+7127,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+7128,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+7129,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+7130,((((~ (IData)((0x7fffffffULL 
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
    bufp->fullBit(oldp+7131,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+7132,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+7133,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+7134,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+7135,((((~ (IData)((0x3fffffffULL 
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
    bufp->fullBit(oldp+7136,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+7137,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+7138,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+7139,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+7140,((((~ (IData)((0x1fffffffULL 
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
    bufp->fullBit(oldp+7141,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+7142,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+7143,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+7144,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+7145,((((~ (IData)((0xfffffffULL 
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
    bufp->fullBit(oldp+7146,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+7147,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+7148,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+7149,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+7150,((((~ (IData)((0x7ffffffULL 
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
    bufp->fullBit(oldp+7151,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+7152,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+7153,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+7154,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+7155,((((~ (IData)((0x3ffffffULL 
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
    bufp->fullBit(oldp+7156,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+7157,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+7158,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+7159,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+7160,((((~ (IData)((0x1ffffffULL 
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
    bufp->fullBit(oldp+7161,((1U & (IData)((0x1fffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+7162,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+7163,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+7164,((1U & (~ (IData)((0x1fffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+7165,((((~ (IData)((0x1fffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 1U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 1U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7166,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+7167,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+7168,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+7169,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+7170,((((~ (IData)((0xffffffULL 
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
    bufp->fullBit(oldp+7171,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+7172,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+7173,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+7174,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+7175,((((~ (IData)((0x7fffffULL 
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
    bufp->fullBit(oldp+7176,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+7177,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+7178,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+7179,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+7180,((((~ (IData)((0x3fffffULL 
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
    bufp->fullBit(oldp+7181,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+7182,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+7183,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+7184,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+7185,((((~ (IData)((0x1fffffULL 
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
    bufp->fullBit(oldp+7186,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+7187,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+7188,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+7189,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+7190,((((~ (IData)((0xfffffULL 
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
    bufp->fullBit(oldp+7191,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+7192,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+7193,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+7194,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+7195,((((~ (IData)((0x7ffffULL 
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
    bufp->fullBit(oldp+7196,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+7197,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+7198,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+7199,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+7200,((((~ (IData)((0x3ffffULL 
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
    bufp->fullBit(oldp+7201,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+7202,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+7203,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+7204,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+7205,((((~ (IData)((0x1ffffULL 
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
    bufp->fullBit(oldp+7206,((1U & (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+7207,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+7208,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+7209,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+7210,((((~ (IData)((0xffffULL 
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
    bufp->fullBit(oldp+7211,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+7212,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+7213,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+7214,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+7215,((((~ (IData)((0x7fffULL 
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
    bufp->fullBit(oldp+7216,((1U & (IData)((0xfffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+7217,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+7218,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+7219,((1U & (~ (IData)((0xfffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+7220,((((~ (IData)((0xfffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 2U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 2U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7221,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+7222,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+7223,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+7224,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+7225,((((~ (IData)((0x3fffULL 
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
    bufp->fullBit(oldp+7226,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+7227,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+7228,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+7229,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+7230,((((~ (IData)((0x1fffULL 
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
    bufp->fullBit(oldp+7231,((1U & (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+7232,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+7233,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+7234,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+7235,((((~ (IData)((0xfffULL 
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
    bufp->fullBit(oldp+7236,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+7237,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+7238,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+7239,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+7240,((((~ (IData)((0x7ffULL 
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
    bufp->fullBit(oldp+7241,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+7242,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+7243,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+7244,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+7245,((((~ (IData)((0x3ffULL 
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
    bufp->fullBit(oldp+7246,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+7247,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+7248,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+7249,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+7250,((((~ (IData)((0x1ffULL 
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
    bufp->fullBit(oldp+7251,((1U & (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+7252,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+7253,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+7254,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+7255,((((~ (IData)((0xffULL 
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
    bufp->fullBit(oldp+7256,((1U & (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+7257,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+7258,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+7259,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+7260,((((~ (IData)((0x7fULL 
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
    bufp->fullBit(oldp+7261,((1U & (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+7262,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+7263,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+7264,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+7265,((((~ (IData)((0x3fULL 
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
    bufp->fullBit(oldp+7266,((1U & (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+7267,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+7268,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+7269,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+7270,((((~ (IData)((0x1fULL 
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
    bufp->fullBit(oldp+7271,((1U & (IData)((0x7ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+7272,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+7273,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+7274,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+7275,((((~ (IData)((0x7ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 3U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 3U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7276,((1U & (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+7277,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+7278,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+7279,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+7280,((((~ (IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3aU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3aU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7281,((1U & (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU))))));
    bufp->fullBit(oldp+7282,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+7283,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+7284,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+7285,((((~ (IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3bU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3bU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7286,((1U & (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3cU))))));
    bufp->fullBit(oldp+7287,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+7288,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+7289,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+7290,((((~ (IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3cU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3cU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7291,((1U & (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3dU))))));
    bufp->fullBit(oldp+7292,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+7293,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+7294,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+7295,((((~ (IData)((1ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
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
    bufp->fullBit(oldp+7296,((1U & (IData)((0x3ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+7297,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+7298,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+7299,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+7300,((((~ (IData)((0x3ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 4U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 4U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7301,((1U & (IData)((0x1ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+7302,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+7303,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+7304,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+7305,((((~ (IData)((0x1ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 5U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 5U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7306,((1U & (IData)((0xffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+7307,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+7308,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+7309,((1U & (~ (IData)((0xffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+7310,((((~ (IData)((0xffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 6U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 6U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [8U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7311,((1U & (IData)((0x7fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+7312,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+7313,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+7314,((1U & (~ (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+7315,((((~ (IData)((0x7fffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 7U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 7U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                      [9U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7316,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                            >> 3U)))));
    bufp->fullBit(oldp+7317,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                            >> 2U)))));
    bufp->fullCData(oldp+7318,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 3U)))),3);
    bufp->fullQData(oldp+7319,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                << 4U)),64);
    bufp->fullQData(oldp+7321,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+7323,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x) 
                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+7324,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+7325,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+7326,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+7327,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 4U)))));
    bufp->fullBit(oldp+7328,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+7329,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 4U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 4U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+7330,((1U & (IData)((0x3fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+7331,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+7332,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+7333,((1U & (~ (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+7334,((((~ (IData)((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+7335,((1U & (IData)((0x1fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+7336,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+7337,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+7338,((1U & (~ (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+7339,((((~ (IData)((0x1fffffffffffffULL 
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
    bufp->fullBit(oldp+7340,((1U & (IData)((0xfffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+7341,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+7342,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+7343,((1U & (~ (IData)((0xfffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+7344,((((~ (IData)((0xfffffffffffffULL 
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
    bufp->fullBit(oldp+7345,((1U & (IData)((0x7ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+7346,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+7347,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+7348,((1U & (~ (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+7349,((((~ (IData)((0x7ffffffffffffULL 
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
    bufp->fullBit(oldp+7350,((1U & (IData)((0x3ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+7351,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+7352,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+7353,((1U & (~ (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+7354,((((~ (IData)((0x3ffffffffffffULL 
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
    bufp->fullBit(oldp+7355,((1U & (IData)((0x1ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+7356,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+7357,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+7358,((1U & (~ (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+7359,((((~ (IData)((0x1ffffffffffffULL 
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
    bufp->fullBit(oldp+7360,((1U & (IData)((0xffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+7361,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+7362,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+7363,((1U & (~ (IData)((0xffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+7364,((((~ (IData)((0xffffffffffffULL 
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
    bufp->fullBit(oldp+7365,((1U & (IData)((0x7fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+7366,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+7367,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+7368,((1U & (~ (IData)((0x7fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+7369,((((~ (IData)((0x7fffffffffffULL 
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
    bufp->fullBit(oldp+7370,((1U & (IData)((0x3fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+7371,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+7372,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+7373,((1U & (~ (IData)((0x3fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+7374,((((~ (IData)((0x3fffffffffffULL 
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
    bufp->fullBit(oldp+7375,((1U & (IData)((0x1fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+7376,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+7377,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+7378,((1U & (~ (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+7379,((((~ (IData)((0x1fffffffffffULL 
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
    bufp->fullBit(oldp+7380,((1U & (IData)((0x7ffffffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+7381,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+7382,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+7383,((1U & (~ (IData)((0x7ffffffffffffff8ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 3U)))))));
    bufp->fullBit(oldp+7384,((((~ (IData)((0x7ffffffffffffff8ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 3U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffffff8ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 3U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [1U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7385,((1U & (IData)((0xfffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+7386,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+7387,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+7388,((1U & (~ (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+7389,((((~ (IData)((0xfffffffffffULL 
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
    bufp->fullBit(oldp+7390,((1U & (IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+7391,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+7392,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+7393,((1U & (~ (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+7394,((((~ (IData)((0x7ffffffffffULL 
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
    bufp->fullBit(oldp+7395,((1U & (IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+7396,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+7397,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+7398,((1U & (~ (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+7399,((((~ (IData)((0x3ffffffffffULL 
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
    bufp->fullBit(oldp+7400,((1U & (IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+7401,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+7402,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+7403,((1U & (~ (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+7404,((((~ (IData)((0x1ffffffffffULL 
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
    bufp->fullBit(oldp+7405,((1U & (IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+7406,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+7407,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+7408,((1U & (~ (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+7409,((((~ (IData)((0xffffffffffULL 
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
    bufp->fullBit(oldp+7410,((1U & (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+7411,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+7412,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+7413,((1U & (~ (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+7414,((((~ (IData)((0x7fffffffffULL 
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
    bufp->fullBit(oldp+7415,((1U & (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+7416,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+7417,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+7418,((1U & (~ (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+7419,((((~ (IData)((0x3fffffffffULL 
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
    bufp->fullBit(oldp+7420,((1U & (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+7421,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+7422,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+7423,((1U & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+7424,((((~ (IData)((0x1fffffffffULL 
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
    bufp->fullBit(oldp+7425,((1U & (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+7426,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+7427,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+7428,((1U & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+7429,((((~ (IData)((0xfffffffffULL 
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
    bufp->fullBit(oldp+7430,((1U & (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+7431,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+7432,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+7433,((1U & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+7434,((((~ (IData)((0x7ffffffffULL 
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
    bufp->fullBit(oldp+7435,((1U & (IData)((0x3ffffffffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+7436,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+7437,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+7438,((1U & (~ (IData)((0x3ffffffffffffffcULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 2U)))))));
    bufp->fullBit(oldp+7439,((((~ (IData)((0x3ffffffffffffffcULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 2U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffffffffffcULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 2U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7440,((1U & (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+7441,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+7442,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+7443,((1U & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+7444,((((~ (IData)((0x3ffffffffULL 
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
    bufp->fullBit(oldp+7445,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+7446,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+7447,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+7448,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+7449,((((~ (IData)((0x1ffffffffULL 
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
    bufp->fullBit(oldp+7450,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+7451,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+7452,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+7453,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+7454,((((~ (IData)((0xffffffffULL 
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
    bufp->fullBit(oldp+7455,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+7456,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+7457,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+7458,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+7459,((((~ (IData)((0x7fffffffULL 
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
    bufp->fullBit(oldp+7460,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+7461,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+7462,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+7463,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+7464,((((~ (IData)((0x3fffffffULL 
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
    bufp->fullBit(oldp+7465,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+7466,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+7467,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+7468,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+7469,((((~ (IData)((0x1fffffffULL 
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
    bufp->fullBit(oldp+7470,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+7471,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+7472,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+7473,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+7474,((((~ (IData)((0xfffffffULL 
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
    bufp->fullBit(oldp+7475,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+7476,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+7477,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+7478,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+7479,((((~ (IData)((0x7ffffffULL 
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
    bufp->fullBit(oldp+7480,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+7481,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+7482,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+7483,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+7484,((((~ (IData)((0x3ffffffULL 
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
    bufp->fullBit(oldp+7485,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+7486,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+7487,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+7488,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+7489,((((~ (IData)((0x1ffffffULL 
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
    bufp->fullBit(oldp+7490,((1U & (IData)((0x1ffffffffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+7491,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+7492,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+7493,((1U & (~ (IData)((0x1ffffffffffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+7494,((((~ (IData)((0x1ffffffffffffffeULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 1U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffffffffffeULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 1U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7495,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+7496,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+7497,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+7498,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+7499,((((~ (IData)((0xffffffULL 
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
    bufp->fullBit(oldp+7500,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+7501,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+7502,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+7503,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+7504,((((~ (IData)((0x7fffffULL 
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
    bufp->fullBit(oldp+7505,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+7506,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+7507,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+7508,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+7509,((((~ (IData)((0x3fffffULL 
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
    bufp->fullBit(oldp+7510,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+7511,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+7512,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+7513,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+7514,((((~ (IData)((0x1fffffULL 
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
    bufp->fullBit(oldp+7515,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+7516,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+7517,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+7518,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+7519,((((~ (IData)((0xfffffULL 
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
    bufp->fullBit(oldp+7520,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+7521,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+7522,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+7523,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+7524,((((~ (IData)((0x7ffffULL 
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
    bufp->fullBit(oldp+7525,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+7526,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+7527,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+7528,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+7529,((((~ (IData)((0x3ffffULL 
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
    bufp->fullBit(oldp+7530,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+7531,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+7532,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+7533,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+7534,((((~ (IData)((0x1ffffULL 
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
    bufp->fullBit(oldp+7535,((1U & (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+7536,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+7537,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+7538,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+7539,((((~ (IData)((0xffffULL 
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
    bufp->fullBit(oldp+7540,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+7541,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+7542,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+7543,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+7544,((((~ (IData)((0x7fffULL 
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
    bufp->fullBit(oldp+7545,((1U & (IData)((0xfffffffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+7546,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+7547,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+7548,((1U & (~ (IData)((0xfffffffffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+7549,((((~ (IData)((0xfffffffffffffffULL 
                                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffffffffULL 
                                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7550,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+7551,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+7552,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+7553,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+7554,((((~ (IData)((0x3fffULL 
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
    bufp->fullBit(oldp+7555,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+7556,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+7557,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+7558,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+7559,((((~ (IData)((0x1fffULL 
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
    bufp->fullBit(oldp+7560,((1U & (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+7561,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+7562,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+7563,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+7564,((((~ (IData)((0xfffULL 
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
    bufp->fullBit(oldp+7565,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+7566,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+7567,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+7568,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+7569,((((~ (IData)((0x7ffULL 
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
    bufp->fullBit(oldp+7570,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+7571,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+7572,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+7573,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+7574,((((~ (IData)((0x3ffULL 
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
    bufp->fullBit(oldp+7575,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+7576,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+7577,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+7578,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+7579,((((~ (IData)((0x1ffULL 
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
    bufp->fullBit(oldp+7580,((1U & (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+7581,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+7582,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+7583,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+7584,((((~ (IData)((0xffULL 
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
    bufp->fullBit(oldp+7585,((1U & (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+7586,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+7587,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+7588,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+7589,((((~ (IData)((0x7fULL 
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
    bufp->fullBit(oldp+7590,((1U & (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+7591,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+7592,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+7593,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+7594,((((~ (IData)((0x3fULL 
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
    bufp->fullBit(oldp+7595,((1U & (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+7596,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+7597,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+7598,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+7599,((((~ (IData)((0x1fULL 
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
    bufp->fullBit(oldp+7600,((1U & (IData)((0x7ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+7601,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+7602,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+7603,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+7604,((((~ (IData)((0x7ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 1U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 1U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7605,((1U & (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+7606,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+7607,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+7608,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+7609,((((~ (IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x38U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x38U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7610,((1U & (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x39U))))));
    bufp->fullBit(oldp+7611,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+7612,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+7613,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+7614,((((~ (IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x39U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x39U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7615,((1U & (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3aU))))));
    bufp->fullBit(oldp+7616,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+7617,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+7618,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+7619,((((~ (IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3aU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3aU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7620,((1U & (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU))))));
    bufp->fullBit(oldp+7621,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+7622,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+7623,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+7624,((((~ (IData)((1ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
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
    bufp->fullBit(oldp+7625,((1U & (IData)((0x3ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+7626,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+7627,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+7628,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+7629,((((~ (IData)((0x3ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 2U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 2U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7630,((1U & (IData)((0x1ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+7631,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+7632,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+7633,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+7634,((((~ (IData)((0x1ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 3U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 3U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7635,((1U & (IData)((0xffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+7636,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+7637,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+7638,((1U & (~ (IData)((0xffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+7639,((((~ (IData)((0xffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 4U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 4U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [8U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7640,((1U & (IData)((0x7fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+7641,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+7642,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+7643,((1U & (~ (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+7644,((((~ (IData)((0x7fffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 5U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 5U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                      [9U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7645,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                            >> 5U)))));
    bufp->fullBit(oldp+7646,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                            >> 4U)))));
    bufp->fullCData(oldp+7647,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 5U)))),3);
    bufp->fullQData(oldp+7648,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                << 6U)),64);
    bufp->fullQData(oldp+7650,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+7652,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x) 
                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+7653,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+7654,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+7655,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+7656,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 6U)))));
    bufp->fullBit(oldp+7657,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U))))));
    bufp->fullBit(oldp+7658,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 6U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 6U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+7659,((1U & (IData)((0x3fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+7660,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+7661,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+7662,((1U & (~ (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+7663,((((~ (IData)((0x3fffffffffffffULL 
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
    bufp->fullBit(oldp+7664,((1U & (IData)((0x1fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+7665,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+7666,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+7667,((1U & (~ (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+7668,((((~ (IData)((0x1fffffffffffffULL 
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
    bufp->fullBit(oldp+7669,((1U & (IData)((0xfffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+7670,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+7671,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+7672,((1U & (~ (IData)((0xfffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+7673,((((~ (IData)((0xfffffffffffffULL 
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
    bufp->fullBit(oldp+7674,((1U & (IData)((0x7ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+7675,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+7676,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+7677,((1U & (~ (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+7678,((((~ (IData)((0x7ffffffffffffULL 
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
    bufp->fullBit(oldp+7679,((1U & (IData)((0x3ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+7680,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+7681,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+7682,((1U & (~ (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+7683,((((~ (IData)((0x3ffffffffffffULL 
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
    bufp->fullBit(oldp+7684,((1U & (IData)((0x1ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+7685,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+7686,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+7687,((1U & (~ (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+7688,((((~ (IData)((0x1ffffffffffffULL 
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
    bufp->fullBit(oldp+7689,((1U & (IData)((0xffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+7690,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+7691,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+7692,((1U & (~ (IData)((0xffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+7693,((((~ (IData)((0xffffffffffffULL 
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
    bufp->fullBit(oldp+7694,((1U & (IData)((0x7fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+7695,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+7696,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+7697,((1U & (~ (IData)((0x7fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+7698,((((~ (IData)((0x7fffffffffffULL 
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
    bufp->fullBit(oldp+7699,((1U & (IData)((0x3fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+7700,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+7701,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+7702,((1U & (~ (IData)((0x3fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+7703,((((~ (IData)((0x3fffffffffffULL 
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
    bufp->fullBit(oldp+7704,((1U & (IData)((0x1fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+7705,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+7706,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+7707,((1U & (~ (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+7708,((((~ (IData)((0x1fffffffffffULL 
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
    bufp->fullBit(oldp+7709,((1U & (IData)((0x7fffffffffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U))))));
    bufp->fullBit(oldp+7710,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+7711,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+7712,((1U & (~ (IData)((0x7fffffffffffffe0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 5U)))))));
    bufp->fullBit(oldp+7713,((((~ (IData)((0x7fffffffffffffe0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 5U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffffffffe0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 5U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                      [1U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7714,((1U & (IData)((0xfffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+7715,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+7716,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+7717,((1U & (~ (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+7718,((((~ (IData)((0xfffffffffffULL 
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
    bufp->fullBit(oldp+7719,((1U & (IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+7720,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+7721,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+7722,((1U & (~ (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+7723,((((~ (IData)((0x7ffffffffffULL 
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
    bufp->fullBit(oldp+7724,((1U & (IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+7725,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+7726,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+7727,((1U & (~ (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+7728,((((~ (IData)((0x3ffffffffffULL 
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
    bufp->fullBit(oldp+7729,((1U & (IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+7730,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+7731,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+7732,((1U & (~ (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+7733,((((~ (IData)((0x1ffffffffffULL 
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
    bufp->fullBit(oldp+7734,((1U & (IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+7735,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+7736,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+7737,((1U & (~ (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+7738,((((~ (IData)((0xffffffffffULL 
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
    bufp->fullBit(oldp+7739,((1U & (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+7740,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+7741,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+7742,((1U & (~ (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+7743,((((~ (IData)((0x7fffffffffULL 
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
    bufp->fullBit(oldp+7744,((1U & (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+7745,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+7746,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+7747,((1U & (~ (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+7748,((((~ (IData)((0x3fffffffffULL 
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
    bufp->fullBit(oldp+7749,((1U & (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+7750,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+7751,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+7752,((1U & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+7753,((((~ (IData)((0x1fffffffffULL 
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
    bufp->fullBit(oldp+7754,((1U & (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+7755,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+7756,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+7757,((1U & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+7758,((((~ (IData)((0xfffffffffULL 
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
    bufp->fullBit(oldp+7759,((1U & (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+7760,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+7761,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+7762,((1U & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+7763,((((~ (IData)((0x7ffffffffULL 
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
    bufp->fullBit(oldp+7764,((1U & (IData)((0x3ffffffffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+7765,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+7766,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+7767,((1U & (~ (IData)((0x3ffffffffffffff0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U)))))));
    bufp->fullBit(oldp+7768,((((~ (IData)((0x3ffffffffffffff0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffffffffff0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+7769,((1U & (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+7770,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+7771,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+7772,((1U & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+7773,((((~ (IData)((0x3ffffffffULL 
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
    bufp->fullBit(oldp+7774,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+7775,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+7776,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+7777,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+7778,((((~ (IData)((0x1ffffffffULL 
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
    bufp->fullBit(oldp+7779,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+7780,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+7781,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+7782,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+7783,((((~ (IData)((0xffffffffULL 
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
    bufp->fullBit(oldp+7784,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+7785,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+7786,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+7787,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+7788,((((~ (IData)((0x7fffffffULL 
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
    bufp->fullBit(oldp+7789,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+7790,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+7791,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+7792,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+7793,((((~ (IData)((0x3fffffffULL 
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
    bufp->fullBit(oldp+7794,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+7795,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+7796,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+7797,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+7798,((((~ (IData)((0x1fffffffULL 
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
    bufp->fullBit(oldp+7799,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+7800,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+7801,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+7802,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+7803,((((~ (IData)((0xfffffffULL 
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
    bufp->fullBit(oldp+7804,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+7805,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+7806,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+7807,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+7808,((((~ (IData)((0x7ffffffULL 
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
    bufp->fullBit(oldp+7809,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+7810,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+7811,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+7812,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+7813,((((~ (IData)((0x3ffffffULL 
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
    bufp->fullBit(oldp+7814,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+7815,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+7816,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+7817,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+7818,((((~ (IData)((0x1ffffffULL 
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
    bufp->fullBit(oldp+7819,((1U & (IData)((0x1ffffffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+7820,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+7821,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+7822,((1U & (~ (IData)((0x1ffffffffffffff8ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 3U)))))));
    bufp->fullBit(oldp+7823,((((~ (IData)((0x1ffffffffffffff8ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 3U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffffffffff8ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 3U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
}
