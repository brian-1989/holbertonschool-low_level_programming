#include "holberton.h"
/**
 * leet - Entry point
 *
 * @cadena: string
 *
 * Return: Always 0 (Success)
 */
char *leet(char *cadena)
{
	int i, j;
	char cadena_minus[] = "aeotl";
	char cadena_mayus[] = "AEOTL";
	char cadena_enteros[] = "43071";

	for (i = 0 ; cadena[i] != '\0' ; i++)
	{
		for (j = 0 ; cadena_minus[j] && cadena_mayus[j] != '\0'; j++)
		{
			if (cadena[i] == cadena_minus[j] && cadena_mayus[j])
			{
				cadena[i] = cadena_enteros[j];
			}
		}
	}
	return (cadena);
}
