// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__5 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__4 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__3 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__2 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__1 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__0 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__5 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__4 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__3 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__2 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__1 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__0 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__5 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__4 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__3 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__2 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__1 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__0 
        = (0xffU & VL_RAND_RESET_I(8));
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 6, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__cae_0__DOT__flag_pe = (((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp)));
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[0U] 
        = vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__psum;
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[1U] 
        = vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__psum;
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[2U] 
        = vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__psum;
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[0U] 
        = (0x3ffffU & (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                       [0U] * vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                       [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[1U] 
        = (0x3ffffU & (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                       [1U] * vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                       [1U]));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[2U] 
        = (0x3ffffU & (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                       [2U] * vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                       [2U]));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[0U] 
        = (0x3ffffU & (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                       [0U] * vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                       [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[1U] 
        = (0x3ffffU & (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                       [1U] * vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                       [1U]));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[2U] 
        = (0x3ffffU & (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                       [2U] * vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                       [2U]));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[0U] 
        = (0x3ffffU & (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                       [0U] * vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                       [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[1U] 
        = (0x3ffffU & (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                       [1U] * vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                       [1U]));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[2U] 
        = (0x3ffffU & (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                       [2U] * vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                       [2U]));
    vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__qdata 
        = ((0xffU == (0xffU & (vlSelf->top__DOT__cae_0__DOT__inter_buffer_1 
                               >> 0xcU))) ? 0xffU : 
           (0xffU & ((vlSelf->top__DOT__cae_0__DOT__inter_buffer_1 
                      >> 0xcU) + (1U & (vlSelf->top__DOT__cae_0__DOT__inter_buffer_1 
                                        >> 0xbU)))));
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x1bU] 
        = vlSelf->data_in[0U][0x1bU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x1aU] 
        = vlSelf->data_in[0U][0x1aU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x19U] 
        = vlSelf->data_in[0U][0x19U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x18U] 
        = vlSelf->data_in[0U][0x18U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x17U] 
        = vlSelf->data_in[0U][0x17U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x16U] 
        = vlSelf->data_in[0U][0x16U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x15U] 
        = vlSelf->data_in[0U][0x15U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x14U] 
        = vlSelf->data_in[0U][0x14U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x13U] 
        = vlSelf->data_in[0U][0x13U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x12U] 
        = vlSelf->data_in[0U][0x12U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x11U] 
        = vlSelf->data_in[0U][0x11U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0x10U] 
        = vlSelf->data_in[0U][0x10U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0xfU] 
        = vlSelf->data_in[0U][0xfU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0xeU] 
        = vlSelf->data_in[0U][0xeU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0xdU] 
        = vlSelf->data_in[0U][0xdU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0xcU] 
        = vlSelf->data_in[0U][0xcU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0xbU] 
        = vlSelf->data_in[0U][0xbU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0xaU] 
        = vlSelf->data_in[0U][0xaU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[9U] 
        = vlSelf->data_in[0U][9U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[8U] 
        = vlSelf->data_in[0U][8U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[7U] 
        = vlSelf->data_in[0U][7U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[6U] 
        = vlSelf->data_in[0U][6U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[5U] 
        = vlSelf->data_in[0U][5U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[4U] 
        = vlSelf->data_in[0U][4U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[3U] 
        = vlSelf->data_in[0U][3U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[2U] 
        = vlSelf->data_in[0U][2U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[1U] 
        = vlSelf->data_in[0U][1U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0U] 
        = vlSelf->data_in[0U][0U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x1bU] 
        = vlSelf->data_in[1U][0x1bU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x1aU] 
        = vlSelf->data_in[1U][0x1aU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x19U] 
        = vlSelf->data_in[1U][0x19U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x18U] 
        = vlSelf->data_in[1U][0x18U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x17U] 
        = vlSelf->data_in[1U][0x17U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x16U] 
        = vlSelf->data_in[1U][0x16U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x15U] 
        = vlSelf->data_in[1U][0x15U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x14U] 
        = vlSelf->data_in[1U][0x14U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x13U] 
        = vlSelf->data_in[1U][0x13U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x12U] 
        = vlSelf->data_in[1U][0x12U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x11U] 
        = vlSelf->data_in[1U][0x11U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0x10U] 
        = vlSelf->data_in[1U][0x10U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0xfU] 
        = vlSelf->data_in[1U][0xfU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0xeU] 
        = vlSelf->data_in[1U][0xeU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0xdU] 
        = vlSelf->data_in[1U][0xdU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0xcU] 
        = vlSelf->data_in[1U][0xcU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0xbU] 
        = vlSelf->data_in[1U][0xbU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0xaU] 
        = vlSelf->data_in[1U][0xaU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[9U] 
        = vlSelf->data_in[1U][9U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[8U] 
        = vlSelf->data_in[1U][8U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[7U] 
        = vlSelf->data_in[1U][7U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[6U] 
        = vlSelf->data_in[1U][6U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[5U] 
        = vlSelf->data_in[1U][5U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[4U] 
        = vlSelf->data_in[1U][4U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[3U] 
        = vlSelf->data_in[1U][3U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[2U] 
        = vlSelf->data_in[1U][2U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[1U] 
        = vlSelf->data_in[1U][1U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0U] 
        = vlSelf->data_in[1U][0U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x1bU] 
        = vlSelf->data_in[2U][0x1bU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x1aU] 
        = vlSelf->data_in[2U][0x1aU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x19U] 
        = vlSelf->data_in[2U][0x19U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x18U] 
        = vlSelf->data_in[2U][0x18U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x17U] 
        = vlSelf->data_in[2U][0x17U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x16U] 
        = vlSelf->data_in[2U][0x16U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x15U] 
        = vlSelf->data_in[2U][0x15U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x14U] 
        = vlSelf->data_in[2U][0x14U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x13U] 
        = vlSelf->data_in[2U][0x13U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x12U] 
        = vlSelf->data_in[2U][0x12U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x11U] 
        = vlSelf->data_in[2U][0x11U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0x10U] 
        = vlSelf->data_in[2U][0x10U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0xfU] 
        = vlSelf->data_in[2U][0xfU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0xeU] 
        = vlSelf->data_in[2U][0xeU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0xdU] 
        = vlSelf->data_in[2U][0xdU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0xcU] 
        = vlSelf->data_in[2U][0xcU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0xbU] 
        = vlSelf->data_in[2U][0xbU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0xaU] 
        = vlSelf->data_in[2U][0xaU];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[9U] 
        = vlSelf->data_in[2U][9U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[8U] 
        = vlSelf->data_in[2U][8U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[7U] 
        = vlSelf->data_in[2U][7U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[6U] 
        = vlSelf->data_in[2U][6U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[5U] 
        = vlSelf->data_in[2U][5U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[4U] 
        = vlSelf->data_in[2U][4U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[3U] 
        = vlSelf->data_in[2U][3U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[2U] 
        = vlSelf->data_in[2U][2U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[1U] 
        = vlSelf->data_in[2U][1U];
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0U] 
        = vlSelf->data_in[2U][0U];
    vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__redata 
        = ((0U < (IData)(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__qdata))
            ? (IData)(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__qdata)
            : 0U);
    vlSelf->top__DOT__cae_0__DOT__current_max = ((1U 
                                                  == vlSelf->layer)
                                                  ? (IData)(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__redata)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__comp_0__DOT__counter)
                                                   ? (IData)(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__mdata)
                                                   : 0U));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->layer = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 28; ++__Vi1) {
            vlSelf->data_in[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->weight_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->bias_in = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT__flag_pe = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cae_0__DOT__done_acc = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__psum = VL_RAND_RESET_I(18);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__psum = VL_RAND_RESET_I(18);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__psum = VL_RAND_RESET_I(18);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__psum[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT__counter_accw = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__en_acc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT__fc_wcol = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__current_max = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__mcount = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cae_0__DOT__rst_ews = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT____Vlvbound_h0a5ffb24__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT____Vlvbound_h0a5ffb24__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h9b4b55e7__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__flag_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__next_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h9b4b55e7__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__flag_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__next_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h9b4b55e7__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__flag_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__next_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__qdata = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__redata = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__mdata = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__comp_0__DOT__counter = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
