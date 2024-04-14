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
    tracep->declBit(c+247,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+251,"fc_wcol",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declArray(c+252,"data_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+259,"data_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+266,"data_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+273,"weight_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+280,"weight_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+287,"weight_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+294,"bias_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+295,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+296,"conv_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"fc_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"fc_line_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+247,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+251,"fc_wcol",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declArray(c+252,"data_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+259,"data_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+266,"data_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+273,"weight_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+280,"weight_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+287,"weight_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+294,"bias_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+295,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+296,"conv_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"fc_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"fc_line_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("cae_0 ");
    tracep->declBit(c+247,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+251,"fc_wcol",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declArray(c+252,"data_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+259,"data_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+266,"data_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+273,"weight_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+280,"weight_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+287,"weight_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+294,"bias_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+295,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+296,"conv_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"fc_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"fc_line_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"inter_buffer_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 17,0);
    }
    tracep->declBus(c+4,"pe_comp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+5,"en_accumulate",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("acc_0 ");
    tracep->declBit(c+247,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+6,"psum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 53,0);
    tracep->declBus(c+294,"bias",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+251,"fc_wcol",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+295,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+296,"conv_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"fc_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"fc_line_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"tsum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+9+i*1,"psum_buffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->declBus(c+12,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,"fc_comp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+14,"pos_enable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"neg_fc_comp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+299,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+300,"CONV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+301,"FC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+302,"DONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->pushNamePrefix("negedge_detect ");
    tracep->declBit(c+247,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"signal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"neg_edge",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"signalPrev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posedge_detect_enable ");
    tracep->declBit(c+247,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"signal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"pos_edge",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"signalPrev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pe_0 ");
    tracep->declBit(c+247,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+252,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+273,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+19,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+20,"flag_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+21+i*1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+51+i*1,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+81+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+84+i*1,"weight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+87,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+88,"buffer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+299,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+300,"INPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+301,"COMP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+302,"OUPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+89,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("vmult_0 ");
    tracep->declBus(c+90,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+91,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+88,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+92+i*1,"p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pe_1 ");
    tracep->declBit(c+247,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+259,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+280,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+95,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+96,"flag_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+97+i*1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+127+i*1,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+157+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+160+i*1,"weight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+163,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,"buffer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+299,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+300,"INPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+301,"COMP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+302,"OUPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+165,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("vmult_0 ");
    tracep->declBus(c+166,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+167,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+164,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+168+i*1,"p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pe_2 ");
    tracep->declBit(c+247,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+266,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+287,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+171,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+172,"flag_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+173+i*1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+203+i*1,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+233+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+236+i*1,"weight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+239,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+240,"buffer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+299,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+300,"INPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+301,"COMP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+302,"OUPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+241,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("vmult_0 ");
    tracep->declBus(c+242,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+243,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+240,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+244+i*1,"p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->popNamePrefix(4);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[0]),18);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[1]),18);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[2]),18);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__cae_0__DOT__pe_comp),3);
    bufp->fullBit(oldp+5,((7U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_comp))));
    bufp->fullQData(oldp+6,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__acc_0__psum),54);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[0]),18);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[1]),18);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[2]),18);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter),5);
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__fc_comp));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__pos_enable));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__neg_fc_comp));
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__state),2);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__negedge_detect__DOT__signalPrev));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__posedge_detect_enable__DOT__signalPrev));
    bufp->fullIData(oldp+19,(((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp)
                               ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                               [0U] 
                                               + vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                               [1U]) 
                                              + vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                              [2U]))
                               : 0U)),18);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp));
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[1]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[2]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[3]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[4]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[5]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[6]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[7]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[8]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[9]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[10]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[11]),8);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[12]),8);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[13]),8);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[14]),8);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[15]),8);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[16]),8);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[17]),8);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[18]),8);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[19]),8);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[20]),8);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[21]),8);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[22]),8);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[23]),8);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[24]),8);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[25]),8);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[26]),8);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[27]),8);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[28]),8);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[29]),8);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0]),8);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[1]),8);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[2]),8);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[3]),8);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[4]),8);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[5]),8);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[6]),8);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[7]),8);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[8]),8);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[9]),8);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[10]),8);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[11]),8);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[12]),8);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[13]),8);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[14]),8);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[15]),8);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[16]),8);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[17]),8);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[18]),8);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[19]),8);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[20]),8);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[21]),8);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[22]),8);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[23]),8);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[24]),8);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[25]),8);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[26]),8);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[27]),8);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[28]),8);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[29]),8);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[0]),8);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[1]),8);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[2]),8);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[0]),8);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[1]),8);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[2]),8);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter),5);
    bufp->fullIData(oldp+88,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                           [0U] + vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                           [1U]) + 
                                          vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                          [2U]))),18);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state),2);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a),24);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b),24);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[0]),18);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[1]),18);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[2]),18);
    bufp->fullIData(oldp+95,(((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp)
                               ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                               [0U] 
                                               + vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                               [1U]) 
                                              + vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                              [2U]))
                               : 0U)),18);
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp));
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0]),8);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[1]),8);
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[2]),8);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[3]),8);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[4]),8);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[5]),8);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[6]),8);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[7]),8);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[8]),8);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[9]),8);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[10]),8);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[11]),8);
    bufp->fullCData(oldp+109,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[12]),8);
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[13]),8);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[14]),8);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[15]),8);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[16]),8);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[17]),8);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[18]),8);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[19]),8);
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[20]),8);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[21]),8);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[22]),8);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[23]),8);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[24]),8);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[25]),8);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[26]),8);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[27]),8);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[28]),8);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[29]),8);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0]),8);
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[1]),8);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[2]),8);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[3]),8);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[4]),8);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[5]),8);
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[6]),8);
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[7]),8);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[8]),8);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[9]),8);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[10]),8);
    bufp->fullCData(oldp+138,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[11]),8);
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[12]),8);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[13]),8);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[14]),8);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[15]),8);
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[16]),8);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[17]),8);
    bufp->fullCData(oldp+145,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[18]),8);
    bufp->fullCData(oldp+146,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[19]),8);
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[20]),8);
    bufp->fullCData(oldp+148,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[21]),8);
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[22]),8);
    bufp->fullCData(oldp+150,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[23]),8);
    bufp->fullCData(oldp+151,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[24]),8);
    bufp->fullCData(oldp+152,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[25]),8);
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[26]),8);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[27]),8);
    bufp->fullCData(oldp+155,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[28]),8);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[29]),8);
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[0]),8);
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[1]),8);
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[2]),8);
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[0]),8);
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[1]),8);
    bufp->fullCData(oldp+162,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[2]),8);
    bufp->fullCData(oldp+163,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter),5);
    bufp->fullIData(oldp+164,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                            [0U] + 
                                            vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                            [1U]) + 
                                           vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                           [2U]))),18);
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state),2);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a),24);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b),24);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[0]),18);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[1]),18);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[2]),18);
    bufp->fullIData(oldp+171,(((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp)
                                ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                                [0U] 
                                                + vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                                [1U]) 
                                               + vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                               [2U]))
                                : 0U)),18);
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp));
    bufp->fullCData(oldp+173,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0]),8);
    bufp->fullCData(oldp+174,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[1]),8);
    bufp->fullCData(oldp+175,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[2]),8);
    bufp->fullCData(oldp+176,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[3]),8);
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[4]),8);
    bufp->fullCData(oldp+178,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[5]),8);
    bufp->fullCData(oldp+179,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[6]),8);
    bufp->fullCData(oldp+180,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[7]),8);
    bufp->fullCData(oldp+181,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[8]),8);
    bufp->fullCData(oldp+182,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[9]),8);
    bufp->fullCData(oldp+183,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[10]),8);
    bufp->fullCData(oldp+184,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[11]),8);
    bufp->fullCData(oldp+185,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[12]),8);
    bufp->fullCData(oldp+186,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[13]),8);
    bufp->fullCData(oldp+187,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[14]),8);
    bufp->fullCData(oldp+188,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[15]),8);
    bufp->fullCData(oldp+189,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[16]),8);
    bufp->fullCData(oldp+190,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[17]),8);
    bufp->fullCData(oldp+191,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[18]),8);
    bufp->fullCData(oldp+192,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[19]),8);
    bufp->fullCData(oldp+193,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[20]),8);
    bufp->fullCData(oldp+194,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[21]),8);
    bufp->fullCData(oldp+195,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[22]),8);
    bufp->fullCData(oldp+196,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[23]),8);
    bufp->fullCData(oldp+197,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[24]),8);
    bufp->fullCData(oldp+198,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[25]),8);
    bufp->fullCData(oldp+199,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[26]),8);
    bufp->fullCData(oldp+200,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[27]),8);
    bufp->fullCData(oldp+201,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[28]),8);
    bufp->fullCData(oldp+202,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[29]),8);
    bufp->fullCData(oldp+203,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0]),8);
    bufp->fullCData(oldp+204,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[1]),8);
    bufp->fullCData(oldp+205,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[2]),8);
    bufp->fullCData(oldp+206,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[3]),8);
    bufp->fullCData(oldp+207,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[4]),8);
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[5]),8);
    bufp->fullCData(oldp+209,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[6]),8);
    bufp->fullCData(oldp+210,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[7]),8);
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[8]),8);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[9]),8);
    bufp->fullCData(oldp+213,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[10]),8);
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[11]),8);
    bufp->fullCData(oldp+215,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[12]),8);
    bufp->fullCData(oldp+216,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[13]),8);
    bufp->fullCData(oldp+217,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[14]),8);
    bufp->fullCData(oldp+218,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[15]),8);
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[16]),8);
    bufp->fullCData(oldp+220,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[17]),8);
    bufp->fullCData(oldp+221,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[18]),8);
    bufp->fullCData(oldp+222,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[19]),8);
    bufp->fullCData(oldp+223,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[20]),8);
    bufp->fullCData(oldp+224,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[21]),8);
    bufp->fullCData(oldp+225,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[22]),8);
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[23]),8);
    bufp->fullCData(oldp+227,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[24]),8);
    bufp->fullCData(oldp+228,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[25]),8);
    bufp->fullCData(oldp+229,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[26]),8);
    bufp->fullCData(oldp+230,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[27]),8);
    bufp->fullCData(oldp+231,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[28]),8);
    bufp->fullCData(oldp+232,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[29]),8);
    bufp->fullCData(oldp+233,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[0]),8);
    bufp->fullCData(oldp+234,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[1]),8);
    bufp->fullCData(oldp+235,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[2]),8);
    bufp->fullCData(oldp+236,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[0]),8);
    bufp->fullCData(oldp+237,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[1]),8);
    bufp->fullCData(oldp+238,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[2]),8);
    bufp->fullCData(oldp+239,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter),5);
    bufp->fullIData(oldp+240,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                            [0U] + 
                                            vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                            [1U]) + 
                                           vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                           [2U]))),18);
    bufp->fullCData(oldp+241,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state),2);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a),24);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b),24);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[0]),18);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[1]),18);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[2]),18);
    bufp->fullBit(oldp+247,(vlSelf->clk_i));
    bufp->fullBit(oldp+248,(vlSelf->rst));
    bufp->fullBit(oldp+249,(vlSelf->enable));
    bufp->fullBit(oldp+250,(vlSelf->layer));
    bufp->fullCData(oldp+251,(vlSelf->fc_wcol),5);
    bufp->fullWData(oldp+252,(vlSelf->data_row1_in),224);
    bufp->fullWData(oldp+259,(vlSelf->data_row2_in),224);
    bufp->fullWData(oldp+266,(vlSelf->data_row3_in),224);
    bufp->fullWData(oldp+273,(vlSelf->weight_row1_in),224);
    bufp->fullWData(oldp+280,(vlSelf->weight_row2_in),224);
    bufp->fullWData(oldp+287,(vlSelf->weight_row3_in),224);
    bufp->fullIData(oldp+294,(vlSelf->bias_in),32);
    bufp->fullIData(oldp+295,(vlSelf->sum),32);
    bufp->fullBit(oldp+296,(vlSelf->conv_comp));
    bufp->fullBit(oldp+297,(vlSelf->fc_done));
    bufp->fullBit(oldp+298,(vlSelf->fc_line_done));
    bufp->fullCData(oldp+299,(0U),2);
    bufp->fullCData(oldp+300,(1U),2);
    bufp->fullCData(oldp+301,(2U),2);
    bufp->fullCData(oldp+302,(3U),2);
}
