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
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[15]),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[16]),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[17]),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[18]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[19]),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[20]),8);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[21]),8);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[22]),8);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[23]),8);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[24]),8);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[25]),8);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[26]),8);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[27]),8);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0]),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[1]),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[2]),8);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[3]),8);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[4]),8);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[5]),8);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[6]),8);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[7]),8);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[8]),8);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[9]),8);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[10]),8);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[11]),8);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[12]),8);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[13]),8);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[14]),8);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[15]),8);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[16]),8);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[17]),8);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[18]),8);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[19]),8);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[20]),8);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[21]),8);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[22]),8);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[23]),8);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[24]),8);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[25]),8);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[26]),8);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[27]),8);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0]),8);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[1]),8);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[2]),8);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[3]),8);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[4]),8);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[5]),8);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[6]),8);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[7]),8);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[8]),8);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[9]),8);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[10]),8);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[11]),8);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[12]),8);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[13]),8);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[14]),8);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[15]),8);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[16]),8);
        bufp->chgCData(oldp+73,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[17]),8);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[18]),8);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[19]),8);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[20]),8);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[21]),8);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[22]),8);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[23]),8);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[24]),8);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[25]),8);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[26]),8);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[27]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__cae_0__DOT__flag_pe),3);
        bufp->chgCData(oldp+85,((((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__done) 
                                  << 2U) | (((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__done) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__done)))),3);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[0]),18);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[1]),18);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[2]),18);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_1),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__cae_0__DOT__psum[0]),18);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__cae_0__DOT__psum[1]),18);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__cae_0__DOT__psum[2]),18);
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__cae_0__DOT__counter_accw),5);
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__cae_0__DOT__en_acc));
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__cae_0__DOT__fc_wcol),5);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__cae_0__DOT__mcount),2);
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__cae_0__DOT__rst_ews));
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__comp_0__DOT__counter));
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum),32);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter),5);
        bufp->chgCData(oldp+101,(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__qdata),8);
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__redata),8);
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__mdata),8);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__psum),18);
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp));
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__done));
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0]),8);
        bufp->chgCData(oldp+108,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[1]),8);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[2]),8);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[3]),8);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[4]),8);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[5]),8);
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[6]),8);
        bufp->chgCData(oldp+114,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[7]),8);
        bufp->chgCData(oldp+115,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[8]),8);
        bufp->chgCData(oldp+116,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[9]),8);
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[10]),8);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[11]),8);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[12]),8);
        bufp->chgCData(oldp+120,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[13]),8);
        bufp->chgCData(oldp+121,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[14]),8);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[15]),8);
        bufp->chgCData(oldp+123,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[16]),8);
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[17]),8);
        bufp->chgCData(oldp+125,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[18]),8);
        bufp->chgCData(oldp+126,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[19]),8);
        bufp->chgCData(oldp+127,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[20]),8);
        bufp->chgCData(oldp+128,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[21]),8);
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[22]),8);
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[23]),8);
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[24]),8);
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[25]),8);
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[26]),8);
        bufp->chgCData(oldp+134,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[27]),8);
        bufp->chgCData(oldp+135,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0]),8);
        bufp->chgCData(oldp+136,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[1]),8);
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[2]),8);
        bufp->chgCData(oldp+138,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[3]),8);
        bufp->chgCData(oldp+139,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[4]),8);
        bufp->chgCData(oldp+140,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[5]),8);
        bufp->chgCData(oldp+141,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[6]),8);
        bufp->chgCData(oldp+142,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[7]),8);
        bufp->chgCData(oldp+143,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[8]),8);
        bufp->chgCData(oldp+144,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[9]),8);
        bufp->chgCData(oldp+145,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[10]),8);
        bufp->chgCData(oldp+146,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[11]),8);
        bufp->chgCData(oldp+147,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[12]),8);
        bufp->chgCData(oldp+148,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[13]),8);
        bufp->chgCData(oldp+149,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[14]),8);
        bufp->chgCData(oldp+150,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[15]),8);
        bufp->chgCData(oldp+151,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[16]),8);
        bufp->chgCData(oldp+152,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[17]),8);
        bufp->chgCData(oldp+153,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[18]),8);
        bufp->chgCData(oldp+154,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[19]),8);
        bufp->chgCData(oldp+155,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[20]),8);
        bufp->chgCData(oldp+156,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[21]),8);
        bufp->chgCData(oldp+157,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[22]),8);
        bufp->chgCData(oldp+158,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[23]),8);
        bufp->chgCData(oldp+159,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[24]),8);
        bufp->chgCData(oldp+160,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[25]),8);
        bufp->chgCData(oldp+161,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[26]),8);
        bufp->chgCData(oldp+162,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[27]),8);
        bufp->chgCData(oldp+163,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[0]),8);
        bufp->chgCData(oldp+164,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[1]),8);
        bufp->chgCData(oldp+165,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[2]),8);
        bufp->chgCData(oldp+166,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[0]),8);
        bufp->chgCData(oldp+167,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[1]),8);
        bufp->chgCData(oldp+168,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[2]),8);
        bufp->chgIData(oldp+169,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                                               [0U] 
                                               * vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                                               [0U]) 
                                              + ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                                                  [1U] 
                                                  * 
                                                  vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                                                  [1U]) 
                                                 + 
                                                 (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                                                  [2U] 
                                                  * 
                                                  vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                                                  [2U]))))),18);
        bufp->chgBit(oldp+170,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__flag_en));
        bufp->chgCData(oldp+171,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter),5);
        bufp->chgCData(oldp+172,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state),2);
        bufp->chgCData(oldp+173,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__next_state),2);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[0]),18);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[1]),18);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[2]),18);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__psum),18);
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp));
        bufp->chgBit(oldp+179,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__done));
        bufp->chgCData(oldp+180,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0]),8);
        bufp->chgCData(oldp+181,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[1]),8);
        bufp->chgCData(oldp+182,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[2]),8);
        bufp->chgCData(oldp+183,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[3]),8);
        bufp->chgCData(oldp+184,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[4]),8);
        bufp->chgCData(oldp+185,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[5]),8);
        bufp->chgCData(oldp+186,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[6]),8);
        bufp->chgCData(oldp+187,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[7]),8);
        bufp->chgCData(oldp+188,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[8]),8);
        bufp->chgCData(oldp+189,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[9]),8);
        bufp->chgCData(oldp+190,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[10]),8);
        bufp->chgCData(oldp+191,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[11]),8);
        bufp->chgCData(oldp+192,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[12]),8);
        bufp->chgCData(oldp+193,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[13]),8);
        bufp->chgCData(oldp+194,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[14]),8);
        bufp->chgCData(oldp+195,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[15]),8);
        bufp->chgCData(oldp+196,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[16]),8);
        bufp->chgCData(oldp+197,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[17]),8);
        bufp->chgCData(oldp+198,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[18]),8);
        bufp->chgCData(oldp+199,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[19]),8);
        bufp->chgCData(oldp+200,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[20]),8);
        bufp->chgCData(oldp+201,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[21]),8);
        bufp->chgCData(oldp+202,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[22]),8);
        bufp->chgCData(oldp+203,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[23]),8);
        bufp->chgCData(oldp+204,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[24]),8);
        bufp->chgCData(oldp+205,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[25]),8);
        bufp->chgCData(oldp+206,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[26]),8);
        bufp->chgCData(oldp+207,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[27]),8);
        bufp->chgCData(oldp+208,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0]),8);
        bufp->chgCData(oldp+209,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[1]),8);
        bufp->chgCData(oldp+210,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[2]),8);
        bufp->chgCData(oldp+211,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[3]),8);
        bufp->chgCData(oldp+212,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[4]),8);
        bufp->chgCData(oldp+213,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[5]),8);
        bufp->chgCData(oldp+214,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[6]),8);
        bufp->chgCData(oldp+215,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[7]),8);
        bufp->chgCData(oldp+216,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[8]),8);
        bufp->chgCData(oldp+217,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[9]),8);
        bufp->chgCData(oldp+218,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[10]),8);
        bufp->chgCData(oldp+219,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[11]),8);
        bufp->chgCData(oldp+220,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[12]),8);
        bufp->chgCData(oldp+221,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[13]),8);
        bufp->chgCData(oldp+222,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[14]),8);
        bufp->chgCData(oldp+223,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[15]),8);
        bufp->chgCData(oldp+224,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[16]),8);
        bufp->chgCData(oldp+225,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[17]),8);
        bufp->chgCData(oldp+226,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[18]),8);
        bufp->chgCData(oldp+227,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[19]),8);
        bufp->chgCData(oldp+228,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[20]),8);
        bufp->chgCData(oldp+229,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[21]),8);
        bufp->chgCData(oldp+230,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[22]),8);
        bufp->chgCData(oldp+231,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[23]),8);
        bufp->chgCData(oldp+232,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[24]),8);
        bufp->chgCData(oldp+233,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[25]),8);
        bufp->chgCData(oldp+234,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[26]),8);
        bufp->chgCData(oldp+235,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[27]),8);
        bufp->chgCData(oldp+236,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[0]),8);
        bufp->chgCData(oldp+237,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[1]),8);
        bufp->chgCData(oldp+238,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[2]),8);
        bufp->chgCData(oldp+239,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[0]),8);
        bufp->chgCData(oldp+240,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[1]),8);
        bufp->chgCData(oldp+241,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[2]),8);
        bufp->chgIData(oldp+242,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                                               [0U] 
                                               * vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                                               [0U]) 
                                              + ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                                                  [1U] 
                                                  * 
                                                  vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                                                  [1U]) 
                                                 + 
                                                 (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                                                  [2U] 
                                                  * 
                                                  vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                                                  [2U]))))),18);
        bufp->chgBit(oldp+243,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__flag_en));
        bufp->chgCData(oldp+244,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter),5);
        bufp->chgCData(oldp+245,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state),2);
        bufp->chgCData(oldp+246,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__next_state),2);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[0]),18);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[1]),18);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[2]),18);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__psum),18);
        bufp->chgBit(oldp+251,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp));
        bufp->chgBit(oldp+252,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__done));
        bufp->chgCData(oldp+253,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0]),8);
        bufp->chgCData(oldp+254,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[1]),8);
        bufp->chgCData(oldp+255,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[2]),8);
        bufp->chgCData(oldp+256,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[3]),8);
        bufp->chgCData(oldp+257,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[4]),8);
        bufp->chgCData(oldp+258,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[5]),8);
        bufp->chgCData(oldp+259,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[6]),8);
        bufp->chgCData(oldp+260,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[7]),8);
        bufp->chgCData(oldp+261,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[8]),8);
        bufp->chgCData(oldp+262,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[9]),8);
        bufp->chgCData(oldp+263,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[10]),8);
        bufp->chgCData(oldp+264,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[11]),8);
        bufp->chgCData(oldp+265,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[12]),8);
        bufp->chgCData(oldp+266,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[13]),8);
        bufp->chgCData(oldp+267,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[14]),8);
        bufp->chgCData(oldp+268,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[15]),8);
        bufp->chgCData(oldp+269,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[16]),8);
        bufp->chgCData(oldp+270,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[17]),8);
        bufp->chgCData(oldp+271,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[18]),8);
        bufp->chgCData(oldp+272,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[19]),8);
        bufp->chgCData(oldp+273,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[20]),8);
        bufp->chgCData(oldp+274,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[21]),8);
        bufp->chgCData(oldp+275,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[22]),8);
        bufp->chgCData(oldp+276,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[23]),8);
        bufp->chgCData(oldp+277,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[24]),8);
        bufp->chgCData(oldp+278,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[25]),8);
        bufp->chgCData(oldp+279,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[26]),8);
        bufp->chgCData(oldp+280,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[27]),8);
        bufp->chgCData(oldp+281,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0]),8);
        bufp->chgCData(oldp+282,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[1]),8);
        bufp->chgCData(oldp+283,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[2]),8);
        bufp->chgCData(oldp+284,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[3]),8);
        bufp->chgCData(oldp+285,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[4]),8);
        bufp->chgCData(oldp+286,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[5]),8);
        bufp->chgCData(oldp+287,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[6]),8);
        bufp->chgCData(oldp+288,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[7]),8);
        bufp->chgCData(oldp+289,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[8]),8);
        bufp->chgCData(oldp+290,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[9]),8);
        bufp->chgCData(oldp+291,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[10]),8);
        bufp->chgCData(oldp+292,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[11]),8);
        bufp->chgCData(oldp+293,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[12]),8);
        bufp->chgCData(oldp+294,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[13]),8);
        bufp->chgCData(oldp+295,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[14]),8);
        bufp->chgCData(oldp+296,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[15]),8);
        bufp->chgCData(oldp+297,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[16]),8);
        bufp->chgCData(oldp+298,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[17]),8);
        bufp->chgCData(oldp+299,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[18]),8);
        bufp->chgCData(oldp+300,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[19]),8);
        bufp->chgCData(oldp+301,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[20]),8);
        bufp->chgCData(oldp+302,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[21]),8);
        bufp->chgCData(oldp+303,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[22]),8);
        bufp->chgCData(oldp+304,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[23]),8);
        bufp->chgCData(oldp+305,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[24]),8);
        bufp->chgCData(oldp+306,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[25]),8);
        bufp->chgCData(oldp+307,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[26]),8);
        bufp->chgCData(oldp+308,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[27]),8);
        bufp->chgCData(oldp+309,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[0]),8);
        bufp->chgCData(oldp+310,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[1]),8);
        bufp->chgCData(oldp+311,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[2]),8);
        bufp->chgCData(oldp+312,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[0]),8);
        bufp->chgCData(oldp+313,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[1]),8);
        bufp->chgCData(oldp+314,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[2]),8);
        bufp->chgIData(oldp+315,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                                               [0U] 
                                               * vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                                               [0U]) 
                                              + ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                                                  [1U] 
                                                  * 
                                                  vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                                                  [1U]) 
                                                 + 
                                                 (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                                                  [2U] 
                                                  * 
                                                  vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                                                  [2U]))))),18);
        bufp->chgBit(oldp+316,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__flag_en));
        bufp->chgCData(oldp+317,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter),5);
        bufp->chgCData(oldp+318,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state),2);
        bufp->chgCData(oldp+319,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__next_state),2);
        bufp->chgIData(oldp+320,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[0]),18);
        bufp->chgIData(oldp+321,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[1]),18);
        bufp->chgIData(oldp+322,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[2]),18);
    }
    bufp->chgBit(oldp+323,(vlSelf->clk_i));
    bufp->chgBit(oldp+324,(vlSelf->rst));
    bufp->chgBit(oldp+325,(vlSelf->en));
    bufp->chgIData(oldp+326,(vlSelf->layer),32);
    bufp->chgCData(oldp+327,(vlSelf->weight_in[0]),8);
    bufp->chgCData(oldp+328,(vlSelf->weight_in[1]),8);
    bufp->chgCData(oldp+329,(vlSelf->weight_in[2]),8);
    bufp->chgCData(oldp+330,(vlSelf->weight_in[3]),8);
    bufp->chgCData(oldp+331,(vlSelf->weight_in[4]),8);
    bufp->chgCData(oldp+332,(vlSelf->weight_in[5]),8);
    bufp->chgCData(oldp+333,(vlSelf->weight_in[6]),8);
    bufp->chgCData(oldp+334,(vlSelf->weight_in[7]),8);
    bufp->chgCData(oldp+335,(vlSelf->weight_in[8]),8);
    bufp->chgCData(oldp+336,(vlSelf->weight_in[9]),8);
    bufp->chgCData(oldp+337,(vlSelf->weight_in[10]),8);
    bufp->chgCData(oldp+338,(vlSelf->weight_in[11]),8);
    bufp->chgCData(oldp+339,(vlSelf->weight_in[12]),8);
    bufp->chgCData(oldp+340,(vlSelf->weight_in[13]),8);
    bufp->chgCData(oldp+341,(vlSelf->weight_in[14]),8);
    bufp->chgCData(oldp+342,(vlSelf->weight_in[15]),8);
    bufp->chgCData(oldp+343,(vlSelf->weight_in[16]),8);
    bufp->chgCData(oldp+344,(vlSelf->weight_in[17]),8);
    bufp->chgCData(oldp+345,(vlSelf->weight_in[18]),8);
    bufp->chgCData(oldp+346,(vlSelf->weight_in[19]),8);
    bufp->chgCData(oldp+347,(vlSelf->weight_in[20]),8);
    bufp->chgCData(oldp+348,(vlSelf->weight_in[21]),8);
    bufp->chgCData(oldp+349,(vlSelf->weight_in[22]),8);
    bufp->chgCData(oldp+350,(vlSelf->weight_in[23]),8);
    bufp->chgCData(oldp+351,(vlSelf->weight_in[24]),8);
    bufp->chgCData(oldp+352,(vlSelf->weight_in[25]),8);
    bufp->chgCData(oldp+353,(vlSelf->weight_in[26]),8);
    bufp->chgCData(oldp+354,(vlSelf->weight_in[27]),8);
    bufp->chgIData(oldp+355,(vlSelf->bias_in),32);
    bufp->chgCData(oldp+356,(vlSelf->data_out[0]),8);
    bufp->chgCData(oldp+357,(vlSelf->data_out[1]),8);
    bufp->chgCData(oldp+358,(vlSelf->data_out[2]),8);
    bufp->chgCData(oldp+359,(vlSelf->top__DOT__cae_0__DOT__current_max),8);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
