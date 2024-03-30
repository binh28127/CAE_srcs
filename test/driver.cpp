#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {
//    dut->data_in = 0;
//    dut->weight_in = 0;
//    dut->psum_in = 0;

    vluint64_t data_in_array[7] = { 12,15,15,15,13,10,10 };
    for (int i=0; i<7; i++) {
        dut->data_in += (data_in_array[i]<<(i*8));
    }

    vluint64_t weight_in_array[3] = { 14,15,12 };
    for (int i=0; i<3; i++) {
        dut->weight_in += (weight_in_array[i]<<(i*8));
    }

    vluint64_t psum_in_array[5] = { 0,0,0,0,0 };
    for (int i=0; i<5; i++) {
        dut->psum_in += (psum_in_array[i]<<(i*16));
    }

//    dut->data_in = { 12,15,15,15,13,10,10 };
//    dut->weight_in = { 14,15,12 };
//    dut->psum_in = { 0,0,0,0,0,0,0 };
    
    if(sim_unit < 3) dut->rst = 0;
    else if(sim_unit < 13) dut->rst = 1;
    else dut->rst = 0;
    
    if(sim_unit < 53) dut->en = 0;
    else if(sim_unit < 73) dut->en = 1;
    else dut->en = 0;
}
