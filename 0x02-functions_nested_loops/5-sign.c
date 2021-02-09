#include "holberton.h"
/**
 * print_sign - Entry point
 *
 *@n: positivo, negativo o cero
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
}
