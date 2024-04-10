/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module activation(
    input logic [`DATA_WIDTH-1:0] din,
    output logic [`DATA_WIDTH-1:0] dout
);

    // relu
    assign dout = (din > 0) ? din : 0;

endmodule

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
