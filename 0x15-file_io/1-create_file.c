#include "holberton.h"
/**
 * longitud - print the length of a string.
 * @s: string.
 * Return: length of the string.
 */
int longitud(char *s)
{
	int i, c;

	c = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
	}
	return (c);
}
/**
 * create_file - write a file.
 * @filename: name of the file.
 * @text_content: number of letters in the file.
 * Return: -1, if the file no is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	unsigned int crear, len;

	if (filename != NULL)
	{
		if (text_content == NULL)
			return (1);
		crear = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (crear)
		{
			len = longitud(text_content);
			write(crear, text_content, len);
			return (1);
		}
		else
			return (-1);
	}
	return (-1);
}
