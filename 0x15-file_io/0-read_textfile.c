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
	char *buf[2000];

	if (filename == NULL)
		return (0);
	abrir = open(filename, O_RDONLY);
	if (abrir == -1)
		return (0);
	lectura = read(abrir, buf, letters);
	if (lectura == -1)
		return (0);
	escritura = write(STDOUT_FILENO, buf, letters);
	if (escritura == -1 || letters > SSIZE_MAX)
		return (0);
	close(abrir);
	return (lectura);
}
