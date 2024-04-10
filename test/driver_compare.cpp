#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {

    vluint64_t data_in_array[12] = { 1,5,12,2,5,15,7,15,4,13,10,10 };
//    for (int i=0; i<12; i++) {
//        if(sim_unit < i+4) dut->data = data_in_array[i];
//    }
    if(sim_unit < 4) dut->data = data_in_array[0];
    else if(sim_unit < 5) dut->data = data_in_array[1];
    else if(sim_unit < 6) dut->data = data_in_array[2];
    else if(sim_unit < 7) dut->data = data_in_array[3];
    else if(sim_unit < 8) dut->data = data_in_array[4];
    else if(sim_unit < 9) dut->data = data_in_array[5];
    else if(sim_unit < 10) dut->data = data_in_array[6];
    else if(sim_unit < 11) dut->data = data_in_array[7];
    else if(sim_unit < 12) dut->data = data_in_array[8];
    else if(sim_unit < 13) dut->data = data_in_array[9];
    else if(sim_unit < 14) dut->data = data_in_array[10];
    else if(sim_unit < 15) dut->data = data_in_array[11];

    if(sim_unit < 1) dut->rst = 0;
    else if(sim_unit < 2) dut->rst = 1;
    else dut->rst = 0;
    
}
