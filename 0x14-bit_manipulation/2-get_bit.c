#include "holberton.h"
/**
 * get_bit - Take a bit in a specified index.
 * @n: decimal number.
 * @index: number specified for take the bit.
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j, k;

	if (index < 33)
	{
		for (i = 0 ; n > 0; i++)
		{
			j = n >> i;
			if (j <= 0)
				return (0);
			if (i == index)
			{
				k = (j & 1);
				return (k);
			}
		}
	}
	return (-1);
}
