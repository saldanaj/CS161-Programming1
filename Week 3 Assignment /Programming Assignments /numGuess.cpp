/*
Author: Joaquin Saldana
Date: 10/14/2015
Description: A program which asks the user to enter a number and allows another user to continue 
guessing which was the number entered until it's entered correctly.  
*/

#include <iostream>
#include <string>

using namespace std; 

// a program which tells the user to enter an integer and requests he/she guess the integer 
//the integer entered until it's correct.  Once the integer is entered correctly the program 
// displays the number of attempts.  

int main()
{
	int accumulator = 0;  //keeps count of how many times it took the user to guess the right number 
	int numberToGuess = 0; // holds the value of the number to be guessed 
	int integerEnteredByUser = 0; // holds the value of the integer entered by user when attempting to guess 
									// the original value entered 

	cout << "Enter the number for the player to guess." << endl;  // prompting the user to enter a number 
	cin >> numberToGuess;											// assigns the number as the value to be guessed 
	cout << numberToGuess << "\n" << endl; 

	cout << "Enter your guess." << endl; // prompts the user to enter his first guess 
	cin >> integerEnteredByUser;		 

	while (integerEnteredByUser != numberToGuess)  // while loop is testing if the number entered by the user 
	{												// equals the value originally entered
													// if it does not the boolean conditions will notify the user he went too high 
													// or went too low with his guess 
		if (integerEnteredByUser < numberToGuess)
				cout << integerEnteredByUser << "\nToo low - try again" << endl;
				
		if (integerEnteredByUser > numberToGuess)
				cout << integerEnteredByUser <<  "\nToo high - try again" << endl;
				
		accumulator++;								// the accumulator is incremented to keep track of how many tries 
				
		cin >> integerEnteredByUser;				// user is prompted to enter a new number 
	}

	accumulator++; 

	cout << integerEnteredByUser << "\nYou guessed it in " << accumulator << " tries." << endl; // if the user guessed right it will 
																								// increase the counter for one last time 
																								// and display the correct value 

	return 0; 
}