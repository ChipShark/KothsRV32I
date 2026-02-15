// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_id_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_id_stage___024root.h"

VL_INLINE_OPT void Vtb_id_stage___024root___sequent__TOP__0(Vtb_id_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_id_stage__DOT__cycle = ((IData)(1U) 
                                       + vlSelf->tb_id_stage__DOT__cycle);
}

void Vtb_id_stage___024root___eval(Vtb_id_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtb_id_stage___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtb_id_stage___024root___eval_debug_assertions(Vtb_id_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
