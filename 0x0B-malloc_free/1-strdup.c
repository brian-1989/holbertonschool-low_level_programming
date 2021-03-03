#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	unsigned int i, j, contador;
	char *cadena;

	contador = 0;
	if (str == '\0')
	{
		return ('\0');
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		contador++;
	}
	cadena = malloc(sizeof(char) * contador + 1);
	if (cadena == '\0')
	{
		return ('\0');
	}
	for (j = 0 ; j <= contador ; j++)
	{
		cadena[j] = str[j];
	}
	return (cadena);
}
