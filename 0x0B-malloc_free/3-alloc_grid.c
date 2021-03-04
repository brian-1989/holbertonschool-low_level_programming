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
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(int *) * height);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height ; i++)
	{
		m[i] = malloc(sizeof(int) * width);
		if (m[i] == NULL)
		{
			for (j = i ; j > 0 ; j--)
			{
				free(m[i]);
			}
			free(m);
			return (NULL);
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
