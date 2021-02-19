#include "holberton.h"
/**
 * _strncat - Entry point
 *
 * @src: origen
 *
 * @dest: destino
 *
 * @n: bytes
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, contador;

	contador = 0;
	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		contador++;
	}
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[contador + j] = src[j];
	}
	dest[contador + j] = '\0';
	return (dest);
}
