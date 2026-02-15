// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_id_stage.h for the primary calling header

#ifndef VERILATED_VTB_ID_STAGE___024ROOT_H_
#define VERILATED_VTB_ID_STAGE___024ROOT_H_  // guard

#include "verilated.h"

class Vtb_id_stage__Syms;
VL_MODULE(Vtb_id_stage___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ tb_id_stage__DOT__reset;
    CData/*4:0*/ tb_id_stage__DOT__wb_rd;
    CData/*0:0*/ tb_id_stage__DOT__wb_we;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ tb_id_stage__DOT__instr;
    IData/*31:0*/ tb_id_stage__DOT__wb_data;
    IData/*31:0*/ tb_id_stage__DOT__cycle;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtb_id_stage__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_id_stage___024root(Vtb_id_stage__Syms* symsp, const char* name);
    ~Vtb_id_stage___024root();
    VL_UNCOPYABLE(Vtb_id_stage___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
