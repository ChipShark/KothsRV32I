// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_id_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_id_stage___024root.h"

VL_ATTR_COLD void Vtb_id_stage___024root___initial__TOP__0(Vtb_id_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->tb_id_stage__DOT__reset = 1U;
    vlSelf->tb_id_stage__DOT__instr = 0x13U;
    vlSelf->tb_id_stage__DOT__wb_data = 0U;
    vlSelf->tb_id_stage__DOT__wb_rd = 0U;
    vlSelf->tb_id_stage__DOT__wb_we = 0U;
    vlSelf->tb_id_stage__DOT__cycle = 0U;
}

VL_ATTR_COLD void Vtb_id_stage___024root___eval_initial(Vtb_id_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtb_id_stage___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_id_stage___024root___eval_settle(Vtb_id_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vtb_id_stage___024root___final(Vtb_id_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root___final\n"); );
}

VL_ATTR_COLD void Vtb_id_stage___024root___ctor_var_reset(Vtb_id_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->tb_id_stage__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_id_stage__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->tb_id_stage__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->tb_id_stage__DOT__wb_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_id_stage__DOT__wb_we = VL_RAND_RESET_I(1);
    vlSelf->tb_id_stage__DOT__cycle = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
