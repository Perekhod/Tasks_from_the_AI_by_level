/*
Write a function that takes an array of integers and
returns the sum of all even elements in the array. If the array is empty
or contains no even elements, the function should return 0.

sumEven ( {1, 2, 3, 4, 5} ) ➞ 6 // 2 + 4 = 6
sumEven ( { -1, -2, -3, -4, -5} ) ➞ -6 // -2 + -4 = -6
sumEven ( { } ) ➞ 0 // empty array
sumEven ( { 1, 3, 5, 7} ) ➞ 0 // no even elements

*/

#include <iostream>
#include <vector>

int sum_of_even_numbers(std::vector<int> arr){
	int sum{ 0 };

	if (arr.empty()){
		return 0;
	}
	else{
		for (size_t i = 0; i < arr.size(); i++){
			if (arr[i] % 2 == 0){
				sum += arr[i];
			}
		}
		if (sum != 0) {
			return sum;
		}
		else {
			std::cout << "Array not have even numbers!\n";
		}
	}
}

int main()
{
	std::vector<int> vec_int{1,3,5,7,9 };
	std::cout << sum_of_even_numbers(vec_int);

	return 0;
}