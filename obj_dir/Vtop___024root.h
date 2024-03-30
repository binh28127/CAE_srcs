// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN64(data_in,55,0);
    VL_IN(weight_in,23,0);
    VL_OUT8(done,0,0);
    QData/*55:0*/ top__DOT__pe_0__DOT__data_row;
    IData/*23:0*/ top__DOT__pe_0__DOT__weight_row;
    IData/*23:0*/ top__DOT__pe_0__DOT__data;
    CData/*1:0*/ top__DOT__pe_0__DOT__state;
    CData/*1:0*/ top__DOT__pe_0__DOT__next_state;
    CData/*2:0*/ top__DOT__pe_0__DOT__counter;
    CData/*0:0*/ top__DOT__pe_0__DOT__flag;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(psum_in,79,0,3);
    VL_OUTW(psum_out,79,0,3);
    VlWide<3>/*79:0*/ top__DOT__pe_0__DOT__psum;
    SData/*15:0*/ top__DOT__pe_0__DOT__res;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
