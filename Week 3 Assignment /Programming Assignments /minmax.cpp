/*
Author: Joaquin Saldana 
Date: 10/14/2015
Description: A program that asks the user how many integers they wish to enter. 
And based on the number of digits entered, the program will display such integers and notify the user which 
is the largest (maximum) integer entered and which is the smallest (minimum).
*/

#include <iostream>
#include <string>

using namespace std; 

//A program which will ask the user to enter a desired amount of entered 
// and will display to them the highest and lowest integers entered 

int main()
{
	int numberEntered = 0;    // variable which holds count of integers desired by user 
	int holderVariable = 0;   // varibale holds integers entered by user 
	int counter;              // loop counter 
	int min = 0;              // variable that holds smallest integer 
	int max = 0;              // variable that holds largest integer       

	cout << "How many integers would you like to enter?" << endl;   // requests the user to enter the number 
	cin >> numberEntered;											// integers they desire 

	cout << "Please enter " << numberEntered << " integers." << endl; // requests the user to enter any integers with the 
																	  // amount they requested 
	for (counter = 0; counter < numberEntered; counter++)
	{
		if (counter == 0)									//loop counter is initiated and it's condition
		{													// is to continue so long as it's less than the number entered by user 
			cin >> holderVariable;							// loop will test if the counter is set to 0 
															// then the 1st number entered by the user is initialized 
			min = holderVariable;							// as the minimum and maximum.  
			max = holderVariable;							// After the counter increments to 1 it will begin comparing 
															// the numbers entered by the user with the minimum and maximum values 
			cout << holderVariable << endl; 
		}
		else
		{

			cin >> holderVariable; 

			if (holderVariable < min)
				min = holderVariable; 
			if (holderVariable > max)
				max = holderVariable; 

			cout << holderVariable << endl; 
		}


	}

	cout << "min: " << min << endl;		// program is asked to display to console the smallest nd largest number 
	cout << "max: " << max << endl;		// entered by the user 

	return 0; 

}