/*
Write a C++ programme that asks the user for a string and displays it
in reverse order.For example, if the user enters hello,
the programme should print olleh.
*/

#include<iostream>
#include<string>

int main()
{
	std::cout << "Enter the string\n";

	std::string string{ "" };
	std::cin >> string;

	std::cout << "Your string before reverse: " << string << '\n';

	std::string reverse_string{ "" };
	
	for (auto it = string.rbegin(); it != string.rend(); ++it)
	{
		reverse_string.push_back(*it);
	}

	std::cout << '\n';

	std::cout << "Your string after reverse: " << reverse_string << '\n';

	return 0;
}
