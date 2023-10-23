/*
For a body thrown at an angle alpha to the horizon with initial velocity V,
determine the range of the body L.
Use the relationship L = ((V^2 * sin(2 * alpha))/g))
*/

// This program calculates the flight range of a projectile
// based on its initial velocity and angle
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int main() {

	// Declare variables for the angle, speed and flight range
	double aAlpha       { 0.0 };
	double vSpeed       { 0.0 };
	double lFlightRange { 0.0 };
	// Define a constant for the gravitational acceleration
	const double g = 9.8;

	// Prompt the user to enter the angle and speed
	std::cout << "Enter angle alpha\n";
	std::cin  >> aAlpha;
	std::cout << "Enter start speed\n";
	std::cin  >> vSpeed;

	// Convert angle from degrees to radians
	aAlpha = aAlpha * M_PI / 180;

	// Calculate the flight range using the formula
	// L = ((V^2 * sin(2 * alpha))/g))
	lFlightRange = ((vSpeed * vSpeed) * sin(2 * aAlpha)) / g;
	// Display the result to the user
	std::cout << "Flight range = " << lFlightRange << '\n';

	return 0;
}