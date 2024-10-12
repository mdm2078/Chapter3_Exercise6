// Chapter3_Exercise6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	// Constant for the recipe
	const double sugarPer48 = 1.5;  // Cups of sugar for 48 cookies
	const double butterPer48 = 1.0;  // Cups of butter for 48 cookies
	const double flourPer48 = 2.75;  // Cups of flour for 48 cookies
	const int cookiesPerBatch = 48;  //Number of cookies in the original recipe

	// Ask the userhow many cookies they want to make
	int desiredCookies;
	cout << "Enter the number of cookies you want to make:";
	cin >> desiredCookies;

	// Calculate the proportion of ingredients needed
	double sugarNeeded = (desiredCookies * sugarPer48) / cookiesPerBatch;
	double butterNeeded = (desiredCookies * butterPer48) / cookiesPerBatch;
	double flourNeeded = (desiredCookies * flourPer48) / cookiesPerBatch;

	// Display the result
	cout << "To make" << desiredCookies << "cookies, you will need:\n";
	cout << sugarNeeded << "cups of sugar\n";
	cout << butterNeeded << "cups of butter\n";
	cout << flourNeeded << "cups of flour\n";

	return 0;

}

