`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:47:48 07/06/2019
// Design Name:   ALU
// Module Name:   C:/Xilinx/New folder/ArithmeticLogicUnit/ALUT.v
// Project Name:  ArithmeticLogicUnit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALUT;

	// Inputs
	reg controlBit;
	reg [4:0] Number1;
	reg [4:0] Number2;
	reg [5:0] printout;
	reg reset;
	reg clock;

	// Outputs
	wire balancebit;
	wire equalityBit;
	wire [31:0] conclusion;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.controlBit(controlBit), 
		.Number1(Number1), 
		.Number2(Number2), 
		.printout(printout), 
		.balancebit(balancebit), 
		.equalityBit(equalityBit), 
		.conclusion(conclusion), 
		.reset(reset), 
		.clock(clock)
	);

	initial begin
		// Initialize Inputs
		controlBit = 0;
		Number1 = 101;
		Number2 = 100;
		printout = 000001;
		reset = 0;
		clock = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #100 clock = ~clock ;
      
endmodule

