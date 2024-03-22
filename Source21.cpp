
#include <iostream>
#include <string>

using namespace std;

int main() {
	string parkName = "Beaver Park";
	string attraction1 = "Wright State";
	string attraction2 = "AMC";
	string attraction3 = "Museum";
	double ticketPrice = 150.05;

	cout << "Welcome... to " << parkName << "\n\n";
	cout << parkName << " features three family-friendly attractions, including our "
		<< attraction1 << ", " << attraction2 << ", and a " << attraction3 << ". \n\n";

	cout << "All of this for the very low price of $" << ticketPrice << "!";

}