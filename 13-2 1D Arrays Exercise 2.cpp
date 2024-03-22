// 13-2 1D Arrays Exercise 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nirupama Poojari
// Date: 4/12/2023
// Program Name: 1D Arrays Exercise 2
// Program Description:  Pass the array to a function and multiply the values by their index.
#include <iostream>
using namespace std;
const int SIZE = 10;
// Pointer Function Prototype
int * multIndex(int[SIZE]);

int main()
{ // main starts here
    int arr[SIZE];
            
    for (int i = 0; i < SIZE; i++) { // for loop starts here
        cout << "Please enter value #" <<(i+1) <<": ";
        cin >> arr[i];
    } // for loop ends here
    cout << "\nOriginal  array values :";
    for (int i = 0; i < SIZE; i++) { // for loop starts here
        
        cout << " " << arr[i];
    } // for loop ends here
    cout << "\nIndex multiplied array values:";
    int* retArr = multIndex(arr);
    for (int i = 0; i < SIZE; i++) { // for loop starts here
        cout << " " << *retArr;
        retArr++;
    } // for loop ends here
    cout << endl;

    return 0;
} // main ends here

int* multIndex(int arrRet[SIZE]) { // multIndex Pointer function starts
    static int newArr[SIZE];
    for (int i = 0; i < SIZE; i++) { // for loop starts
        newArr[i] = arrRet[i] * i;
        
    } // for loop ends

    return newArr;
} // multIndex Pointer function ends


