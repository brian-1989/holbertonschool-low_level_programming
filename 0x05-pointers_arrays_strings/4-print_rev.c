#include "holberton.h"
/**
 * print_rev - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i, j, contador;

	contador = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		contador++;
	}
	for (j = contador - 1 ; s[j] != '\0' ; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
