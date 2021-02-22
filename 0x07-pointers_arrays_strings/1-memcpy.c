#include "holberton.h"
/**
 * _memcpy - Entry point
 *
 * @dest: destin0
 *
 * @src: origen
 *
 * @n: numero de bytes
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
