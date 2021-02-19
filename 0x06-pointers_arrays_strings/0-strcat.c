#include "holberton.h"
/**
 * _strcat - Entry point
 *
 * @src: origen
 *
 * @dest: destino
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j, contador;

	contador = 0;
	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		contador++;
	}
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[contador + j] = src[j];
	}
	dest[contador + j] = '\0';
	return (dest);
}
