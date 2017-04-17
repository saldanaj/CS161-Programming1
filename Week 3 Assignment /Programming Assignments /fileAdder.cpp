/*
Author: Joaquin Saldana 
Date: 10/21/2015 
Program Purpose: a program which creates a data file to read and write to 
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

int main()
{
	int numberToHold = 0;  // initialization of all variables to be used 
	int totalNumber = 0; 
	ifstream inputFile; 
	ofstream outputFile; 
	string fileName; 

	cout << "What is the name of the file we are opening? "; // prompts the user to enter the file name 
	cin >> fileName;  // filename is assigned to the string varibale "fileName" 

	inputFile.open(fileName.c_str()); // opens the file provided by the user 

	if (inputFile) // if the file was read or find successfully then start reading the file 
	{
		while (inputFile >> numberToHold) // testing to see if we have reached end of file 
		{
			totalNumber += numberToHold; // continues to add the total of the numbers 
		}

		outputFile.open("sum.txt"); // opens the file we are going to write to 
		outputFile << totalNumber;  // writes the value of totalNumber to the file 

	}
	else
	{
		cout << "Could not access file \n"; // informs the user the file was not find 
	}


	inputFile.close();  // closes both files 
	outputFile.close(); 

	return 0; 


}