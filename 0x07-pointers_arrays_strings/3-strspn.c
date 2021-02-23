#include "holberton.h"
/**
 * _strspn - Entry point
 *
 * @s: cadena_1
 *
 * @accept: cadena_2
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, contador;

	contador = 0;
	for (i = 0 ; s[i] != '\0' && s[i] != ' ' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				contador++;
				break;
			}
		}
	}
	return (contador);
}
