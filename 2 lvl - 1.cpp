/*
Write a C++ programme that asks the user for the radius of a circle and displays
its area and circumference on the screen. For example, if the user enters 5,
the programme should display The area of the circle is 78.54
and the length of the circle is 31.42.
*/

#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>

double area_circle(double radius)
{
	return M_PI * radius * radius;
}

double circumference_circle(double radius)
{
	return 2 * M_PI * radius;
}

int main()
{
	double radius{ 0.0 };
	std::cout << "Enter radius\n";
	std::cin  >> radius;

	std::cout << "Circle area with radius "				<< radius << " = " 
			  << area_circle(radius)					<< '\n';
	std::cout << "Circle circumference with radius "	<< radius << " = "
			  << circumference_circle(radius)			<< '\n';

	return 0;
}