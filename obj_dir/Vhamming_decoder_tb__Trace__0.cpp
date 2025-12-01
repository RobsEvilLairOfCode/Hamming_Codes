// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhamming_decoder_tb__Syms.h"


void Vhamming_decoder_tb___024root__trace_chg_0_sub_0(Vhamming_decoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhamming_decoder_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root__trace_chg_0\n"); );
    // Body
    Vhamming_decoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_decoder_tb___024root*>(voidSelf);
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vhamming_decoder_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhamming_decoder_tb___024root__trace_chg_0_sub_0(Vhamming_decoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root__trace_chg_0_sub_0\n"); );
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__parity_pos[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__parity_pos[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__parity_pos[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__parity_pos[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__parity_pos[4]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgSData(oldp+5,(vlSelfRef.hamming_decoder_tb__DOT__message),11);
        bufp->chgBit(oldp+6,(vlSelfRef.hamming_decoder_tb__DOT__one_error));
        bufp->chgBit(oldp+7,(vlSelfRef.hamming_decoder_tb__DOT__two_errors));
        bufp->chgSData(oldp+8,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__revised_message),16);
        bufp->chgCData(oldp+9,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__error_pos),4);
        bufp->chgBit(oldp+10,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit1_check));
        bufp->chgBit(oldp+11,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit2_check));
        bufp->chgBit(oldp+12,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit3_check));
        bufp->chgBit(oldp+13,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_bit4_check));
        bufp->chgCData(oldp+14,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_1_bits),4);
        bufp->chgBit(oldp+15,(vlSelfRef.hamming_decoder_tb__DOT__dut__DOT__unnamedblk1__DOT__parity_check_2));
    }
    bufp->chgSData(oldp+16,(vlSelfRef.hamming_decoder_tb__DOT__hamming_message),16);
}

void Vhamming_decoder_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_decoder_tb___024root__trace_cleanup\n"); );
    // Body
    Vhamming_decoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_decoder_tb___024root*>(voidSelf);
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
