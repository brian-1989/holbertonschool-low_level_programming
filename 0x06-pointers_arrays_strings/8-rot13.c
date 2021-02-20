#include "holberton.h"
/**
 * rot13 - Entry point
 *
 * @cadena: string
 *
 * Return: Always 0 (Success)
 */
char *rot13(char *cadena)
{
	int i, j;
	char cadena_input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cadena_output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; cadena[i] != '\0' ; i++)
	{
		for (j = 0 ; cadena_input[j] != '\0' ; j++)
		{
			if (cadena[i] == cadena_input[j])
			{
				cadena[i] = cadena_output[j];
				break;
			}
		}
	}
	return (cadena);
}
