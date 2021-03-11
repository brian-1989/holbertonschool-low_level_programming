#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: arrglo de numeros
 * @size: tamaño del array
 * @cmp: puntero a las funciones
 * Return: i
 */
int int_index(int *array, int  size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	if (!cmp(array[i]))
		return (-1);
	return (i);
}
