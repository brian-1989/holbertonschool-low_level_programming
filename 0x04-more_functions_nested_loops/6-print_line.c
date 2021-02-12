#include "holberton.h"
/**
 * print_line - Entry point
 *
 *@n: numero a iterar
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i, j;

	i = 95;
	for (j = 0 ; j < n ; j++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
