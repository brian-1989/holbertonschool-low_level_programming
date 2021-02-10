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

	lastdigit = n % 10;
	if (lastdigit < 0)
	{
		lastdigit = -lastdigit;
	}
	_putchar(lastdigit + 48);
	return (lastdigit);
}

