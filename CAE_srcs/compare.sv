/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module compare(
    input logic clk, rst,
    input enum {CONV = 0, FC = 1} layer,
    input logic [`DATA_WIDTH-1:0] data,
    output logic [`DATA_WIDTH-1:0] max,
    output logic done
);

    logic counter;
    
    always @(posedge clk) begin
        if(rst || counter == 1 || layer == FC) counter <= 0;
        else counter <= counter + 1;
    end

    // max compare
    always @(posedge clk) begin
        if(rst || counter == 1) max <= data;
        else max <= (data > max) ? data : max;
    end
    
    assign done = (counter == 1) ? 1 : 0;
    
endmodule

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
