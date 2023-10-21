/*
Write a function that takes a pointer to an array of integers
and its size, and returns a pointer to a new array that
contains all elements of the original array in reverse order.
If the passed pointer is NULL or the array size is 0,
function must return NULL.

Examples:

int* arr1 = new int[5] {1, 2, 3, 4, 5};
int* arr2 = reverseArray(arr1, 5); // arr2 -> {5, 4, 3, 2, 1}

int* arr3 = new int[3] {-1, 0, 1};
int* arr4 = reverseArray(arr3, 3); // arr4 -> {1, 0, -1}

int* arr5 = NULL;
int* arr6 = reverseArray(arr5, 0); // arr6 -> NULL
*/

#include <iostream>

const int SIZE = 5;

int* pointer_arr(int arr[],int SIZE){
	if (arr == NULL){
		return 0;
	}
	if (SIZE == 0){
		return 0;
	}
	else {
		int* reversed_array = new int[SIZE];
		for (size_t i = 0; i < 5; i++) {
			reversed_array[i] = arr[i];
		}

		int element;
		for (int i = 0; i < (SIZE / 2); i++) {
			element = reversed_array[i];
			reversed_array[i] = reversed_array[SIZE - 1 - i];
			reversed_array[SIZE - 1 - i] = element;
		}
		return reversed_array;
	}
}

int main()
{
	int* arr = new int[SIZE]{ 5,4,3,2,1 };
	
	std::cout << "arr \t= ";
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << ' ';
	}

    int* arr2 = pointer_arr(arr, SIZE);

	std::cout << "\narr2 \t= ";
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr2[i] << ' ';
	}

	delete[] arr;
	delete[] arr2;
	return 0;
}