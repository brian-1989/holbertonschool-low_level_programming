#include "search_algos.h"

/**
 *interpolation_search - This function finds a value in a array using
 *the Interpolation search algorithm
 *@array: The array with the integers
 *@size: The size of array
 *@value: The value to find inside of array
 *Return: The index of the position (mid), if find the value
 *in the array. Otherwise (-1)
 */
int interpolation_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	size_t pos = 0;

	if (array == NULL)
		return (-1);
	while (left < right)
	{
		pos = left + (((double)(right - left) / (array[right] - array[left]))
			* (value - array[left]));
		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			left = pos + 1;
		else if (array[pos] > value)
			right = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
