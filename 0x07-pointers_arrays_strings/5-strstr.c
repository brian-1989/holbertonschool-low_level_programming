#include "holberton.h"
/**
 * _strstr - Entry point
 *
 * @haystack: cadena_1
 *
 * @needle: cadena_2
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, n, contador;

	contador = 0;
	for (i = 0 ; needle[i] != '\0' ; i++)
	{
		contador++;
	}
	for (j = 0 ; haystack[j] != '\0' ; j++)
	{
		for (k = 0 ; needle[k] != '\0' ; k++)
		{
			if (haystack[j] == ' ')
			{
				n = 0;
			}
			if (haystack[j] == needle[k])
			{
				n++;
			}
			if (n == contador)
			{
				return (&(haystack[j - k]));
			}
		}
	}
	if (needle[0] == '\0')
	{
		return (&(haystack[0]));
	}
	else
	{
		return ('\0');
	}
}
