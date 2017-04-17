
/*
Author: Joaquin Saldana 
Date: 10/07/2015 
Description: A program which asks the user to input 5 numbers 
and calculates the average of the five numbers 
*/


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// A small program whose logic calculates the average of 5 numerical inputs

int main()
{

	double firstInput = 0; // variable which holds 1st input
	double secondInput = 0; // variable which holds 2nd input 
	double thirdInput = 0;  // variable which holds 3rd input 
	double fourthInput = 0; // variable which holds 4th input 
	double fifthInput = 0; // variable which holds 5th input 
	double averageFive = 0; // variable which holds the numerical average of the five inputs

	cout << "Please enter five numbers separated by spaces: "; // prompts the user to enter 5 numbers separated by white spaces

	cin >> firstInput >> secondInput >> thirdInput >> fourthInput >> fifthInput; // input is assigned to the declared variables 

	cout << firstInput << "\n" << secondInput << "\n" << thirdInput << "\n" << fourthInput << "\n" << fifthInput << "\n"; // variables are shown to the user via console 

	averageFive = (firstInput + secondInput + thirdInput + fourthInput + fifthInput) / 5; // formula for average 

	cout << "The average of those numbers is: \n" << averageFive << endl; // outputs the average to the user

	return 0; 
}

