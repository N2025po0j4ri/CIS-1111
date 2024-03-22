// Name: Nirupama Poojari
// Date: 1/20/2023
// Program Name: Variables Exercise 1
// Program Description: Providing information about theme park attractions
#include <iostream>
#include <string>

using namespace std;

int main() {
	string parkName = "Beaver Park";
	string attraction1 = "Woodland Walking Trail";
	string attraction2 = "AMC Gaming Arcade";
	string attraction3 = "Fishing Station";
	double ticketPrice = 150.05;

	cout << "Welcome... to " << parkName << "\n\n";
	cout << parkName << " features three family-friendly attractions, including our "
		<< attraction1 << ", " << attraction2 << ", and a " << attraction3 << ". \n\n";

	cout << "All of this for the very low price of $" << ticketPrice << "!";
	return 0;

}