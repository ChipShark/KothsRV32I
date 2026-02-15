// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ID_STAGE__SYMS_H_
#define VERILATED_VTB_ID_STAGE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_id_stage.h"

// INCLUDE MODULE CLASSES
#include "Vtb_id_stage___024root.h"

// SYMS CLASS (contains all model state)
class Vtb_id_stage__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_id_stage* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_id_stage___024root         TOP;

    // CONSTRUCTORS
    Vtb_id_stage__Syms(VerilatedContext* contextp, const char* namep, Vtb_id_stage* modelp);
    ~Vtb_id_stage__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
