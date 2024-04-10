#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {

    vluint64_t psum_array[9] = { 2,5,5,1,2,7,4,5,5 };
    for (int i=0; i<3; i++) {
        if(sim_unit < 14) dut->psum[i] = psum_array[i];
        else if(sim_unit < 15) dut->psum[i] = psum_array[i+3];
        else if(sim_unit < 16) dut->psum[i] = psum_array[i+6];
    }

    vluint64_t bias_array[1] = { 1 };
    dut->bias = bias_array[0];

    vluint64_t layer_array[2] = { 0, 1 };
    if(sim_unit < 13) dut->layer = layer_array[0];
    else dut->layer = layer_array[1];

    if(sim_unit < 1) dut->rst = 0;
    else if(sim_unit < 2) dut->rst = 1;
//    else if(sim_unit < 12) dut->rst = 0;
//    else if(sim_unit < 13) dut->rst = 1;
    else dut->rst = 0;
    
    if(sim_unit < 4) dut->en = 0;
    else if(sim_unit < 5) dut->en = 1;
    else if(sim_unit < 13) dut->en = 0;
    else if(sim_unit < 15) dut->en = 1;
    else dut->en = 0;

    if(sim_unit < 5) dut->flag = 0;
    else if(sim_unit < 10) dut->flag = 7;
    else if(sim_unit < 13) dut->flag = 0;
    else if(sim_unit < 20) dut->flag = 7;
    else dut->flag = 0;
}
