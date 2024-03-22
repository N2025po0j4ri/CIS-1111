// 13-1 1DArraysExercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nirupama Poojari
// Date: 4/11/2023
// Program Name: 1DArrays Exercise 1
// Program Description: Program removes the odd numbers from an array and replaces them with even numbers.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ // main starts here
    const int SIZE = 10;
    int arr[SIZE] = {42, 9, 23, 101, 99, 22, 13, 5, 77, 28};
    int evenArr[SIZE];
    for (int i = 0; i < SIZE; i++) { // for loop starts here
        if (arr[i] % 2 == 0) { // if starts here
            evenArr[i] = arr[i];
        }
        else { // else starts here
            evenArr[i] = arr[i] * 2;
        } // if-else ends here
    } // for loop ends here
    cout << "The original array is:";
    for (int i = 0; i < SIZE; i++) { // for loop starts here
        cout << " " << arr[i];
    } // for loop ends here
    cout << "\n\nYour even number array is:";
    for (int i = 0; i < SIZE; i++) { // for loop starts here
        cout << " " << evenArr[i];
    } // for loop ends here
    cout << endl;
    return 0;
} // main ends

