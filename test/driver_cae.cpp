#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {
    int repeated_sim = sim_unit %40;
    
    int64_t data_in_array_0[28] = { 100,100,100,100,200,100,30,40,200,80,200,200,30,30,30,100,200,70,100,100,100,100,200,100,30,40,200,80 };
    int64_t data_in_array_1[28] = { 100,30,30,30,100,100,30,40,200,80,100,100,200,200,100,30,40,200,100,30,30,30,100,100,30,40,200,80 };
    int64_t data_in_array_2[28] = { 100,30,70,30,100,100,200,100,30,40,200,30,30,100,100,30,200,200,100,30,70,30,100,100,200,100,300,40 };

    for(int i=0; i<7; i++) {
        dut->data_row1_in[i] = (data_in_array_0[i*4+3] << (8*3) )+ (data_in_array_0[i*4+2] << (8*2) ) + (data_in_array_0[i*4+1] << (8*1) ) + data_in_array_0[i*4] ;
        dut->data_row2_in[i] = (data_in_array_1[i*4+3] << (8*3) )+ (data_in_array_1[i*4+2] << (8*2) ) + (data_in_array_1[i*4+1] << (8*1) ) + data_in_array_1[i*4] ;
        dut->data_row3_in[i] = (data_in_array_2[i*4+3] << (8*3) )+ (data_in_array_2[i*4+2] << (8*2) ) + (data_in_array_2[i*4+1] << (8*1) ) + data_in_array_2[i*4] ;
    }

    int64_t weight_in_array[28] = { 100,100,100,200,200,200,120,120,120,200,200,200,150,150,150,80,80,80,50,50,50,150,150,150,220,220,220,160 };
    for (int i=0; i<7; i++) {
        dut->weight_row1_in[i] = (weight_in_array[i*4+3] << (8*3) )+ (weight_in_array[i*4+2] << (8*2) ) + (weight_in_array[i*4+1] << (8*1) ) + weight_in_array[i*4] ;
        dut->weight_row2_in[i] = (weight_in_array[i*4+3] << (8*3) )+ (weight_in_array[i*4+2] << (8*2) ) + (weight_in_array[i*4+1] << (8*1) ) + weight_in_array[i*4] ;
        dut->weight_row3_in[i] = (weight_in_array[i*4+3] << (8*3) )+ (weight_in_array[i*4+2] << (8*2) ) + (weight_in_array[i*4+1] << (8*1) ) + weight_in_array[i*4] ;
    }
    
    int64_t bias_in_array[1] = { 40000 };
    dut->bias_in = bias_in_array[0];

    dut->layer = 1;
    dut->fc_wcol = 10;

    if (dut->layer == 0) {
        if(repeated_sim < 1) dut->rst = 0;
        else if(repeated_sim < 2) dut->rst = 1;
        else dut->rst = 0;
    } else {
        if(sim_unit < 1) dut->rst = 0;
        else if(sim_unit < 2) dut->rst = 1;
        else dut->rst = 0;
    }

    
    if(repeated_sim < 2) dut->enable = 0;
    else if(repeated_sim < 3) dut->enable = 1;
    else dut->enable = 0;
}
