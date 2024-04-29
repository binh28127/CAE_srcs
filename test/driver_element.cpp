#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {
//    dut->data_in = 0;
//    dut->weight_in = 0;
//    dut->psum_in = 0;
    int repeated_sim = sim_unit %40;
    int repeated_sim2 = sim_unit %80;
    uint8_t data_in_array_0[26] = { 100,100,100,100,200,100,30,40,200,80,200,200,30,30,30,100,200,70,100,100,100,100,200,100,30,40};

    if(repeated_sim < 31 && repeated_sim > 4) {
         dut->din = data_in_array_0[repeated_sim-5] ;
         dut->enable = 1;
    } else {dut->enable = 0;}

    if(repeated_sim2 < 1) dut->rst = 0;
    else if(repeated_sim2 < 2) dut->rst = 1;
    else dut->rst = 0;
    
}
