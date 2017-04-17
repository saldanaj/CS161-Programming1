/*
Author: Joaquin Saldana
Date: 10/07/2015
Description: A program which converts Celsius degrees into Farenheit degrees 
*/


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// program which converts degrees from Celsius to Farenheit 

int main()
{
	double celsiusTemp = 0; // variable which holds the user input for celsius 
	double fahrenheitTemp = 0;  // variable which holds the Fahrenheit value 

	cout << "Please enter a Celsius temperature: \n"; 
	cin >> celsiusTemp; 
	cout << celsiusTemp; // outputs to console the Celsius value entered by user 

	fahrenheitTemp = (((double)9/5 * celsiusTemp) + (double)32); // Celsius to Fahrenheit converter formula 

	cout << "The equivalent Fahrenheit temperature is: \n" << fahrenheitTemp << endl; // output which provides the converted value 

	return 0;
}