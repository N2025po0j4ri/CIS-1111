// Name: Nirupama Poojari
// Date: 1/29/2023
// Program Name: To Infinity and Beyond!
// Program Description: Buzz Lightyear’s trips, travel time and the amount of fuel used per trip.

#include <iostream>; // iostream is here
#include <iomanip>;  // parametric manipulators
using namespace std; // namespace is what connects the brains of the computer to the screen

int main() { // main starts here
	//Variables declaration and intialization
	string startPlanetTrip1 = "Aldor", endPlanetTrip1 = "Earth"; // Trip1 planets
	string startPlanetTrip2 = "Mandalor", endPlanetTrip2 = "Riza"; // Trip2 planets
	string startPlanetTrip3 = "Earth", endPlanetTrip3 = "Kronos"; // Trip3 planets
	string startPlanetTrip4 = "Pandora", endPlanetTrip4 = "Aldor"; // Trip4 planets
	double distanceTrip1 = 77891, distanceTrip2 = 24812, distanceTrip3 = 163628, distanceTrip4 = 234550;
	double distanceBetweenTrip1, travelTimeTrip1 = 2.3, fuelAmountTrip1 = 29.33, fuelRate = 12.75;
	// Variables declaration and calculations
	/*
	* Program pseudocode
	* FuelRate = 12.75 gallons
	* TravelRate = Distance / Time
	* Time = Distance / TravelRate
	* FuelAmount = FuelRate * Time
	*/
	double travelRate = distanceTrip1 / travelTimeTrip1;
	double travelTimeTrip2 = distanceTrip2 / travelRate;
	double travelTimeTrip3 = distanceTrip3 / travelRate;
	double travelTimeTrip4 = distanceTrip4 / travelRate;
	double fuelAmountTrip2 = fuelRate * travelTimeTrip2;
	double fuelAmountTrip3 = fuelRate * travelTimeTrip3;
	double fuelAmountTrip4 = fuelRate * travelTimeTrip4;

	cout << fixed << setprecision(2); // Precision is set to display variables limited to two decimal places
	cout << "Travel Rate is " << travelRate <<" Miles per minute." << endl; // Displays Travel Rate
	cout << "Trip1: " << startPlanetTrip1 << " to " << endPlanetTrip1 << "\t" << "Travel time = " << travelTimeTrip1 << " minutes, "; // Planets here
	cout << "Fuel use = " << fuelAmountTrip1 << " gallons." << endl; // Fuel use is this
	cout << "Trip2: " << startPlanetTrip2 << " to " << endPlanetTrip2 << "\t" << "Travel time = " << travelTimeTrip2 << " minutes, "; // Planets here
	cout << "Fuel use = " << fuelAmountTrip2 << " gallons." << endl; // Fuel use is this
	cout << "Trip3: " << startPlanetTrip3 << " to " << endPlanetTrip3 << "\t" << "Travel time = " << travelTimeTrip3 << " minutes, "; // Planets here
	cout << "Fuel use = " << fuelAmountTrip3 << " gallons." << endl; // Fuel use is this
	cout << "Trip2: " << startPlanetTrip4 << " to " << endPlanetTrip4 << "\t" << "Travel time = " << travelTimeTrip4 << " minutes, "; // Planets here
	cout << "Fuel use = " << fuelAmountTrip4 << " gallons." << endl; // Fuel use is this
	
	return 0;
	
} // main ends here
