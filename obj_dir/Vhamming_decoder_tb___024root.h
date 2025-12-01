// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhamming_decoder_tb.h for the primary calling header

#ifndef VERILATED_VHAMMING_DECODER_TB___024ROOT_H_
#define VERILATED_VHAMMING_DECODER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhamming_decoder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhamming_decoder_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ hamming_decoder_tb__DOT__one_error;
    CData/*0:0*/ hamming_decoder_tb__DOT__two_errors;
    CData/*3:0*/ hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__error_pos;
    CData/*0:0*/ hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit1_check;
    CData/*0:0*/ hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit2_check;
    CData/*0:0*/ hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit3_check;
    CData/*0:0*/ hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit4_check;
    CData/*3:0*/ hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_1_bits;
    CData/*0:0*/ hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ hamming_decoder_tb__DOT__hamming_message;
    SData/*10:0*/ hamming_decoder_tb__DOT__message;
    SData/*15:0*/ hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 5> hamming_decoder_tb__DOT__dut__DOT__parity_pos;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhamming_decoder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhamming_decoder_tb___024root(Vhamming_decoder_tb__Syms* symsp, const char* v__name);
    ~Vhamming_decoder_tb___024root();
    VL_UNCOPYABLE(Vhamming_decoder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
