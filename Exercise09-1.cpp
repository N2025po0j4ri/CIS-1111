// Exercise09-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nirupama Poojari
// Date: 3/18/2023
// Program Name: Loops Exercise 1
// Program Description: A looping algorithm that will not allow the user to
//                      proceed in the program without correctly entering the requested information

#include <iostream>
using namespace std;
int main() //main starts here
{
    int num;
    cout << "Please enter a number 1 - 10: ";
    cin >> num;
    while (num < 1 || num > 10) { // while loop starts here
        cout << "\nSorry, your number has to be between 1 and 10. Please try again: ";
        cin >> num;
    } // while loop ends here
    cout << "\nThank you!\n";
    return 0;
} // main ends here
