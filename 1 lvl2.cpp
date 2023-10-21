#include <iostream>

int main()
{
	std::cout << "Enter your name\n";
	std::string name;
	std::cin >> name;

	std::cout << "Enter your age\n";
	int age{ 0 };
	std::cin >> age;

	std::cout << "Hello " << name << "You " << age << "years!\n";

	return 0;
}