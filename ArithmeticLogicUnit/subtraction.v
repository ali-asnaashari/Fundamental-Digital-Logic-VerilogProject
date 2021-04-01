`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:03:38 07/05/2019 
// Design Name: 
// Module Name:    subtraction 
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
module subtraction(Number1, Number2, printout, balancebit, conclusion);
	//input
	input [4:0] Number1;//5bit
	input [4:0] Number2;//5bit
	input [5:0] printout;//6bit
	//output
	output reg balancebit;
	output reg [31:0] conclusion;
	//counter and variable
	integer k;
	integer i;
	//reg
	reg [4:0] tempp;


	always @ (Number1 or Number2 or printout) 
	begin
	
		if ( printout == 6'b000010 )
		begin
			tempp = Number1 - Number2;
		
		for ( k = 0 ; k < 5 ; k = k + 1 )
			begin
				if ( tempp[k] == 1 ) 
					begin
					
						i = i + 1;
						
					end//end if
				
			end//end for
		//check balancebit	
		if ( i % 2 == 0 ) 
			begin
				
					balancebit =1'b1;
					
			end
				
		else 
			begin
						
						balancebit =1'b0;
						
			end//end else
		
		// Sign Extend
 		conclusion = {{27{tempp[4]}},tempp[4:0]};		
			
		end//end if
		
	end//end always

endmodule
