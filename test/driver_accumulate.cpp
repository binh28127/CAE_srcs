#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {
    int repeated_sim = sim_unit %40;

    int64_t data_in_array_0[28] = { 100,100,100,100,200,100,30,40,200,80,200,200,30,30,30,100,200,70,100,100,100,100,200,100,30,40,200,80 };
    int64_t data_in_array_1[28] = { 100,30,30,30,100,100,30,40,200,80,100,100,200,200,100,30,40,200,100,30,30,30,100,100,30,40,200,80 };
    int64_t data_in_array_2[28] = { 100,30,70,30,100,100,200,100,30,40,200,30,30,100,100,30,200,200,100,30,70,30,100,100,200,100,300,40 };

    for(int i=10; i<38; i++) {
        if(repeated_sim == i){
            dut->psum[0] = data_in_array_0[i-10];
            dut->psum[1] = data_in_array_1[i-10];
            dut->psum[2] = data_in_array_2[i-10];
        }

    }

    int32_t bias_in_array[1] = { 40000 };
    dut->bias = bias_in_array[0];

    dut->layer = 1;

    if(sim_unit < 1) dut->rst = 0;
    else if(sim_unit < 2) dut->rst = 1;
    else dut->rst = 0;

    if(sim_unit == 3000)dut->rst = 1;
    
    if(repeated_sim < 10) dut->enable = 0;
    else if(repeated_sim < 36) dut->enable = 1;
    else dut->enable = 0;
}
