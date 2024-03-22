// 12-1MoreFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nirupama Poojari
// Date: 4/5/2023
// Program Name: MoreFunctions
// Program Description: Triangle length and area calculator for right angle triangles.

#include <iostream>;
#include <iomanip>;
#include <cmath>;
using namespace std;

// Function Prototypes 
void area(int, int);
void hypotenuse(int, int);

int main() { // main starts here
   
    //Variables

    int leg1, leg2;

    cout << "Please enter the two legs of the right triangle: "; // User prompt for two legs
    cin >> leg1 >> leg2;
    cout << endl;

    cout << "The length of the hypotenuse is: "; // Length of hyptotenuse result

    cout << setprecision(1) << fixed;
    area(leg1, leg2);
    
    cout << "\nThe area of the right triangle is: "; // Displays area of triangle

    cout << setprecision(1) << fixed;
    hypotenuse(leg1, leg2);

    return 0;
   
}

void area(int side1, int side2) { // area function starts here
    cout << (0.5 * side1 * side2);
} // area function ends here

void hypotenuse(int length1, int length2) { // area function ends here
    cout << sqrt(pow(length1, 2) + pow(length2, 2));
} // area function ends here
