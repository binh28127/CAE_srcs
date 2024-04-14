// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__8 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__7 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__6 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__5 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__4 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__3 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__2 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__1 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__0 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__8 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__7 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__6 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__5 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__4 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__3 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__2 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__1 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__0 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__8 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__7 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__6 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__5 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__4 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__3 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__2 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__1 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__0 
        = (0xffU & VL_RAND_RESET_I(8));
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->sum = vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum;
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                              [0U]));
    vlSelf->fc_line_done = vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__neg_fc_comp;
    vlSelf->top__DOT__cae_0__DOT__pe_comp = (((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp)));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[0U] 
        = (0x3ffffU & ((0xffU & vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a) 
                       * (0xffU & vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b)));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[1U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a 
                                 >> 8U)) * (0xffU & 
                                            (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b 
                                             >> 8U))));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[2U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a 
                                 >> 0x10U)) * (0xffU 
                                               & (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b 
                                                  >> 0x10U))));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[0U] 
        = (0x3ffffU & ((0xffU & vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a) 
                       * (0xffU & vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b)));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[1U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a 
                                 >> 8U)) * (0xffU & 
                                            (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b 
                                             >> 8U))));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[2U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a 
                                 >> 0x10U)) * (0xffU 
                                               & (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b 
                                                  >> 0x10U))));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[0U] 
        = (0x3ffffU & ((0xffU & vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a) 
                       * (0xffU & vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b)));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[1U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a 
                                 >> 8U)) * (0xffU & 
                                            (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b 
                                             >> 8U))));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[2U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a 
                                 >> 0x10U)) * (0xffU 
                                               & (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b 
                                                  >> 0x10U))));
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[0U] 
        = ((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp)
            ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                            [0U] + vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                            [1U]) + vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                           [2U])) : 0U);
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[1U] 
        = ((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp)
            ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                            [0U] + vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                            [1U]) + vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                           [2U])) : 0U);
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[2U] 
        = ((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp)
            ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                            [0U] + vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                            [1U]) + vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                           [2U])) : 0U);
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__acc_0__psum 
        = (((QData)((IData)(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0
                            [2U])) << 0x24U) | (((QData)((IData)(
                                                                 vlSelf->top__DOT__cae_0__DOT__inter_buffer_0
                                                                 [1U])) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__cae_0__DOT__inter_buffer_0
                                                                  [0U]))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    Vtop___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->layer = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(224, vlSelf->data_row1_in);
    VL_RAND_RESET_W(224, vlSelf->data_row2_in);
    VL_RAND_RESET_W(224, vlSelf->data_row3_in);
    VL_RAND_RESET_W(224, vlSelf->weight_row1_in);
    VL_RAND_RESET_W(224, vlSelf->weight_row2_in);
    VL_RAND_RESET_W(224, vlSelf->weight_row3_in);
    vlSelf->bias_in = VL_RAND_RESET_I(32);
    vlSelf->sum = VL_RAND_RESET_I(32);
    vlSelf->conv_comp = VL_RAND_RESET_I(1);
    vlSelf->fc_done = VL_RAND_RESET_I(1);
    vlSelf->fc_line_done = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_comp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__acc_0__psum = VL_RAND_RESET_Q(54);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__8 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__0 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a = VL_RAND_RESET_I(24);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__8 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__0 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a = VL_RAND_RESET_I(24);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__8 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__0 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<30; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a = VL_RAND_RESET_I(24);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__fc_comp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__pos_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__neg_fc_comp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__posedge_detect_enable__DOT__signalPrev = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__negedge_detect__DOT__signalPrev = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
