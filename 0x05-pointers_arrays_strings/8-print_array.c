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

	if (n <= 0)
	{
		printf("\n");
	}
	for (i = 0; i < n ; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
