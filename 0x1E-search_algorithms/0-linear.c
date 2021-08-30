#include "search_algos.h"

/**
 *linear_search - This function finds a value in a array using
 *the Linear search algorithm
 *@array: The array with the integers
 *@size: The size of array
 *@value: The value to find inside of array
 *Return: The index of the position (i), if find the value
 *in the array. Otherwise (-1)
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);
	for ( ; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
