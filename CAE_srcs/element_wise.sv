/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module element_wise(
    input logic clk, rst,
    input enum {CONV = 0, FC = 1} layer,
    input logic [`BIAS_WIDTH-1:0] din,
    output logic [`DATA_WIDTH-1:0] dout,
    output logic done
);

    logic [`DATA_WIDTH-1:0] qdata;
    logic [`DATA_WIDTH-1:0] redata;
    logic [`DATA_WIDTH-1:0] mdata;

    quantization quant_0 (
                            .din(din),
                            .dout(qdata)
    );
    
    activation act_0 (
                            .din(qdata),
                            .dout(redata)
    );
    
    compare comp_0 (
                            .clk(clk), .rst(rst), .layer(layer),
                            .data(redata),
                            .max(mdata),
                            .done(done)
    );
    
    always_comb begin
        if(layer == FC) dout = redata;
        else if(done) dout = mdata;
        else dout = 0;
    end

endmodule

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
