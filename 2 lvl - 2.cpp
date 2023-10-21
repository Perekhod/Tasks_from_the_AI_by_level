/*
Write a C++ programme that asks the user for two words and displays them
in alphabetical order. For example, if the user enters hello and world,
the programme should print hello world. If the user enters world and hello,
the programme should display hello world.
*/

#include <iostream>

int main()
{
	std::string first_word	{ "" };
	std::string second_word	{ "" };

	std::cout << "Enter the first word \n";
	std::cin  >> first_word;
	std::cout << "Enter the second word\n";
	std::cin  >> second_word;

	if (first_word < second_word)
	{
		std::cout << first_word << ' ' << second_word << '\n';
	}
	else
	{
		std::cout << second_word << ' ' << first_word << '\n';
	}

	return 0;
}