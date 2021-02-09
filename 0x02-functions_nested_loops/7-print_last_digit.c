#include "holberton.h"
/**
 * print_last_digit - Entry point
 *
 *@n: ultimo digito
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		n = -n;
	}
	lastdigit = n % 10;
	_putchar(lastdigit + 48);
	return (lastdigit);
}
