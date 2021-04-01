`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:27:53 07/05/2019 
// Design Name: 
// Module Name:    xor 
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
module xorr(Number1, Number2, printout, balancebit, conclusion);
	//input
	input [4:0] Number1;
	input [4:0] Number2;
	input [5:0] printout;
	//output
	output reg balancebit;//one bit
	output reg [31:0] conclusion;//thirty-two bit
	//counter and variable
	integer k;
	integer i;
	//reg
	reg [4:0] temppppp;

	
	always @ (Number1 or Number2 or printout) begin
	
	if ( printout == 6'b010000 )
		begin
	
			temppppp = Number1 ^ Number2;
		
		
		for ( k = 0 ; k < 5 ; k = k + 1 ) 
			begin
				if ( temppppp[k] == 1 ) 
					begin
				
						i = i + 1;
					
					end//end if
				
			end//end for 
				
		if ( i % 2 == 0 )
			begin
				
					balancebit =1'b1;
					
			end//end if
				
		else 
			begin
					
					balancebit =1'b0;
					
			end//end else
				
			// Sign Extend
			conclusion = {{27{temppppp[4]}},temppppp[4:0]};
		
		end//end if
		
	end//end always



endmodule
