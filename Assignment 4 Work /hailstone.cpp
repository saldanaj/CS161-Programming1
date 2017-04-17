/*
Author: Joaquin Saldana 
Date: 10/22/2015
Description: A program a function which continues moding until the final number is 1 
*/

#include <iostream>
#include <string>

int hailstone(int); 

/*
Function Description: a function which takes a number and continues moding and adding depending if even or odd to 
until it reaches 1.  
*/

int hailstone(int number )
{
	int nextNumber = number; 
	int counter = 0; 

	if (number == 1) // if the number entered by the user is  1 then we dont need to do any processes 
		return 0;
	else 
		while (nextNumber != 1) // loop which keeps performing the mathematical functions until we reach 1 
		{
			if (nextNumber % 2 == 0) // if number is even we keep dividing until we reach one 
			{
				nextNumber /= 2; 
			}
			else
			{
				nextNumber = (nextNumber * 3) + 1;  // if number if odd then we multiply it by 3 and add 1 to it 
			}

			counter++; // counter keeps incrementing 
		}


		return counter; // function returns the value of the counter to show how many times it went through 
}