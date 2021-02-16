#include "holberton.h"
/**
 * swap_int - Entry point
 *
 * @a: 1 entero
 *
 * @b: 2 entero
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
