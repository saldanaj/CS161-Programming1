/*
Author: Joaquin Saldana
Date: 10/07/2015
Description: Program prompts the user to enter a integer of cents and provides the amount in coin denominations
*/


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//  Program notifies the user the denominations in coins for the cent value entered 

int main()
{
	const int QUARTERS = 25; 
	const int DIME = 10; 
	const int NICKEL = 5; 
	
	int cents = 0; 
	int coinsOwed = 0; 

	cout << "Please enter an amount in cents less than a dollar. \n";  // user will enter a value in cents from console 
	cin >> cents;   
	cout << cents << endl; 

	cout << "Your change will be: \n"; 

	coinsOwed = cents/QUARTERS; // coinsOwed variable will hold the number of Quarters due 
	cents = cents%QUARTERS; // mod gives the remaining amount of cents in variable cents 

	cout << "Q: " << coinsOwed << "\n";  // value is sent to console 

	coinsOwed = cents/DIME; // coinsOwed variable will hold the number of Dimes owed 
	cents = cents%DIME;  // mod gives the remaining amount of cents in variable cents 

	cout << "D: " << coinsOwed << "\n";  

	coinsOwed = cents/NICKEL; // coinsOwed varibale will hold the number of Nickels owed 
	cents = cents%NICKEL;   // mod gives the remaining amount of cents 

	cout << "N: " << coinsOwed << "\n"; 

	cout << "P: " << cents << endl;  // if there's a remaining amount it's pennies 

	return 0;
}