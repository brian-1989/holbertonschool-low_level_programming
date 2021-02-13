#include "holberton.h"
/**
 * print_triangle - Entry point
 *
 *@size: tamaño
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int x, y, num;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (y = 0; y < size; y++)
	{
		for (x = 1; x < size - y; x++)
		{
			_putchar(' ');
		}
		for (num = 1; num <= y + 1; num++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
