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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(en,0,0);
        CData/*2:0*/ top__DOT__cae_0__DOT__flag_pe;
        CData/*0:0*/ top__DOT__cae_0__DOT__done_acc;
        CData/*0:0*/ top__DOT__cae_0__DOT____Vcellout__pe_0__done;
        CData/*0:0*/ top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp;
        CData/*0:0*/ top__DOT__cae_0__DOT____Vcellout__pe_1__done;
        CData/*0:0*/ top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp;
        CData/*0:0*/ top__DOT__cae_0__DOT____Vcellout__pe_2__done;
        CData/*0:0*/ top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp;
        CData/*4:0*/ top__DOT__cae_0__DOT__counter_accw;
        CData/*0:0*/ top__DOT__cae_0__DOT__en_acc;
        CData/*4:0*/ top__DOT__cae_0__DOT__fc_wcol;
        CData/*7:0*/ top__DOT__cae_0__DOT__current_max;
        CData/*1:0*/ top__DOT__cae_0__DOT__mcount;
        CData/*0:0*/ top__DOT__cae_0__DOT__rst_ews;
        CData/*7:0*/ top__DOT__cae_0__DOT____Vlvbound_h0a5ffb24__0;
        CData/*7:0*/ top__DOT__cae_0__DOT____Vlvbound_h0a5ffb24__1;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__5;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__4;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__3;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__2;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__1;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__0;
        CData/*0:0*/ top__DOT__cae_0__DOT__pe_0__DOT__flag_en;
        CData/*4:0*/ top__DOT__cae_0__DOT__pe_0__DOT__counter;
        CData/*1:0*/ top__DOT__cae_0__DOT__pe_0__DOT__state;
        CData/*1:0*/ top__DOT__cae_0__DOT__pe_0__DOT__next_state;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__5;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__4;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__3;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__2;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__1;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__0;
        CData/*0:0*/ top__DOT__cae_0__DOT__pe_1__DOT__flag_en;
        CData/*4:0*/ top__DOT__cae_0__DOT__pe_1__DOT__counter;
        CData/*1:0*/ top__DOT__cae_0__DOT__pe_1__DOT__state;
        CData/*1:0*/ top__DOT__cae_0__DOT__pe_1__DOT__next_state;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__5;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__4;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__3;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__2;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__1;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__0;
        CData/*0:0*/ top__DOT__cae_0__DOT__pe_2__DOT__flag_en;
        CData/*4:0*/ top__DOT__cae_0__DOT__pe_2__DOT__counter;
        CData/*1:0*/ top__DOT__cae_0__DOT__pe_2__DOT__state;
        CData/*1:0*/ top__DOT__cae_0__DOT__pe_2__DOT__next_state;
        CData/*4:0*/ top__DOT__cae_0__DOT__acc_0__DOT__counter;
        CData/*7:0*/ top__DOT__cae_0__DOT__ewise_0__DOT__qdata;
        CData/*7:0*/ top__DOT__cae_0__DOT__ewise_0__DOT__redata;
        CData/*7:0*/ top__DOT__cae_0__DOT__ewise_0__DOT__mdata;
        CData/*0:0*/ top__DOT__cae_0__DOT__ewise_0__DOT__comp_0__DOT__counter;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(layer,31,0);
        VL_IN(bias_in,31,0);
        IData/*17:0*/ top__DOT__cae_0__DOT____Vcellout__pe_0__psum;
        IData/*17:0*/ top__DOT__cae_0__DOT____Vcellout__pe_1__psum;
        IData/*17:0*/ top__DOT__cae_0__DOT____Vcellout__pe_2__psum;
        IData/*31:0*/ top__DOT__cae_0__DOT__inter_buffer_1;
        IData/*31:0*/ top__DOT__cae_0__DOT__acc_0__DOT__tsum;
        IData/*31:0*/ __VstlIterCount;
    };
    struct {
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_IN8(data_in[3][28],7,0);
        VL_IN8(weight_in[28],7,0);
        VL_OUT8(data_out[3],7,0);
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__inter_buffer_0;
        VlUnpacked<CData/*7:0*/, 28> top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in;
        VlUnpacked<CData/*7:0*/, 28> top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in;
        VlUnpacked<CData/*7:0*/, 28> top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__psum;
        VlUnpacked<CData/*7:0*/, 28> top__DOT__cae_0__DOT__pe_0__DOT__data_row;
        VlUnpacked<CData/*7:0*/, 28> top__DOT__cae_0__DOT__pe_0__DOT__weight_row;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_0__DOT__data;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_0__DOT__weight;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p;
        VlUnpacked<CData/*7:0*/, 28> top__DOT__cae_0__DOT__pe_1__DOT__data_row;
        VlUnpacked<CData/*7:0*/, 28> top__DOT__cae_0__DOT__pe_1__DOT__weight_row;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_1__DOT__data;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_1__DOT__weight;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p;
        VlUnpacked<CData/*7:0*/, 28> top__DOT__cae_0__DOT__pe_2__DOT__data_row;
        VlUnpacked<CData/*7:0*/, 28> top__DOT__cae_0__DOT__pe_2__DOT__weight_row;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_2__DOT__data;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_2__DOT__weight;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
