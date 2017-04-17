/*
Author: Joaquin Saldana 
Date: 10/21/2015
Description: A cpp file which obtains a function that can calculate the distance an object falls due to gravity in a spcific time period.  
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std; 

void gravityDistance(double); 

/*
Function Description: calculates the distance  in meters an object falls due to gravity in a specific time period.  
The user must enter/pass the time in seconds 
*/
void gravityDistance(double seconds) 
{
	double distance = 0; // initializes the distance 
	double gravity = 9.8; // assigns the gravity value 

	distance = (1 / 2) * gravity * pow(seconds, 2); // performs the formula 

	cout << distance << " meters" << endl;  // prints the result in meters
}

/*
int main()
{

	double time = 3; 

	gravityDistance(3); 

	return 0; 
}
*/


