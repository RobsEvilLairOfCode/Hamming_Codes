// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_decoder_tb.h for the primary calling header

#include "Vhamming_decoder_tb__pch.h"

VL_ATTR_COLD void Vhamming_decoder_tb___024root___eval_initial__TOP(Vhamming_decoder_tb___024root* vlSelf);
VlCoroutine Vhamming_decoder_tb___024root___eval_initial__TOP__Vtiming__0(Vhamming_decoder_tb___024root* vlSelf);

void Vhamming_decoder_tb___024root___eval_initial(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___eval_initial\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhamming_decoder_tb___024root___eval_initial__TOP(vlSelf);
    Vhamming_decoder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vhamming_decoder_tb___024root___eval_initial__TOP__Vtiming__0(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hamming_decoder_tb__DOT__hamming_message = 0x30f3U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "hamming_decoder_tb.sv", 
                                         21);
    VL_WRITEF_NX("Input: %x | Msg: %x | 1_Err: %b | 2_Err: %b (Expect: Clean)\n",0,
                 16,vlSelfRef.hamming_decoder_tb__DOT__hamming_message,
                 11,(IData)(vlSelfRef.hamming_decoder_tb__DOT__message),
                 1,vlSelfRef.hamming_decoder_tb__DOT__one_error,
                 1,(IData)(vlSelfRef.hamming_decoder_tb__DOT__two_errors));
    vlSelfRef.hamming_decoder_tb__DOT__hamming_message = 0x30f2U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "hamming_decoder_tb.sv", 
                                         30);
    VL_WRITEF_NX("Input: %x | Msg: %x | 1_Err: %b | 2_Err: %b (Expect: 1 Err, Msg Corrected to 18E)\n",0,
                 16,vlSelfRef.hamming_decoder_tb__DOT__hamming_message,
                 11,(IData)(vlSelfRef.hamming_decoder_tb__DOT__message),
                 1,vlSelfRef.hamming_decoder_tb__DOT__one_error,
                 1,(IData)(vlSelfRef.hamming_decoder_tb__DOT__two_errors));
    vlSelfRef.hamming_decoder_tb__DOT__hamming_message = 0x3073U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "hamming_decoder_tb.sv", 
                                         39);
    VL_WRITEF_NX("Input: %x | Msg: %x | 1_Err: %b | 2_Err: %b (Expect: 1 Err, Msg Corrected to 18E)\n",0,
                 16,vlSelfRef.hamming_decoder_tb__DOT__hamming_message,
                 11,(IData)(vlSelfRef.hamming_decoder_tb__DOT__message),
                 1,vlSelfRef.hamming_decoder_tb__DOT__one_error,
                 1,(IData)(vlSelfRef.hamming_decoder_tb__DOT__two_errors));
    vlSelfRef.hamming_decoder_tb__DOT__hamming_message = 0x30f0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "hamming_decoder_tb.sv", 
                                         48);
    VL_WRITEF_NX("Input: %x | Msg: %x | 1_Err: %b | 2_Err: %b (Expect: 2 Err)\n",0,
                 16,vlSelfRef.hamming_decoder_tb__DOT__hamming_message,
                 11,(IData)(vlSelfRef.hamming_decoder_tb__DOT__message),
                 1,vlSelfRef.hamming_decoder_tb__DOT__one_error,
                 1,(IData)(vlSelfRef.hamming_decoder_tb__DOT__two_errors));
    vlSelfRef.hamming_decoder_tb__DOT__hamming_message = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "hamming_decoder_tb.sv", 
                                         57);
    VL_WRITEF_NX("Input: %x | Msg: %x | 1_Err: %b | 2_Err: %b (Expect: Clean)\n",0,
                 16,vlSelfRef.hamming_decoder_tb__DOT__hamming_message,
                 11,(IData)(vlSelfRef.hamming_decoder_tb__DOT__message),
                 1,vlSelfRef.hamming_decoder_tb__DOT__one_error,
                 1,(IData)(vlSelfRef.hamming_decoder_tb__DOT__two_errors));
    VL_FINISH_MT("hamming_decoder_tb.sv", 61, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_decoder_tb___024root___dump_triggers__act(Vhamming_decoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhamming_decoder_tb___024root___eval_triggers__act(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___eval_triggers__act\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhamming_decoder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vhamming_decoder_tb___024root___act_sequent__TOP__0(Vhamming_decoder_tb___024root* vlSelf);

void Vhamming_decoder_tb___024root___eval_act(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___eval_act\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vhamming_decoder_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vhamming_decoder_tb___024root___act_sequent__TOP__0(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___act_sequent__TOP__0\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit1_check 
        = ((1U & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                  >> 1U)) == (1U & VL_REDXOR_32((0xaaa8U 
                                                 & (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message)))));
    vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit2_check 
        = ((1U & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                  >> 2U)) == (1U & VL_REDXOR_32((0xccc8U 
                                                 & (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message)))));
    vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit3_check 
        = ((1U & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                  >> 4U)) == (1U & VL_REDXOR_32((0xf0e0U 
                                                 & (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message)))));
    vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit4_check 
        = ((1U & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                  >> 8U)) == (1U & VL_REDXOR_32((0xfe00U 
                                                 & (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message)))));
    vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_1_bits 
        = ((((IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit4_check) 
             << 3U) | ((IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit3_check) 
                       << 2U)) | (((IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit2_check) 
                                   << 1U) | (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit1_check)));
    vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_2 
        = ((1U & (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message)) 
           == (1U & VL_REDXOR_32((0x00007fffU & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                                                 >> 1U)))));
    vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__error_pos = 0U;
    vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message 
        = vlSelfRef.hamming_decoder_tb__DOT__hamming_message;
    if ((1U & ((~ (0x0000000fU == (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_1_bits))) 
               & (~ (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_2))))) {
        vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__error_pos 
            = (0x0000000fU & (((VL_SHIFTL_III(4,4,32, 
                                              ((1U 
                                                & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                                                   >> 8U)) 
                                               != (1U 
                                                   & VL_REDXOR_32(
                                                                  (0xfe00U 
                                                                   & (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message))))), 3U) 
                                | VL_SHIFTL_III(4,4,32, 
                                                ((1U 
                                                  & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                                                     >> 4U)) 
                                                 != 
                                                 (1U 
                                                  & VL_REDXOR_32(
                                                                 (0xf0e0U 
                                                                  & (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message))))), 2U)) 
                               | VL_SHIFTL_III(4,4,32, 
                                               ((1U 
                                                 & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                                                    >> 2U)) 
                                                != 
                                                (1U 
                                                 & VL_REDXOR_32(
                                                                (0xccc8U 
                                                                 & (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message))))), 1U)) 
                              | ((1U & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                                        >> 1U)) != 
                                 (1U & VL_REDXOR_32(
                                                    (0xaaa8U 
                                                     & (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message)))))));
        vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__error_pos))) 
                & (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message)) 
               | (0x0000ffffU & ((1U & (~ ((IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message) 
                                           >> (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__error_pos)))) 
                                 << (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__error_pos))));
        vlSelfRef.hamming_decoder_tb__DOT__one_error = 1U;
        vlSelfRef.hamming_decoder_tb__DOT__two_errors = 0U;
    } else if (((0x0000000fU == (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_1_bits)) 
                & (~ (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_2)))) {
        vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message 
            = ((0xfffeU & (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message)) 
               | (1U & (~ (IData)(vlSelfRef.hamming_decoder_tb__DOT__hamming_message))));
        vlSelfRef.hamming_decoder_tb__DOT__one_error = 1U;
        vlSelfRef.hamming_decoder_tb__DOT__two_errors = 0U;
    } else if (((~ (0x0000000fU == (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_1_bits))) 
                & (IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_2))) {
        vlSelfRef.hamming_decoder_tb__DOT__one_error = 0U;
        vlSelfRef.hamming_decoder_tb__DOT__two_errors = 1U;
    } else {
        vlSelfRef.hamming_decoder_tb__DOT__one_error = 0U;
        vlSelfRef.hamming_decoder_tb__DOT__two_errors = 0U;
    }
    vlSelfRef.hamming_decoder_tb__DOT__message = ((0x000007f0U 
                                                   & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message) 
                                                      >> 5U)) 
                                                  | ((0x0000000eU 
                                                      & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message) 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message) 
                                                           >> 3U))));
}

void Vhamming_decoder_tb___024root___eval_nba(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___eval_nba\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhamming_decoder_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vhamming_decoder_tb___024root___timing_resume(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___timing_resume\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

bool Vhamming_decoder_tb___024root___eval_phase__act(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___eval_phase__act\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhamming_decoder_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhamming_decoder_tb___024root___timing_resume(vlSelf);
        Vhamming_decoder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhamming_decoder_tb___024root___eval_phase__nba(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___eval_phase__nba\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhamming_decoder_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_decoder_tb___024root___dump_triggers__nba(Vhamming_decoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhamming_decoder_tb___024root___eval(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___eval\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vhamming_decoder_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hamming_decoder_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vhamming_decoder_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hamming_decoder_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhamming_decoder_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhamming_decoder_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhamming_decoder_tb___024root___eval_debug_assertions(Vhamming_decoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root___eval_debug_assertions\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
