#include "holberton.h"
/**
 * string_toupper - Entry point
 *
 * @cadena: string
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *cadena)
{
	int i;

	for (i = 0 ; cadena[i] != '\0' ; i++)
	{
		if (cadena[i] >= 97 && cadena[i] <= 122)
		{
			cadena[i] = cadena[i] - 32;
		}
	}
	return (cadena);
}
