#include "holberton.h"
/**
 * palindrome - Entry point
 * @s: string
 * @longitud: longitud de la cadena
 * @j: varible a iterar
 * Return: Always 0 (Success)
 */
int palindrome(char *s, int longitud, int j)
{
	if (s[j] != s[longitud - 1])
	{
		return (0);
	}
	if (j > longitud)
	{
		return (1);
	}
	if (s[j] == s[longitud - 1])
	{
		return (palindrome(s, longitud - 1, j + 1));
	}
	return (0);
}
/**
 * longitud_cadena - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int longitud_cadena(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return (0);
	}
	if (s[i] != '\0')
	{
		return (1 + longitud_cadena(&s[i + 1]));
	}
	return (0);
}
/**
 * is_palindrome - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
	int j, longitud;

	j = 0;
	longitud = longitud_cadena(s);
	return (palindrome(s, longitud, j));
}
