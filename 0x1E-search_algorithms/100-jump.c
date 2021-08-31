#include "search_algos.h"

/**
 *jump_search - This function finds a value in a array using
 *the Jump search algorithm
 *@array: The array with the integers
 *@size: The size of array
 *@value: The value to find inside of array
 *Return: The index of the position (left), if find the value
 *in the array. Otherwise (-1)
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	int left = 0;
	int right = 0;
	int root = sqrt(size);

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		if (array[i] >= value)
		{
			left = i - root;
			right = i;
			printf("Value found between indexes [%d] and [%d]\n", left, right);
			while (left <= right)
			{
				printf("Value checked array[%d] = [%d]\n", left, array[left]);
				if (array[left] == value)
					return (left);
				left++;
			}
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += root;
	}
	return (-1);
}
