#include "holberton.h"
/**
 * cap_string - Entry point
 *
 * @cad: string
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *cad)
{
	int i, j;
	char separ[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0 ; cad[i] != '\0' ; i++)
	{
		for (j = 0 ; separ[j] != '\0' ; j++)
		{
			if (cad[0] >= 97 && cad[0] <= 122)
			{
				cad[0] = cad[0] - 32;
			}
			else if (cad[i] == separ[j] && cad[i + 1] >= 97 && cad[i + 1] <= 122)
			{
				cad[i + 1] = cad[i + 1] - 32;
			}
		}
	}
	return (cad);
}
