/*
Write a C++ programme that asks the user for a number
between 1 and 100 and displays it in binary number system.
For example, if the user enters 42, the programme should print 101010.
*/

#include<iostream>
#include<vector>

int main()
{
	std::cout << "Enter the number 1 to 100\n";
	int number{ 0 };
	std::cin >> number;

	std::vector<int> vec_int;

	// ��������� ���������� number ��� ������� �� 2 � �������� �� �������� ��� ������ �������� �����
	while (number != 0)
	{
		vec_int.push_back(number % 2);
		number /= 2;
	}

	std::cout << number << " in binary number" << " equals: ";
	// ��������� �������� �������� ��� �������� ��������� ������� � ����� �� ������
	for (auto it = vec_int.rbegin(); it != vec_int.rend(); it++)
	{
		// ��������� ��������� *it ��� ������ ��������� �������
		std::cout << *it;
	}

	return 0;
}
