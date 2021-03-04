#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: numero de columnas
 * @height: numero de filas
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, h;
	int **m;

	if (width <= 0)
	{
		return ('\0');
	}
	if (height <= 0)
	{
		return ('\0');
	}
	m = malloc(sizeof(int *) * height);
	if (m == '\0')
		return ('\0');
	for (i = 0; i < height ; i++)
	{
		m[i] = malloc(sizeof(int) * width);
		if (m[i] == '\0')
		{
			for (j = i ; j > 0 ; j++)
			{
				free(m[i]);
			}
			free(m);
			return ('\0');
		}
	}
	for (k = 0; k < height ; k++)
	{
		for (h = 0 ; h < width ; h++)
		{
			m[k][h] = 0;
		}
	}
	return (m);
}
