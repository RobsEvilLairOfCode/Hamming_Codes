// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_tb.h for the primary calling header

#include "Vhamming_tb__pch.h"

VL_ATTR_COLD void Vhamming_tb___024root___eval_static(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_static\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vhamming_tb___024root___eval_initial__TOP(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_initial__TOP\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("waveform_hamming.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vhamming_tb___024root___eval_final(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_final\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_tb___024root___dump_triggers__stl(Vhamming_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhamming_tb___024root___eval_phase__stl(Vhamming_tb___024root* vlSelf);

VL_ATTR_COLD void Vhamming_tb___024root___eval_settle(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_settle\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vhamming_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("hamming_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vhamming_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

VL_ATTR_COLD void Vhamming_tb___024root___eval_triggers__stl(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_triggers__stl\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhamming_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_tb___024root___dump_triggers__stl(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___dump_triggers__stl\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vhamming_tb___024root___act_sequent__TOP__0(Vhamming_tb___024root* vlSelf);
VL_ATTR_COLD void Vhamming_tb___024root____Vm_traceActivitySetAll(Vhamming_tb___024root* vlSelf);

VL_ATTR_COLD void Vhamming_tb___024root___eval_stl(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_stl\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vhamming_tb___024root___act_sequent__TOP__0(vlSelf);
        Vhamming_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vhamming_tb___024root___eval_phase__stl(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_phase__stl\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhamming_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vhamming_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_tb___024root___dump_triggers__act(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___dump_triggers__act\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_tb___024root___dump_triggers__nba(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___dump_triggers__nba\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhamming_tb___024root____Vm_traceActivitySetAll(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root____Vm_traceActivitySetAll\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vhamming_tb___024root___ctor_var_reset(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___ctor_var_reset\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->hamming_tb__DOT__input_message = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15045382492020659815ull);
    vlSelf->hamming_tb__DOT__output_message = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8949194413706664687ull);
    vlSelf->hamming_tb__DOT__encoder_to_noise = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17309365483960394173ull);
    vlSelf->hamming_tb__DOT__noise_to_decoder = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3427992528322671442ull);
    vlSelf->hamming_tb__DOT__one_error_given = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1970801942203337540ull);
    vlSelf->hamming_tb__DOT__one_error_detected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 628327414410333195ull);
    vlSelf->hamming_tb__DOT__two_errors_given = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17703976713802354731ull);
    vlSelf->hamming_tb__DOT__two_errors_detected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10838179636510949820ull);
    vlSelf->hamming_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->hamming_tb__DOT__unnamedblk1__DOT__message = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 195531103357360491ull);
    vlSelf->hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index = 0;
    vlSelf->hamming_tb__DOT__noise_channel__DOT__rand_number = 0;
    vlSelf->hamming_tb__DOT__noise_channel__DOT__rand_number2 = 0;
    vlSelf->hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2703069189359717086ull);
    vlSelf->hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__error_pos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4242243261717038711ull);
    vlSelf->hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit1_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1922318853705464304ull);
    vlSelf->hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit2_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16639457465627365646ull);
    vlSelf->hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit3_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9088150877062627185ull);
    vlSelf->hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit4_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10504227532134496546ull);
    vlSelf->hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_1_bits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5510693538461042317ull);
    vlSelf->hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16293364114875279682ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
