// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+11,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 55,0);
    tracep->declBus(c+13,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declArray(c+14,"psum_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 79,0);
    tracep->declArray(c+17,"psum_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 79,0);
    tracep->declBit(c+20,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+8,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+11,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 55,0);
    tracep->declBus(c+13,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declArray(c+14,"psum_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 79,0);
    tracep->declArray(c+17,"psum_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 79,0);
    tracep->declBit(c+20,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("pe_0 ");
    tracep->declBit(c+8,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+11,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 55,0);
    tracep->declBus(c+13,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declArray(c+14,"psum_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 79,0);
    tracep->declArray(c+17,"psum_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 79,0);
    tracep->declBit(c+20,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 55,0);
    tracep->declBus(c+3,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declArray(c+21,"psum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 79,0);
    tracep->declBus(c+24,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+25,"res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,"next_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+27,"INPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+28,"COMP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+29,"OUPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBit(c+7,"flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->top__DOT__pe_0__DOT__data_row),56);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pe_0__DOT__weight_row),24);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__pe_0__DOT__state),2);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__pe_0__DOT__next_state),2);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__pe_0__DOT__counter),3);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__pe_0__DOT__flag));
    bufp->fullBit(oldp+8,(vlSelf->clk_i));
    bufp->fullBit(oldp+9,(vlSelf->rst));
    bufp->fullBit(oldp+10,(vlSelf->en));
    bufp->fullQData(oldp+11,(vlSelf->data_in),56);
    bufp->fullIData(oldp+13,(vlSelf->weight_in),24);
    bufp->fullWData(oldp+14,(vlSelf->psum_in),80);
    bufp->fullWData(oldp+17,(vlSelf->psum_out),80);
    bufp->fullBit(oldp+20,(vlSelf->done));
    bufp->fullWData(oldp+21,(vlSelf->top__DOT__pe_0__DOT__psum),80);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__pe_0__DOT__data),24);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__pe_0__DOT__res),16);
    bufp->fullCData(oldp+26,(0U),2);
    bufp->fullCData(oldp+27,(1U),2);
    bufp->fullCData(oldp+28,(2U),2);
    bufp->fullCData(oldp+29,(3U),2);
}
