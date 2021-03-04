#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: numero de espaio de memoria
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(sizeof(char) * b);
	if (address == NULL)
		exit (98);
	return (address);
}
