// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_id_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_id_stage__Syms.h"
#include "Vtb_id_stage___024root.h"

void Vtb_id_stage___024root___ctor_var_reset(Vtb_id_stage___024root* vlSelf);

Vtb_id_stage___024root::Vtb_id_stage___024root(Vtb_id_stage__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_id_stage___024root___ctor_var_reset(this);
}

void Vtb_id_stage___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_id_stage___024root::~Vtb_id_stage___024root() {
}
