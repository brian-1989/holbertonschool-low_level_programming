#include "search_algos.h"

/**
 *binary_search_v2 - This function finds a value in a array using
 *the Binary search algorithm
 *@array: The array with the integers
 *@i: Exponential range of the array
 *@size: The size of array
 *@value: The value to find inside of array
 *Return: The index of the position (half_array), if find the value
 *in the array. Otherwise (-1)
 */
int binary_search_v2(int *array, unsigned int i, size_t size, int value)
{
	int left = 0;
	int left_2 = 0;
	int right = 0;
	int half_array = 0;

	if (i >= size)
		left = i / 2, right = i - 1;
	else
		left = i / 2, right = i;
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	while (left <= right)
	{
		printf("Searching in array: ");
		left_2 = left;
		/* This loop is to print the array and the part of array, when divided */
		while (left_2 <= right)
		{
			if (left_2 == right)
				printf("%d\n", array[left_2]);
			else
				printf("%d, ", array[left_2]);
			left_2++;
		}
		half_array = ((left + right) / 2);
		if (value > array[half_array])
			left = half_array + 1;
		else if (value < array[half_array])
			right = half_array - 1;
		else
			return (half_array);
	}
	return (-1);
}

/**
 *exponential_search - This function finds a value in a array using
 *the Exponential search algorithm
 *@array: The array with the integers
 *@size: The size of array
 *@value: The value to find inside of array
 *Return: The result of the binary_search_v2 function
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i = 1;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
		printf("Value checked array[%d] = [%d]\n", i, array[i]),
		i *= 2;
	return (binary_search_v2(array, i, size, value));
}
