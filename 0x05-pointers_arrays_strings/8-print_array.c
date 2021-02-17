#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Entry point
 *
 * @a: Array
 *
 * @n: numero de elementos
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
