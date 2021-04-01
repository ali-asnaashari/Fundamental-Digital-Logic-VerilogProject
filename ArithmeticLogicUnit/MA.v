`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:33:12 07/05/2019 
// Design Name: 
// Module Name:    MA 
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
module MA(Number1, Number2, printout, equalitybit, balancebit, conclusion);
		
	//input
	input [4:0] Number1;//five bit
	input [4:0] Number2;//five bit
	input [5:0] printout;//six bit
	//output
	output reg balancebit;// one bit
	output reg equalitybit;//one bit
	output reg [31:0] conclusion;//thirty-two bit
	//counter and variable
	integer k;
	integer i;
	
	
	// temp wires for each module
	wire balance_w1;
	wire [31:0] wire1;//thirty-two bit
	
	wire balance_w2;
	wire [31:0] wire2;//thirty-two bit
	
	wire balance_w3;
	wire [31:0] wire3;//thirty-two bit
	
	wire balance_w4;
	wire [31:0] wire4;//thirty-two bit
	
	wire balance_w5;
	wire [31:0] wire5;//thirty-two bit
	
	wire balance_w6;
	wire [31:0] wire6;//thirty-two bit
	
	
	initial 
		begin
			i = 0;
		end
		// connect the modules with the wire
		
		addition Addition (
				.Number1(Number1), 
				.Number2(Number2), 
				.conclusion(wire1), 
				.printout(printout), 
				.balancebit(balance_w1)
		);
		
		
		
		subtraction subtraction (
				.Number1(Number1), 
				.Number2(Number2), 
				.conclusion(wire2), 
				.printout(printout), 
				.balancebit(balance_w2)
		);

		
		

		multipliction mult (
				.Number1(Number1), 
				.Number2(Number2), 
				.conclusion(wire3), 
				.printout(printout), 
				.balancebit(balance_w3)
		);

		count1 count (
				.Number1(Number1), 
				.Number2(Number2), 
				.conclusion(wire4), 
				.printout(printout), 
				.balancebit(balance_w4)
		);		
		
		
		xorr xorrmod (
				.Number1(Number1), 
				.Number2(Number2), 
				.conclusion(wire5), 
				.printout(printout), 
				.balancebit(balance_w5)
		);
		

		greater great (
				.Number1(Number1), 
				.Number2(Number2), 
				.conclusion(wire6), 
				.printout(printout), 
				.balancebit(balance_w6)
		);
	

	always @( * )
		begin
		
		
		//checking the equality
		
		if ( Number1 == Number2 )//condition for equal two numbers
			begin
			
			equalitybit = 1;
			
			end
		else
			begin
			
			equalitybit = 0;
			
			end 
		//one hot coding and define the type of output
		if ( printout == 6'b000001 ) 
		begin
			balancebit = balance_w1;
			conclusion = wire1;
		end
		
		else if ( printout == 6'b000010 ) 
		begin
			balancebit = balance_w2;
			conclusion = wire2;		
		end
		
		else if ( printout == 6'b000100 ) 
		begin
			balancebit = balance_w3;
			conclusion = wire3;		
		end
		
		else if ( printout == 6'b001000 ) 
		begin
			balancebit = balance_w4;
			conclusion = wire4;		
		end

		else if ( printout == 6'b010000 ) 
		begin
			balancebit = balance_w5;
			conclusion = wire5;		
		end
		
		else if ( printout == 6'b100000 ) 
		begin
			balancebit = balance_w6;
			conclusion = wire6;		
		end
	end

endmodule
