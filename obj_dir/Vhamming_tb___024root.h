// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhamming_tb.h for the primary calling header

#ifndef VERILATED_VHAMMING_TB___024ROOT_H_
#define VERILATED_VHAMMING_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhamming_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhamming_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ hamming_tb__DOT__one_error_given;
    CData/*0:0*/ hamming_tb__DOT__one_error_detected;
    CData/*0:0*/ hamming_tb__DOT__two_errors_given;
    CData/*0:0*/ hamming_tb__DOT__two_errors_detected;
    CData/*3:0*/ hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__error_pos;
    CData/*0:0*/ hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit1_check;
    CData/*0:0*/ hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit2_check;
    CData/*0:0*/ hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit3_check;
    CData/*0:0*/ hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit4_check;
    CData/*3:0*/ hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_1_bits;
    CData/*0:0*/ hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ hamming_tb__DOT__input_message;
    SData/*10:0*/ hamming_tb__DOT__output_message;
    SData/*15:0*/ hamming_tb__DOT__encoder_to_noise;
    SData/*15:0*/ hamming_tb__DOT__noise_to_decoder;
    SData/*15:0*/ hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message;
    IData/*31:0*/ hamming_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ hamming_tb__DOT__unnamedblk1__DOT__message;
    IData/*31:0*/ hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index;
    IData/*31:0*/ hamming_tb__DOT__noise_channel__DOT__rand_number;
    IData/*31:0*/ hamming_tb__DOT__noise_channel__DOT__rand_number2;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhamming_tb__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 5> hamming_tb__DOT__dut_encoder__DOT__parity_pos = {{
        0U, 1U, 2U, 4U, 8U
    }};

    // CONSTRUCTORS
    Vhamming_tb___024root(Vhamming_tb__Syms* symsp, const char* v__name);
    ~Vhamming_tb___024root();
    VL_UNCOPYABLE(Vhamming_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
