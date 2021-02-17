#include "holberton.h"
/**
 * _strlen - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i, c;

	c = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
	}
	return (c);
}
