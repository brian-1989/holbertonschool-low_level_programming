#include "holberton.h"
#include <stdlib.h>
/**
 * longitud - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int longitud(char *s)
{
	int i, c = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
	}
	return (c);
}
/**
 * argstostr - Entry point
 *
 * @ac: numero de elementos
 * @av: array
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	int i, j, h, p = 0, contador = 0;
	char *cadena;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac ; i++)
	{
		contador = contador + longitud(av[i]);
	}
	cadena = malloc(sizeof(char) * (contador + ac));
	if (cadena == NULL)
	{
		free(cadena);
		return (NULL);
	}
	for (j = 0 ; j < ac ; j++)
	{
		for (h = 0 ; h < longitud(av[j]); h++)
		{
			cadena[p] = av[j][h];
			p++;
		}
		cadena[p] = '\n';
		p++;
	}
	cadena[p] = '\0';
	return (cadena);
}
