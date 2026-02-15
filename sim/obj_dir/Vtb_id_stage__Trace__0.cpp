// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_id_stage__Syms.h"


void Vtb_id_stage___024root__trace_chg_sub_0(Vtb_id_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_id_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_id_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_id_stage___024root*>(voidSelf);
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_id_stage___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_id_stage___024root__trace_chg_sub_0(Vtb_id_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->tb_id_stage__DOT__reset));
        bufp->chgIData(oldp+1,(vlSelf->tb_id_stage__DOT__instr),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_id_stage__DOT__wb_data),32);
        bufp->chgCData(oldp+3,(vlSelf->tb_id_stage__DOT__wb_rd),5);
        bufp->chgBit(oldp+4,(vlSelf->tb_id_stage__DOT__wb_we));
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->tb_id_stage__DOT__instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->tb_id_stage__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->tb_id_stage__DOT__instr 
                                         >> 7U))),5);
    }
    bufp->chgBit(oldp+8,(vlSelf->clk));
    bufp->chgIData(oldp+9,(vlSelf->tb_id_stage__DOT__cycle),32);
}

void Vtb_id_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root__trace_cleanup\n"); );
    // Init
    Vtb_id_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_id_stage___024root*>(voidSelf);
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
