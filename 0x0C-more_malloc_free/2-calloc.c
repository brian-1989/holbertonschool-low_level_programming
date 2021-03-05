#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Entry point
 * @nmemb: numero de elementos
 * @size: numero de bytes
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == NULL)
		return (NULL);
	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		m[i] = 0;
	}
	return (m);
}
