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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0 ; j < n ; j++)
		{
			_putchar(i);
		}
	}
}
