#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {
//    dut->data_in = 0;
//    dut->weight_in = 0;
//    dut->psum_in = 0;
    int repeated_sim = sim_unit %40;
    uint8_t data_in_array_0[28] = { 100,100,100,100,200,100,30,40,200,80,200,200,30,30,30,100,200,70,100,100,100,100,200,100,30,40,200,80 };
    uint8_t data_in_array_1[28] = { 100,30,30,30,100,100,30,40,200,80,100,100,200,200,100,30,40,200,100,30,30,30,100,100,30,40,200,80 };
    uint8_t data_in_array_2[28] = { 100,30,70,30,100,100,200,100,30,40,200,30,30,100,100,30,200,200,100,30,70,30,100,100,200,100,200,40 };

    for(int i=0; i<7; i++) {
        dut->data_in[i] = (data_in_array_0[i*4+3] << (8*3) )+ (data_in_array_0[i*4+2] << (8*2) ) + (data_in_array_0[i*4+1] << (8*1) ) + data_in_array_0[i*4] ;
    }

    int64_t weight_in_array[28] = { 100,100,100,200,200,200,120,120,120,200,200,200,150,150,150,80,80,80,50,50,50,150,150,150,220,220,220,160 };
    for (int i=0; i<7; i++) {
        dut->weight_in[i] = (weight_in_array[i*4+3] << (8*3) )+ (weight_in_array[i*4+2] << (8*2) ) + (weight_in_array[i*4+1] << (8*1) ) + weight_in_array[i*4] ;
    }

    dut->layer = 1;

    if(repeated_sim < 1) dut->rst = 0;
    else if(repeated_sim < 2) dut->rst = 1;
    else dut->rst = 0;
    
    if(repeated_sim < 4) dut->enable = 0;
    else if(repeated_sim < 5) dut->enable = 1;
    else dut->enable = 0;
}
