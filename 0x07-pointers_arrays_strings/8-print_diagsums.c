#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 *
 * @a: puntero
 *
 * @size: tamaño de la matriz
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, j, der, izq, l;

	der = 0;
	izq = 0;
	l = size - 1;
	for (i = 0 ; i < size ; i++)
	{
		der = der + *(a + i * size + i);
	}
	printf("%d, ", der);
	for (j = 0 ; j < size ; j++)
	{
		izq = izq + *(a + j * size + l);
		l--;
	}
	printf("%d\n", izq);
}
