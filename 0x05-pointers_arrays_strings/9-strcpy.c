#include "holberton.h"
/**
 * _strcpy - Entry point
 *
 * @src: origen
 *
 * @dest: src
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, contador;

	contador = 0;
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		contador++;
	}
	for (j = 0 ; j < contador ; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
