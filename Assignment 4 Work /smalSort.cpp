/*
Author: Joaquin Saldana 
Date: 10/21/2015
Description: a function that sorts three parameters in ascending order 
*/

#include <iostream>
#include <string>
using namespace std; 


void smallSort(int &arg1, int &arg2, int &arg3); // Prototype initialization 
												 

/*
Description: a function which sorts three arguments passed by reference from smallest to larges 
*/

void smallSort(int &arg1, int &arg2, int &arg3)
{
	int copyOne = 0; // local variables initialized 
	int copyTwo = 0; 
	int copyThree = 0; 

	while (arg1 > arg2 && arg2 > arg3 && arg3 < arg1) // the loop will continue until the numbers are in order 
	{
		if (arg2 < arg1) // test condition to see if the first two arguments are in order 
		{
			copyOne = arg1; 
			arg1 = arg2; 
			arg2 = copyOne; 
		}
		if (arg2 > arg3) // test condition to see if argument 2 and 3 are in order 
		{
			copyTwo = arg2; 
			arg2 = arg3; 
			arg3 = copyTwo; 
		}
		if (arg3 < arg1) // test condition to see if argument 3 and 1 are in order 
		{
			copyThree = arg3; 
			arg3 = arg1; 
			arg1 = copyThree; 
		}

	}

	cout << arg1 << " " << arg2 << " " << arg3 << endl; // prints the integers in order 
}

