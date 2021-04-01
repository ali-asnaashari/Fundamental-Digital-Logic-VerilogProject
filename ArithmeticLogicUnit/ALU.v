`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:32:41 07/05/2019 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU( controlBit, Number1,  Number2, printout, balancebit, equalityBit, conclusion, reset, clock);

	//input
	input controlBit;//one bit
	input [4:0] Number1;//five bit
	input [4:0] Number2;//five bit
	input [5:0] printout;//six bit
	input clock;
	input reset;//one bit
	
	
	//wires for instance module
	wire balance_w1;
	wire equal_w1;
	wire [31:0] wire1;

	wire balance_w2;
	wire equal_w2;
	wire [31:0] wire2;
	//output
	output reg  balancebit;//one bit
	output reg equalityBit;//one bit
	output reg [31:0] conclusion;//thirty -two bit

	// Instantiate the module
	MA MA (
		.Number1(Number1), 
		.Number2(Number2), 
		.printout(printout), 
		.balancebit(balance_w1), 
		.equalitybit(equal_w1), 
		.conclusion(wire1)
    );
	
	// Instantiate the module
	MB MB (
			.allfunc(Number1), 
			.decfunc(Number2), 
			.balancebit(balance_w2), 
			.equalityBit(equal_w2),
			.conclusion(wire2) 

	);
	
	
	always @( posedge clock)
		begin
		
		// reset check
		if ( reset == 1 ) 
			begin
		
				conclusion = 0;
				balancebit = 0;
				equalityBit = 0;
			end
		//controlbit checked
		
		// MA
		else if ( controlBit == 0 )
			begin
			
				conclusion= wire1;
				balancebit = balance_w1;
				equalityBit = equal_w1;

			end
			
		//MB
		else if ( controlBit == 1 )
			begin
				conclusion = wire2;
				balancebit = balance_w2;
				equalityBit = equal_w2;
			end
		
		end

endmodule
