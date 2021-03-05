#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 * @max: numero maximo
 * @min: numero minimo
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int i, contador, *m, p;

	if (min > max)
		return (NULL);
	contador = (max - min + 1);
	m = malloc(sizeof(int) * contador);
	if (m == NULL)
		return (NULL);
	p = (max - min);
	for (i = 0 ; i <= p ; i++)
	{
		m[i] = min;
		min++;
	}
	return (m);
}
