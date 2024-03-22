// Name: Nirupama Poojari
// Date: 1/20/2023
// Program: Exercise 2.2 
// Description: Program that uses variables to output information about my academic plan at Sinclair College.

#include <iostream>
#include<string>
using namespace std;

int main() {

	string termName = "Spring 2023";
	string classOneName = "CIS 1111";
	int classOneCredit = 3;
	string classTwoName = "MAT 0450";
	int classTwoCredit = 1;
	string classThreeName = "MAT 1450";
	int classThreeCredit = 3;

	cout << "This term, "<< termName <<", I am taking " << classOneName << " which is " << classOneCredit << " credit hours. \n";
	cout << "This term, " << termName << ", I am taking " << classTwoName << " which is " << classTwoCredit << " credit hours. \n";
	cout << "This term, " << termName << ", I am taking " << classThreeName << " which is " << classThreeCredit << " credit hours. \n";
	return 0;
}