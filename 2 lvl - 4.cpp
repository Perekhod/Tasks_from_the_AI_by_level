/*
Write a C++ programme that asks the user for a number
between 1 and 10 and displays its name in English on the screen.
For example, if the user enters 3, the programme should display Three.
If the user inputs a number that is not in the range from 1 to 10,
the programme should print Invalid input.
*/

#include <iostream>

int main()
{
	std::cout << "Enter a number between 1 and 10\n";
	int number{ 0 };
	std::cin >> number;

	switch (number)
	{
	case 1:
		std::cout << "You enter one\n";
		break;
	case 2:
		std::cout << "You enter two\n";
		break;
	case 3:
		std::cout << "You enter three\n";
		break;
	case 4:
		std::cout << "You enter four\n";
		break;
	case 5:
		std::cout << "You enter five\n";
		break;
	case 6:
		std::cout << "You enter six\n";
		break;
	case 7:
		std::cout << "You enter seven\n";
		break;
	case 8:
		std::cout << "You enter eight\n";
		break;
	case 9:
		std::cout << "You enter nine\n";
		break;
	case 10:
		std::cout << "You enter ten\n";
		break;
	default:
		std::cout << "Invalid input\n";
		break;
	}

	return 0;
}