/*
Write a C++ programme that queries the user for two real numbers
and displays their product on the screen. For example, if the user enters 3.5 and 2.1,
the programme should display 7.35.
*/

#include <iostream>

int main()
{
	double value_a{ 1.0 };
	double value_b{ 1.0 };

	std::cout << "Enter the first number\n";
	std::cin >> value_a;

	std::cout << "Enter the second number\n";
	std::cin >> value_b;

	std::cout << "product of those numbers = " << value_a * value_b;

	return 0;
}