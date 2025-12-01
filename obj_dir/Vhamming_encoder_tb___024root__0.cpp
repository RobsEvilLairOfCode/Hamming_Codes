// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_encoder_tb.h for the primary calling header

#include "Vhamming_encoder_tb__pch.h"

VL_ATTR_COLD void Vhamming_encoder_tb___024root___eval_initial__TOP(Vhamming_encoder_tb___024root* vlSelf);
VlCoroutine Vhamming_encoder_tb___024root___eval_initial__TOP__Vtiming__0(Vhamming_encoder_tb___024root* vlSelf);

void Vhamming_encoder_tb___024root___eval_initial(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_initial\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhamming_encoder_tb___024root___eval_initial__TOP(vlSelf);
    Vhamming_encoder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vhamming_encoder_tb___024root___eval_initial__TOP__Vtiming__0(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hamming_encoder_tb__DOT__message = 0x018eU;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "hamming_encoder_tb.sv", 
                                         15);
    VL_FINISH_MT("hamming_encoder_tb.sv", 16, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_encoder_tb___024root___dump_triggers__act(Vhamming_encoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhamming_encoder_tb___024root___eval_triggers__act(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_triggers__act\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhamming_encoder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vhamming_encoder_tb___024root___act_sequent__TOP__0(Vhamming_encoder_tb___024root* vlSelf);

void Vhamming_encoder_tb___024root___eval_act(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_act\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vhamming_encoder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vhamming_encoder_tb___024root___act_sequent__TOP__0(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___act_sequent__TOP__0\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index = 0U;
    if ((0U == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & (IData)(vlSelfRef.hamming_encoder_tb__DOT__message)) 
                             << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 1U)) << (0x0000000fU 
                                                & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 2U)) << (0x0000000fU 
                                                & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 3U)) << (0x0000000fU 
                                                & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 4U)) << (0x0000000fU 
                                                & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 5U)) << (0x0000000fU 
                                                & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 6U)) << (0x0000000fU 
                                                & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 7U)) << (0x0000000fU 
                                                & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 8U)) << (0x0000000fU 
                                                & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 9U)) << (0x0000000fU 
                                                & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [0U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [1U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [2U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [3U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
         == vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos
         [4U])) {
        vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = (((~ ((IData)(1U) << (0x0000000fU & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))) 
            & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.hamming_encoder_tb__DOT__message) 
                                    >> 0x0aU)) << (0x0000000fU 
                                                   & vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index);
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = ((0xfffdU & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (2U & (VL_REDXOR_32((0xaaa8U & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message))) 
                    << 1U)));
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = ((0xfffbU & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (4U & (VL_REDXOR_32((0xccc8U & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message))) 
                    << 2U)));
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = ((0xffefU & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x00000010U & (VL_REDXOR_32((0xf0e0U 
                                           & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message))) 
                             << 4U)));
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = ((0xfeffU & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (0x00000100U & (VL_REDXOR_32((0xfe00U 
                                           & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message))) 
                             << 8U)));
    vlSelfRef.hamming_encoder_tb__DOT__hamming_message 
        = ((0xfffeU & (IData)(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)) 
           | (1U & VL_REDXOR_16(vlSelfRef.hamming_encoder_tb__DOT__hamming_message)));
}

void Vhamming_encoder_tb___024root___eval_nba(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_nba\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhamming_encoder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vhamming_encoder_tb___024root___timing_resume(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___timing_resume\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

bool Vhamming_encoder_tb___024root___eval_phase__act(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_phase__act\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhamming_encoder_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhamming_encoder_tb___024root___timing_resume(vlSelf);
        Vhamming_encoder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhamming_encoder_tb___024root___eval_phase__nba(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_phase__nba\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhamming_encoder_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_encoder_tb___024root___dump_triggers__nba(Vhamming_encoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhamming_encoder_tb___024root___eval(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vhamming_encoder_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hamming_encoder_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vhamming_encoder_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hamming_encoder_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhamming_encoder_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhamming_encoder_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhamming_encoder_tb___024root___eval_debug_assertions(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_debug_assertions\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
