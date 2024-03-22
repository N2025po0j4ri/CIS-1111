// Exercise402.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nirupama Poojari
// Date: 2/5/2023
// Program Name:  Expressions Exercise
// Program Description: program that gives cyber security recommendations &
//                      a pricing estimate for a company based on the number of computers they have on their network.
#include <iostream> // imports libraries for streams 
#include <iomanip> // imports
#include <string> // Gives access to string values 
using namespace std; 

int main() { // main is written this way in C++
	cout << "Welcome to Safe-Secure.\n\n"; // Displays Safe-Secure
	float pricePerComputer = 50.00, priceFirewallDevice = 125.00, consultFee = 200.00; // pricePerComputer
	cout << setprecision(2) << fixed; // Sets precision to 2 places
		cout << "Our pricing is as follows:\n"; // Displays pricing is as follows
		cout << left << setw(30) << "Per Computer: " << right << setw(10) << pricePerComputer <<"\n"; // Per computer
		cout << left << setw(30) << "Per firewall device: " << right << setw(10) << priceFirewallDevice << "\n"; // Firewall device fee
		cout << left << setw(30) << "Base consultation fee: " << right << setw(10) << consultFee << "\n\n"; // consultation fee

		cout << "What is the full title of your company? "; // Title of your company
		string companyName; // companyName
		getline(cin, companyName); // stores input
		cout << "\n"; // Displays a newline

		cout << "How many computers are on the network? "; // Displays a question "How many computers are on the network?"
		string numberOfComputers; // stores number of computers in a string
		getline(cin, numberOfComputers); // stores input for number of computers
		int noComputers = stoi(numberOfComputers); // number of computers is stored
		float computerFee = pricePerComputer * noComputers; // computer fee is to be stored
		float firewallFee = priceFirewallDevice * ((noComputers / 6) + 1); // firewallFee will be stored
		float finalBill = computerFee + firewallFee + consultFee; // finalBill is stored here
		
		cout << "\nThank you. The estimate for "<< companyName <<" is complete.\n"; // Thank you
		cout << left << setw(30) << "Computer Fee: " << right << setw(10) << computerFee <<" \n"; // Computer Fee will be stored
		cout << left << setw(30) << "Firewall Fee: " << right << setw(10) << firewallFee <<"\n"; // Firewall Fee will be stored
		cout << left << setw(30) << "Consultation Fee: " << right << setw(10) << consultFee << "\n"; // Consultation fee
		cout << left << setw(30) << "Final Bill: " << right << setw(10) << finalBill <<"\n"; // Final Bill to be stored

	return 0; // returns 0

} // main() is stored
