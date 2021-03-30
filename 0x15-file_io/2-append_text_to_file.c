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
 * append_text_to_file - append text at end of a file.
 * @filename: name of the file.
 * @text_content: string for add at end of a file.
 * Return: -1, if the file no is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int crear, len, escritura;

	if (filename != NULL)
	{
		crear = open(filename, O_APPEND | O_RDWR);
		if (text_content == NULL)
		{
			if (crear != -1)
				return (1);
			else
				return (-1);
		}
		if (crear != -1)
		{
			len = longitud(text_content);
			escritura = write(crear, text_content, len);
			if (escritura == -1)
				return (-1);
			return (1);
		}
		else
			return (-1);
	}
	return (-1);
}
