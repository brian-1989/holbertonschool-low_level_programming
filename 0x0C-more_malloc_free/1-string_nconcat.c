#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * @s1: string_1
 * @s2: string_2
 * @n: numero de bytes
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, h, contador_s1 = 0, contador_s2 = 0, total;
	char *cadena;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
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
	total = contador_s1 + n + 1;
	cadena = malloc(sizeof(char) * total);
	if (cadena == NULL)
		return (NULL);
	if (n >= contador_s2)
		return (s2);
	for (k = 0 ; s1[k] != '\0' ; k++)
	{
		cadena[k] = s1[k];
	}
	for (h = 0 ; h < n ; h++)
	{
		cadena[k + h] = s2[h];
	}
	cadena[k + h] = '\0';
	return (cadena);
}
