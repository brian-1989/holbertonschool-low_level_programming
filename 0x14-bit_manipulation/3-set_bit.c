#include "holberton.h"
/**
 * set_bit - take a bit in a specified index and change it by 1.
 * @n: decimal number.
 * @index: specified number to change the bit.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, j, k;

	if (index < 32)
	{
		for (i = 0 ; i <= index; i++)
		{
			j = *n;
			k = 1 << index;
			if (i == index)
			{
				*n = (j | k);
				return (1);
			}
		}
	}
	return (-1);
}
