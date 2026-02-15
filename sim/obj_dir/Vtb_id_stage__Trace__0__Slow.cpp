// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_id_stage__Syms.h"


VL_ATTR_COLD void Vtb_id_stage___024root__trace_init_sub__TOP__0(Vtb_id_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"clk", false,-1);
    tracep->pushNamePrefix("tb_id_stage ");
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"wb_data", false,-1, 31,0);
    tracep->declBus(c+4,"wb_rd", false,-1, 4,0);
    tracep->declBit(c+5,"wb_we", false,-1);
    tracep->declBus(c+6,"rs1", false,-1, 4,0);
    tracep->declBus(c+7,"rs2", false,-1, 4,0);
    tracep->declBus(c+8,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+11,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBit(c+12,"reg_write", false,-1);
    tracep->declBit(c+12,"mem_read", false,-1);
    tracep->declBit(c+12,"mem_write", false,-1);
    tracep->declBit(c+12,"branch", false,-1);
    tracep->declBit(c+12,"jump", false,-1);
    tracep->declBus(c+13,"alu_op", false,-1, 3,0);
    tracep->declBit(c+12,"alu_src_imm", false,-1);
    tracep->declBit(c+12,"wb_sel_mem", false,-1);
    tracep->declBus(c+10,"cycle", false,-1, 31,0);
    tracep->pushNamePrefix("u_id_stage ");
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"wb_data", false,-1, 31,0);
    tracep->declBus(c+4,"wb_rd", false,-1, 4,0);
    tracep->declBit(c+5,"wb_we", false,-1);
    tracep->declBus(c+6,"rs1", false,-1, 4,0);
    tracep->declBus(c+7,"rs2", false,-1, 4,0);
    tracep->declBus(c+8,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+11,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBit(c+12,"reg_write", false,-1);
    tracep->declBit(c+12,"mem_read", false,-1);
    tracep->declBit(c+12,"mem_write", false,-1);
    tracep->declBit(c+12,"branch", false,-1);
    tracep->declBit(c+12,"jump", false,-1);
    tracep->declBus(c+13,"alu_op", false,-1, 3,0);
    tracep->declBit(c+12,"alu_src_imm", false,-1);
    tracep->declBit(c+12,"wb_sel_mem", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_id_stage___024root__trace_init_top(Vtb_id_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root__trace_init_top\n"); );
    // Body
    Vtb_id_stage___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_id_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_id_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_id_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_id_stage___024root__trace_register(Vtb_id_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_id_stage___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vtb_id_stage___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vtb_id_stage___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_id_stage___024root__trace_full_sub_0(Vtb_id_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_id_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root__trace_full_top_0\n"); );
    // Init
    Vtb_id_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_id_stage___024root*>(voidSelf);
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_id_stage___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_id_stage___024root__trace_full_sub_0(Vtb_id_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id_stage___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_id_stage__DOT__reset));
    bufp->fullIData(oldp+2,(vlSelf->tb_id_stage__DOT__instr),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_id_stage__DOT__wb_data),32);
    bufp->fullCData(oldp+4,(vlSelf->tb_id_stage__DOT__wb_rd),5);
    bufp->fullBit(oldp+5,(vlSelf->tb_id_stage__DOT__wb_we));
    bufp->fullCData(oldp+6,((0x1fU & (vlSelf->tb_id_stage__DOT__instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->tb_id_stage__DOT__instr 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->tb_id_stage__DOT__instr 
                                      >> 7U))),5);
    bufp->fullBit(oldp+9,(vlSelf->clk));
    bufp->fullIData(oldp+10,(vlSelf->tb_id_stage__DOT__cycle),32);
    bufp->fullIData(oldp+11,(0U),32);
    bufp->fullBit(oldp+12,(0U));
    bufp->fullCData(oldp+13,(0U),4);
}
