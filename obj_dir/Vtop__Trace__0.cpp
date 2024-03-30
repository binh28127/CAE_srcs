// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->top__DOT__pe_0__DOT__data_row),56);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pe_0__DOT__weight_row),24);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__pe_0__DOT__state),2);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__pe_0__DOT__next_state),2);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__pe_0__DOT__counter),3);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__pe_0__DOT__flag));
    }
    bufp->chgBit(oldp+7,(vlSelf->clk_i));
    bufp->chgBit(oldp+8,(vlSelf->rst));
    bufp->chgBit(oldp+9,(vlSelf->en));
    bufp->chgQData(oldp+10,(vlSelf->data_in),56);
    bufp->chgIData(oldp+12,(vlSelf->weight_in),24);
    bufp->chgWData(oldp+13,(vlSelf->psum_in),80);
    bufp->chgWData(oldp+16,(vlSelf->psum_out),80);
    bufp->chgBit(oldp+19,(vlSelf->done));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
