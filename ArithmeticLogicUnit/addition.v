`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:50:10 07/05/2019 
// Design Name: 
// Module Name:    addition 
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
module addition(Number1, Number2, printout, balancebit, conclusion);
		//input
		input [4:0] Number1;
		input [4:0] Number2;
		input [5:0] printout;
		//output
		output reg [31:0] conclusion;
		output reg balancebit;
		//counter and variable
		integer k;
		integer i;
		//reg
		reg [5:0] temp;
		
		always @ ( Number1 or Number2 or printout) 
		begin
			//onehotcoding checked
			if ( printout == 6'b000001 ) 
			begin
			
				temp = Number1 + Number2;
			//count numbers of 1
			for ( k = 0 ; k < 6 ; k = k + 1 )
				begin
				
					if ( temp[k] == 1'b1 )
						begin
					
						i = i + 1;
					
						end
				end//end for

		if ( i % 2 == 0 )
			begin
					
					balancebit = 1'b1;//even
					
			end
			
		else
			begin
				
					balancebit = 1'b0;//odd
					
			end//end else
			
			
		// Sign Extend
		conclusion = {{26{temp[5]}}, temp[5:0]};//conbination	
			end//ebd if
	
		end//end always
			
endmodule
