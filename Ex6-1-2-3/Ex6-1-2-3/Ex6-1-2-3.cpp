#include "pch.h"
#include <iostream>


int main()
{
	//Bubble sort

	/*const int size = 10;
	int arr[size] = { 84,17,11,9,21,52,25,3,13,22 };

	std::cout << "The array before sorting is : ";
	for (int i = 0; i < size; i++)
	{
		
		std::cout << arr[i] << " ";
	}
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			
			if (arr[j] > arr[j + 1])
			{
				int c = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
			}
		}
	}
	std::cout << std::endl;
	std::cout << "The array after Bubble sort is : ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;*/

	//Insertion sort

	const int size = 10;
	int arr[size] = { 84,17,11,9,21,52,25,3,13,22 };
	int smallNb;
	
	std::cout << "The array before sorting is : ";
	for (int i = 0; i < size; i++)
	{

		std::cout << arr[i] << " ";
	}

	for (int i = 1; i < size; i++) {
		smallNb = arr[i];
		int j = i;
		while (j > 0 && arr[j - 1] > smallNb) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = smallNb;
	}
	std::cout << std::endl;
	std::cout << "The array after Bubble sort is : ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl; 

	//Quick sort

	system("pause");
	return EXIT_SUCCESS;
}
