#include "holberton.h"
/**
 * rev_string - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i, j, k, l, contador;

	char cadena[450];

	contador = 0;
	l = 1;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		contador++;
	}
	for (j = 0 ; j < contador ; j++)
	{
		cadena[contador - l] = s[j];
		l++;
	}
	for (k = 0; k < contador ; k++)
	{
		s[k] = cadena[k];
	}
}
