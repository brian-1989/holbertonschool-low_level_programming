#include "holberton.h"
/**
 * open_and_read - open a file and read the text inside of a file.
 * @file_from: pointer at first file.
 * @file_to: pointer at second file.
 */
void open_and_read(char *file_from, char *file_to)
{
	int _o, _clo1, _clo2, _c, i;
	char buf[BUFSIZ];

	if (file_from != NULL)
	{
		_o = open(file_from, O_RDONLY);
		if (_o == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		_c = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		while ((i = read(_o, buf, BUFSIZ)) > 0)
		{
			if (write(_c, buf, i) != i)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
				close(_c);
				exit(99);
			}
		}
		if (i <= -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read to %s\n", file_from);
		}
		_clo2 = close(_c);
		_clo1 = close(_o);
		if (_clo1 == -1 || _clo2 == -1)
		{
			if (_clo1 == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d", _o);
				exit(100);
			}
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", _c);
			exit(100);
		}
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
