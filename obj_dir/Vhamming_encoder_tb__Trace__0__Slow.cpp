// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhamming_encoder_tb__Syms.h"


VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_init_sub__TOP__0(Vhamming_encoder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_init_sub__TOP__0\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("hamming_encoder_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"message",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+7,0,"hamming_message",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"message",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+7,0,"hamming_message",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"parity1_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"parity2_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"parity3_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"parity4_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("parity_pos", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"message_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+8,0,"hamming_message_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_init_top(Vhamming_encoder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_init_top\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhamming_encoder_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhamming_encoder_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhamming_encoder_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_register(Vhamming_encoder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_register\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vhamming_encoder_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vhamming_encoder_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vhamming_encoder_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vhamming_encoder_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_const_0_sub_0(Vhamming_encoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_const_0\n"); );
    // Body
    Vhamming_encoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_encoder_tb___024root*>(voidSelf);
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vhamming_encoder_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_const_0_sub_0(Vhamming_encoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_const_0_sub_0\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+9,(0xaaa8U),16);
    bufp->fullSData(oldp+10,(0xccc8U),16);
    bufp->fullSData(oldp+11,(0xf0e0U),16);
    bufp->fullSData(oldp+12,(0xfe00U),16);
    bufp->fullIData(oldp+13,(0x0000000bU),32);
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_full_0_sub_0(Vhamming_encoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_full_0\n"); );
    // Body
    Vhamming_encoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_encoder_tb___024root*>(voidSelf);
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vhamming_encoder_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root__trace_full_0_sub_0(Vhamming_encoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_full_0_sub_0\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[4]),32);
    bufp->fullSData(oldp+6,(vlSelfRef.hamming_encoder_tb__DOT__message),11);
    bufp->fullSData(oldp+7,(vlSelfRef.hamming_encoder_tb__DOT__hamming_message),16);
    bufp->fullIData(oldp+8,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index),32);
}
