// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhamming_encoder_tb.h for the primary calling header

#ifndef VERILATED_VHAMMING_ENCODER_TB___024ROOT_H_
#define VERILATED_VHAMMING_ENCODER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhamming_encoder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhamming_encoder_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ hamming_encoder_tb__DOT__message;
    SData/*15:0*/ hamming_encoder_tb__DOT__hamming_message;
    IData/*31:0*/ hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 5> hamming_encoder_tb__DOT__dut__DOT__parity_pos;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhamming_encoder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhamming_encoder_tb___024root(Vhamming_encoder_tb__Syms* symsp, const char* v__name);
    ~Vhamming_encoder_tb___024root();
    VL_UNCOPYABLE(Vhamming_encoder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
