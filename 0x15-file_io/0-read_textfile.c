#include "holberton.h"
/**
 * read_textfile - Write what's inside a file.
 * @filename: file to print.
 * @letters: number of letters in the file.
 * Return: the number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int abrir, lectura, escritura;
	char *buf;

	if (filename == NULL || letters > SSIZE_MAX)
		return (0);
	abrir = open(filename, O_RDONLY);
	if (abrir == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	lectura = read(abrir, buf, letters);
	if (lectura == -1)
		return (0);
	escritura = write(STDOUT_FILENO, buf, lectura);
	if (escritura == -1)
		return (0);
	close(abrir);
	free(buf);
	return (lectura);
}
