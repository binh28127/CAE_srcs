#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {

    int64_t data_in_array_0[28] = { 100,100,100,100,200,100,30,40,200,80,200,200,30,30,30,100,200,70,100,100,100,100,200,100,30,40,200,80 };
    int64_t data_in_array_1[28] = { 100,30,30,30,100,100,30,40,200,80,100,100,200,200,100,30,40,200,100,30,30,30,100,100,30,40,200,80 };
    int64_t data_in_array_2[28] = { 100,30,70,30,100,100,200,100,30,40,200,30,30,100,100,30,200,200,100,30,70,30,100,100,200,100,300,40 };
    int64_t data_in_array_3[18] = { 10,30,30,30,30 };
    int64_t data_in_array_4[18] = { 10,10,10,10,10 };

    if(sim_unit < 9) {
        for(int i=0; i<28; i++) {
            dut->data_in[0][i] = data_in_array_0[i];
            dut->data_in[1][i] = data_in_array_1[i];
            dut->data_in[2][i] = data_in_array_2[i];
        }
    }
//    else if(sim_unit < 16) {
//        for(int i=0; i<5; i++) { 
//            dut->data_in[0][i] = data_in_array_1[i];
//            dut->data_in[1][i] = data_in_array_2[i];
//            dut->data_in[2][i] = data_in_array_3[i];
//        }
//    }
//    else {
//        for(int i=0; i<5; i++) {
//            dut->data_in[0][i] = data_in_array_2[i];
//            dut->data_in[1][i] = data_in_array_3[i];
//            dut->data_in[2][i] = data_in_array_4[i];
//        }
//    }

    int64_t weight_in_array[28] = { 100,100,100,200,200,200,120,120,120,200,200,200,150,150,150,80,80,80,50,50,50,150,150,150,220,220,220,160 };
    for (int i=0; i<28; i++) {
        dut->weight_in[i] = weight_in_array[i];
    }
    
    int64_t bias_in_array[1] = { 40000 };
    dut->bias_in = bias_in_array[0];

    dut->layer = 0;

    if(sim_unit < 1) dut->rst = 0;
    else if(sim_unit < 2) dut->rst = 1;
    else dut->rst = 0;
    
    if(sim_unit < 2) dut->en = 0;
    else if(sim_unit < 3) dut->en = 1;
//    else if(sim_unit == 9) dut->en = 1;
//    else if(sim_unit == 16) dut->en = 1;
    else dut->en = 0;
}
