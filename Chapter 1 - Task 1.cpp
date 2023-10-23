/*
Write a program in which the known the initial velocity V
and time of flight of the body T determine the angle alpha, at which the body
is thrown relative to the horizon.
Use the relationship alpha = arcsine(gT/2V)
*/

// This program calculates the angle of a projectile
// based on its initial velocity and time of flight
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int main() {
    // Declare variables for velocity, time and angle
    double vSpeed  { 0.0 };
    double tTimeFly{ 0.0 };
    double alpha   { 0.0 };

    // Define a constant for the gravitational acceleration
    const double g = 9.8;

    // Prompt the user to enter the velocity and time
    std::cout << "Enter speed\n";
    std::cin  >> vSpeed;
    std::cout << "Enter body time fly\n";
    std::cin  >> tTimeFly;

    // Calculate the angle in degrees using the formula
    // alpha = arcsin(gT/2V) * 180 / pi
    alpha = asin((g * tTimeFly) / (2 * vSpeed)) * 180 / M_PI;

    // Display the result to the user
    std::cout << "Alpha angle = " << alpha << '\n';
    return 0;
}