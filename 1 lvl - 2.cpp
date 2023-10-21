/*
Write a C++ programme that asks a user for his or her name and age and outputs them to
the user's name and age and displays them on the
screen with a greeting. For example, if the user enters
Ivan and 25, the programme should output Hi Ivan, you are 25 years old.
*/

#include <iostream>

int main()
{
	std::cout << "Enter your name\n";
	std::string name;
	std::cin >> name;

	std::cout << "Enter your age\n";
	int age{ 0 };
	std::cin >> age;

	std::cout << "Hello, " << name << "! You are " << age << " years old!\n";

	return 0;
}