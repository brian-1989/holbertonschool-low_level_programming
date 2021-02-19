#include "holberton.h"
/**
 * reverse_array - Entry point
 *
 * @a: string
 *
 * @n: tamaño del vector
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, j, l;
	int enteros[450];

	l = 1;
	for (i = 0; i < n ; i++)
	{
		enteros[n - l] = a[i];
		l++;
	}
	for (j = 0 ; j < n ; j++)
	{
		a[j] = enteros[j];
	}
}
