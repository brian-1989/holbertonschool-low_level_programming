#include "holberton.h"
/**
 * _strchr - Entry point
 *
 * @s: cadena
 *
 * @c: letra
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
