#define MAX_SIM 2000000

void set_random(Vtop *dut, vluint64_t sim_unit) {
    vluint64_t a_3[3] = { 50,80,2 };
    for (int i=0; i<3; i++) {
        dut->a[i] = a_3[i];
    }

    vluint64_t b_3[3] = { 80,152,62 };
    for (int i=0; i<3; i++) {
        dut->b[i] = b_3[i];
    }

}
