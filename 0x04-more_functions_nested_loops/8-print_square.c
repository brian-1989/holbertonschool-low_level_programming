#include "holberton.h"
/**
 * print_square - Entry point
 *
 *@size: numero a iterar
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int j, k, numeral;

	numeral = 35;
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (j = 0 ; j < size ; j++)
	{
		for (k = 0 ; k < size ; k++)
		{
			_putchar(numeral);
		}
		_putchar('\n');
	}
}
