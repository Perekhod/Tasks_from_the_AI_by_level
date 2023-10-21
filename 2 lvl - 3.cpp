/*
Write a C++ programme that asks the user for two integers and
displays their greatest common divisor (NOD) on the screen.
For example, if the user enters 12 and 18,
the programme should display the NOD of 12 and 18 equals 6.
*/


#include<iostream>
#include<vector>
#include<algorithm>

int NOD(int a, int b)
{
    // Создаем вектор для хранения общих делителей чисел
    std::vector<int> divisors;

    // Находим минимальное из двух чисел
    int min = std::min(a, b);

    // Перебираем все возможные делители от 1 до минимального числа
    for (int i = 1; i <= min; i++)
    {
        // Если оба числа делятся на i без остатка, то i - общий делитель
        if (a % i == 0 && b % i == 0)
        {
            // Добавляем i в вектор общих делителей
            divisors.push_back(i);
        }
    }

    // Находим максимальный элемент в векторе общих делителей
    int gcd = *std::max_element(divisors.begin(), divisors.end());

    // Возвращаем НОД
    return gcd;
}

int main()
{
    std::cout << "Enter the first number\n";
    int first_number{ 0 };
    std::cin >> first_number;

    std::cout << "Enter the second number\n";
    int second_number{ 0 };
    std::cin >> second_number;

    if (first_number > second_number)
    {
        std::cout << "NOD for " << first_number << " and " << second_number << " = "
            << NOD(first_number, second_number) << '\n';
    }
    else
    {
        std::cout << "NOD for " << second_number << " and " << first_number << " = "
            << NOD(second_number, first_number) << '\n';
    }
    return 0;
}
