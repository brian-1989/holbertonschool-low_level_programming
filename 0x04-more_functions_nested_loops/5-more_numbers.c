#include "holberton.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i <= 11 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10 && j <= 14)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
