#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {

    vluint64_t data_in_array[12] = { 89238291,5727391,1029102382,7638272,632675,189923625,830218297,428839215,219734,98937213,97210,75325710 };
    
    if(sim_unit < 4) dut->din = data_in_array[0];
    else if(sim_unit < 5) dut->din = data_in_array[1];
    else if(sim_unit < 6) dut->din = data_in_array[2];
    else if(sim_unit < 7) dut->din = data_in_array[3];
    else if(sim_unit < 8) dut->din = data_in_array[4];
    else if(sim_unit < 9) dut->din = data_in_array[5];
    else if(sim_unit < 10) dut->din = data_in_array[6];
    else if(sim_unit < 11) dut->din = data_in_array[7];
    else if(sim_unit < 12) dut->din = data_in_array[8];
    else if(sim_unit < 13) dut->din = data_in_array[9];
    else if(sim_unit < 14) dut->din = data_in_array[10];
    else if(sim_unit < 15) dut->din = data_in_array[11];

    if(sim_unit < 7) dut->layer = 0;
    else if(sim_unit < 20) dut->layer = 1;
    else dut->layer = 0;

    if(sim_unit < 1) dut->rst = 0;
    else if(sim_unit < 2) dut->rst = 1;
    else dut->rst = 0;
    
}
