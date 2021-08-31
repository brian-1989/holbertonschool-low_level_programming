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
	unsigned int mid = 0;

	if (array == NULL)
		return (-1);
	while (left < right)
	{
		mid = left + ((value - array[left]) * (right - left))
			/ (array[right] - array[left]);
		if (mid > size - 1)
		{
			printf("Value checked array[%d] is out of range\n", mid);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
