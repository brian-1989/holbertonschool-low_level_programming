#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 * @s1: primer string
 * @s2: segundo string
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, h, contador_s1, contador_s2, total;
	char *cadena;

	contador_s1 = 0;
	contador_s2 = 0;
	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		contador_s1++;
	}
	for (j = 0 ; s2[j] != '\0' ; j++)
	{
		contador_s2++;
	}
	total = contador_s1 + contador_s2 + 1;
	cadena = malloc(sizeof(char) * total);
	if (cadena == '\0')
	{
		return ('\0');
	}
	for (k = 0 ; s1[k] != '\0' ; k++)
	{
		cadena[k] = s1[k];
	}
	for (h = 0 ; h < contador_s2 + 1 ; h++)
	{
		cadena[k + h] = s2[h];
	}
	return (cadena);
}
