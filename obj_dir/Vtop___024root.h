// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(enable,0,0);
        VL_IN8(layer,0,0);
        VL_IN8(fc_wcol,4,0);
        VL_INW(data_row1_in,223,0,7);
        VL_INW(data_row2_in,223,0,7);
        VL_INW(data_row3_in,223,0,7);
        VL_INW(weight_row1_in,223,0,7);
        VL_INW(weight_row2_in,223,0,7);
        VL_INW(weight_row3_in,223,0,7);
        VL_OUTW(conv_out,103,0,4);
        VL_OUT8(conv_done,0,0);
        VL_OUT8(fc_done,0,0);
        VL_OUT8(fc_line_done,0,0);
        CData/*2:0*/ top__DOT__cae_0__DOT__pe_comp;
        CData/*0:0*/ top__DOT__cae_0__DOT__conv_comp;
        CData/*0:0*/ top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp;
        CData/*0:0*/ top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp;
        CData/*0:0*/ top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp;
        VlWide<4>/*103:0*/ top__DOT__cae_0__DOT____Vcellout__element_wise__dout;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__8;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__7;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__6;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__5;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__4;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__3;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__2;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__1;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__0;
        CData/*4:0*/ top__DOT__cae_0__DOT__pe_0__DOT__counter;
        CData/*1:0*/ top__DOT__cae_0__DOT__pe_0__DOT__state;
        IData/*23:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b;
        IData/*23:0*/ top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__8;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__7;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__6;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__5;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__4;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__3;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__2;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__1;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__0;
        CData/*4:0*/ top__DOT__cae_0__DOT__pe_1__DOT__counter;
        CData/*1:0*/ top__DOT__cae_0__DOT__pe_1__DOT__state;
        IData/*23:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b;
        IData/*23:0*/ top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__8;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__7;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__6;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__5;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__4;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__3;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__2;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__1;
        CData/*7:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__0;
        CData/*4:0*/ top__DOT__cae_0__DOT__pe_2__DOT__counter;
        CData/*1:0*/ top__DOT__cae_0__DOT__pe_2__DOT__state;
        IData/*23:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b;
        IData/*23:0*/ top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a;
        CData/*4:0*/ top__DOT__cae_0__DOT__acc_0__DOT__counter;
        CData/*0:0*/ top__DOT__cae_0__DOT__acc_0__DOT__fc_comp;
        CData/*0:0*/ top__DOT__cae_0__DOT__acc_0__DOT__pos_enable;
        CData/*0:0*/ top__DOT__cae_0__DOT__acc_0__DOT__neg_fc_comp;
    };
    struct {
        CData/*1:0*/ top__DOT__cae_0__DOT__acc_0__DOT__state;
        CData/*0:0*/ top__DOT__cae_0__DOT__acc_0__DOT__posedge_detect_enable__DOT__signalPrev;
        CData/*0:0*/ top__DOT__cae_0__DOT__acc_0__DOT__negedge_detect__DOT__signalPrev;
        CData/*7:0*/ top__DOT__cae_0__DOT__element_wise__DOT____Vxrand_h96fdabed__1;
        CData/*7:0*/ top__DOT__cae_0__DOT__element_wise__DOT____Vxrand_h96fdabed__0;
        CData/*7:0*/ top__DOT__cae_0__DOT__element_wise__DOT__redata_buffer;
        CData/*1:0*/ top__DOT__cae_0__DOT__element_wise__DOT__state;
        CData/*4:0*/ top__DOT__cae_0__DOT__element_wise__DOT__counter;
        CData/*3:0*/ top__DOT__cae_0__DOT__element_wise__DOT__counter_shifted;
        CData/*0:0*/ top__DOT__cae_0__DOT__element_wise__DOT__row_counter;
        CData/*7:0*/ top__DOT__cae_0__DOT__element_wise__DOT____Vlvbound_h61f0ed21__0;
        CData/*7:0*/ top__DOT__cae_0__DOT__element_wise__DOT____Vlvbound_h61f0ed21__1;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst;
        VL_IN(bias_in,31,0);
        VL_OUT(fc_out,31,0);
        QData/*53:0*/ top__DOT__cae_0__DOT____Vcellinp__acc_0__psum;
        IData/*31:0*/ top__DOT__cae_0__DOT__acc_0__DOT__tsum;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__inter_buffer_0;
        VlUnpacked<CData/*7:0*/, 30> top__DOT__cae_0__DOT__pe_0__DOT__data_row;
        VlUnpacked<CData/*7:0*/, 30> top__DOT__cae_0__DOT__pe_0__DOT__weight_row;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_0__DOT__data;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_0__DOT__weight;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p;
        VlUnpacked<CData/*7:0*/, 30> top__DOT__cae_0__DOT__pe_1__DOT__data_row;
        VlUnpacked<CData/*7:0*/, 30> top__DOT__cae_0__DOT__pe_1__DOT__weight_row;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_1__DOT__data;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_1__DOT__weight;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p;
        VlUnpacked<CData/*7:0*/, 30> top__DOT__cae_0__DOT__pe_2__DOT__data_row;
        VlUnpacked<CData/*7:0*/, 30> top__DOT__cae_0__DOT__pe_2__DOT__weight_row;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_2__DOT__data;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cae_0__DOT__pe_2__DOT__weight;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer;
        VlUnpacked<CData/*7:0*/, 13> top__DOT__cae_0__DOT__element_wise__DOT__mdata;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
