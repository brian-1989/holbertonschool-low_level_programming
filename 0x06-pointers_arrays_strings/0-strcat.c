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
	int i, j, k, contador;

	contador = 0;
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		contador++;
	}
	k = contador - 1;
	for (j = 0 ; j < k + 1 ; j++)
	{
		dest[k + j] = src[j];
	}
	dest[k + j] = '\0';
	return (dest);
}
