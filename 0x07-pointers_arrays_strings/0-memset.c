#include "holberton.h"
/**
 * _memset - Entry point
 *
 * @s: area de memoria
 *
 * @b: lo que se quiere llenar la memoria
 *
 * @n: numero de bytes
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
