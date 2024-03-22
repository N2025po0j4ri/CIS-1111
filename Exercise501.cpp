// Exercise501.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nirupama Poojari
// Date: 2/8/2023
// Program Name: CIS Interatictivity Assigment
// Description: Users need to better interact with other people
#include<iostream>
#include<string>

using namespace std;

int main() { // main function starts here
	string userName;
	//int userNum, squaredNum;
	double userNum, squaredNum;
		
	cout << "\Please input a number: "; // Displays prompt for input for a number
    cin >> userNum; // Takes user input
	cin.ignore(); // Ignores the newline enter

	squaredNum = userNum * userNum; // Squares the user input value

	cout << "\nPlease enter your full name: "; // Displays prompt for user's full name
	//cin >> userName;   
	getline(cin, userName); // Takes user full name
	
	cout << "\nThank you, " << userName << ". The square of your number is: " << squaredNum; //Displays user name and the squared input value
	//squaredNum = userNum * userNum;
	cout << endl << endl;
	system("pause");
	return 0;
} //main function ends 
