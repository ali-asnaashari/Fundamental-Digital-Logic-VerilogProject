`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:08:47 07/05/2019 
// Design Name: 
// Module Name:    MB 
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
module MB(allfunc, decfunc, balancebit, equalityBit,conclusion );
		//input
		input [4:0] allfunc;//5 bit
		input [4:0] decfunc;//decimal function //5bit
		//output
		output reg balancebit;
		output reg equalityBit;
		output reg [31:0] conclusion;
		//counter and variable
		integer count;
		integer counter1;
		integer counter2;
		integer sc;//shiftcount
		//reg
		reg [8:0] mantissa;//9 bit
		reg [9:0] temporary;//10 bit
		
		//elementary quantity
		initial 
			begin
		
				sc = 0;
				count = 0;
				counter1 = 0;
				counter2 = 0;
		
			end
		
		
		always @ ( allfunc or decfunc )
		 begin
		
		// knowing how much we should shift
		
		for ( counter1 = 0 ; counter1 < 5 ; counter1 = counter1 + 1 ) 
			begin
		
				if ( allfunc[counter1] == 1 ) 
					begin
				
						sc = counter1;
				
					end//end if

			end//end for
		
		
		// sign when we have positive(0)
		
		conclusion[31] = 1'b0;
		
		//  the exponential checked
		
		conclusion[30:23] = sc + 127;
		
		temporary = {allfunc,decfunc};
		
		counter2 = 8;
		counter1 = sc + 4;
		
		while ( counter1 > -1 ) 
			begin
			
				mantissa[counter2] = temporary[counter1];
			
				counter1 = counter1 - 1;
				counter2 = counter2 - 1;
			end;//end while
		
		// putting the rest of the mantissa to zero
		
		while ( counter2 > -1 ) begin
		
			mantissa[counter2] = 1'b0;
			
			counter2 = counter2 - 1;
		
		end
		
		
		conclusion[22:14] = mantissa;
		conclusion[13:5] = mantissa;
		conclusion[5:0] = mantissa;
		
		
		// checking the equality bit
		
		if ( allfunc == decfunc ) begin
		
			equalityBit = 1;
			
		end
		
		else 
		begin
		
			equalityBit = 0;
			
		end
		
		
		// checking the balance bit
	
		count = 0;//elementary quantity
		
		for ( counter1 = 0 ; counter1 < 32 ; counter1 = counter1 + 1 ) begin
		
			if ( conclusion[counter1] == 1 ) begin
				count = count + 1;
				
			end
		end
		
		
		if ( count % 2 == 0 ) 
		begin
		
			balancebit = 1;
			
		end
		
		else 
		begin
		
			balancebit = 0;
			
		end
		
		
		end//end always


endmodule
