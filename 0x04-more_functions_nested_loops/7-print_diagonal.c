#include "holberton.h"
/**
 * print_diagonal - Entry point
 *
 *@n: numero a iterar
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
