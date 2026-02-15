// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_id_stage.h"
#include "Vtb_id_stage__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_id_stage::Vtb_id_stage(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtb_id_stage__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtb_id_stage::Vtb_id_stage(const char* _vcname__)
    : Vtb_id_stage(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtb_id_stage::~Vtb_id_stage() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtb_id_stage___024root___eval_initial(Vtb_id_stage___024root* vlSelf);
void Vtb_id_stage___024root___eval_settle(Vtb_id_stage___024root* vlSelf);
void Vtb_id_stage___024root___eval(Vtb_id_stage___024root* vlSelf);
#ifdef VL_DEBUG
void Vtb_id_stage___024root___eval_debug_assertions(Vtb_id_stage___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_id_stage___024root___final(Vtb_id_stage___024root* vlSelf);

static void _eval_initial_loop(Vtb_id_stage__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtb_id_stage___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtb_id_stage___024root___eval_settle(&(vlSymsp->TOP));
        Vtb_id_stage___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtb_id_stage::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_id_stage::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_id_stage___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtb_id_stage___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vtb_id_stage::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtb_id_stage::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_id_stage::final() {
    Vtb_id_stage___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vtb_id_stage___024root__trace_init_top(Vtb_id_stage___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_id_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_id_stage___024root*>(voidSelf);
    Vtb_id_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtb_id_stage___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtb_id_stage___024root__trace_register(Vtb_id_stage___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_id_stage::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_id_stage___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
