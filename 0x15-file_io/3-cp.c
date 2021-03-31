#include "holberton.h"
/**
 * create_and_write - create a file and write inside of a file.
 * @buf: pointer that stores the text that is going to be written.
 * @file_to: pointers at name of the file.
 * @_r: length of the texto read.
 */
void create_and_write(char *buf, const char *file_to, int _r)
{
	int _c, _w, _clo;

	if (file_to != NULL)
	{
		_c = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (_c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		_w = write(_c, buf, _r);
		if (_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}
/**
 * open_and_read - open a file and read the text inside of a file.
 * @file_from: pointer at first file.
 * @file_to: pointer at second file.
 */
void open_and_read(const char *file_from, const char *file_to)
{
	int _o, _r, _clo;
	char *buf;

	if (file_from != NULL)
	{
		_o = open(file_from, O_RDONLY);
		if (_o == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		buf = malloc(sizeof(char) * 1024);
		if (buf == NULL)
			return;
		_r = read(_o, buf, INT_MAX);
		if (_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		_clo = close(_o);
		if (_clo == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", _o);
			exit(100);
		}
		create_and_write(buf, file_to, _r);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}
/**
 * main - entry point.
 * @argc: the number of command line arguments.
 * @argv: An array of size argc.
 * Return: Always 0 (Success).
 */
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_and_read(argv[1], argv[2]);
	return (0);
}
