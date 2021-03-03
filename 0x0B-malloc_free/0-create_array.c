#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: tamaño de la memoria
 * @c: caracter
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
	{
		return ('\0');
	}
	t = malloc(sizeof(char) * size);
	if (t == '\0')
	{
		return ('\0');
	}
	for (i = 0; i < size ; i++)
	{
		t[i] = c;
	}
	return (t);
}
