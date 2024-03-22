// Exercise602.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nirupama Poojari
// Date: 2/17/2023
// Program Name: Exercise602
// Description: Input a number to determine if it is even or odd

#include <iostream>
#include <cmath>
using namespace std;

int main() // main starts
{
    int number;
    cout << "Please enter an even number: ";
    cin >> number; // Prompts for an even number
    if ((number % 2) == 0) {
        cout << "\nThank you for correct input. Your number " << number <<" is even!\n";
    }
    else {
        cout << "\nSorry, " << number <<" is an odd number - this is not correct input.\n";
    }


    return 0;

} // main ends

