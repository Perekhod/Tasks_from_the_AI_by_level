/*
Write a programme in which the maximum lift height H
and the range of flight L determine the initial velocity of the body V
and the angle alpha at which the body is thrown to the horizon.
Use the relations tg(alpha) = 4H/L and V = \sqrt (gL / sin(2alpha))
*/

#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>

int main() {
	// Declare variables max hight ,range fly, start speed and angle alpha
	double hMaxHeight{0.0}, lFlyRange{0.0}, vStartSpeed{0.0}, aAlpha{0.0};

	// Prompt the user to enter max hight and range fly
	std::cout << "Enter max height\n";
	std::cin >> hMaxHeight;
	std::cout << "Enter range fly\n";
	std::cin >> lFlyRange;

	// Declare variable for tangens result 
	double tgAlpha{ 0.0 };

	// Calculate thAlha using the formula tg(alpha) = 4H/L
	tgAlpha = 4 * hMaxHeight / lFlyRange;
	// Convert angle degrees to radians
	aAlpha = atan(tgAlpha) * (180 / M_PI);

	// Define a constant for the gravitational acceleration
	const double gAcceleration = 9.8;
	// Calculate start speed using the formula V = \sqrt (gL / sin(2alpha))
	vStartSpeed = sqrt((gAcceleration * lFlyRange) / sin(2 * aAlpha));

	// Display result for user
	std::cout << "Result calculation:\n";
	std::cout << "Alpha = "			<< aAlpha		<< '\n';
	std::cout << "Start Speed = "	<< vStartSpeed	<< '\n';
	return 0;
}