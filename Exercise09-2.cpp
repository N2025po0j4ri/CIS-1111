// Exercise09-2.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Name: Nirupama Poojari
// Date: 3/18/2023
// Program Name: Loops Exercise 2
// Program Description: Print the multiplication table (1 – 12)
//                      for a user entered number

#include <iostream>

using namespace std;
int main()
{ // main starts here
    int num, multiplier = 12;
    cout << "Please enter a number of your choosing: ";
    cin >> num;
    cout << "\nYou entered: " << num << "\n";
    cout << "\nHere is the multiplication table for " << num << "\n\n";
    for (int i = 1; i <= multiplier; i++) { // for loop starts here 
        cout << num << " x " << i << " = " << num * i << endl;
    
    } // for loop ends here
    return 0;
} // main() ends here

