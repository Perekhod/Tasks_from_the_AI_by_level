/*
A man on the edge of a cliff of height H throws with initial velocity V
a stone at the angle alpha to the horizon. Write a program that determines the position of
the stone (height of the cliff x(t)) according to the time t entered by the user.
user input time t determines the position of the stone (height from the bottom of the
cliff x(t) and the distance to the edge of the cliff y(t)).
distance to the edge of the cliff y(t)).Provide for the case when the stone has fallen
to the bottom of the cliff.(Use the ternary operator.)
The equations of motion of the stone are of the form:
along the horizontal axis x(t) = V * t * cos(alpha), along the upwardly directed
vertical axis y(t) = H + V * t * sin(alpha) - g * t^2/2 (the coordinate is counted from the
the bottom of the cliff).The time of flight of the stone T is determined by the condition y(T) = 0,
i.e. H + V*T*san(alpha) - gT^2/2 = 0, whence we obtain
T = (V * sin(aplha)) / g)) * (1 + \sqrt 1 + ((2 * g * H) / (V^2 * sin^2(alha))
*/

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int main() {
	// Declare the height, speed, angle alpha and time
	double hHeight{ 0.0 }, vSpeed{ 0.0 },aAlpha{ 0.0 }, tTime{ 0.0 };

	// Prompt the user enter the height, speed, time and angle
	std::cout << "Enter cliff height\n";
	std::cin >> hHeight;
	std::cout << "Enter start speed\n";
	std::cin >> vSpeed;
	std::cout << "Enter angle in degrees\n";
	std::cin >> aAlpha;
	std::cout << "Enter time\n";
	std::cin >> tTime;

	// Declare the stone position and cliff edge distance
	double stonePosition{ 0.0 }, cliffEdgeDistance{ 0.0 };

	// Convert angle from degrees to radians
	aAlpha = aAlpha * M_PI / 180;

	// Calculate the stone position using formula x(t) = V * t * cos(alpha)
	stonePosition = vSpeed * tTime * cos(aAlpha);

	// Define a constant the gravitational acceleration
	const double g = 9.8;
	// Calculate the cliff edge distance using formula y(t) = H + V * t * sin(alpha) - g * t^2/2
	cliffEdgeDistance = hHeight + vSpeed * tTime * sin(aAlpha) - (g * tTime * tTime / 2);

	// Display result for user
	std::cout << "Result calculation:\n";
	std::cout << "Stone position = " << stonePosition << '\n';
	std::cout << "Cliff edge distance = " << cliffEdgeDistance << '\n';

	// Declare tFlyTime
	double tFlyTime{ 0.0 };
	// Calculate the stone fly time using formula
	// T = (V * sin(aplha)) / g)) * (1 + \sqrt 1 + ((2 * g * H) / (V^2 * sin^2(alha))
	tFlyTime = ((vSpeed * sin(aAlpha) / g) * (1 + (sqrt(1 + (2 * g * hHeight)
		      / (vSpeed * vSpeed * sin(aAlpha) * sin(aAlpha))))));
	// Use ternary operator to check if the stone fell to the bottom or not
	tTime < tFlyTime ? std::cout << "The stone is still in flight\n" 
		             : std::cout << "The stone fell to the bottom\n";

	return 0;
}