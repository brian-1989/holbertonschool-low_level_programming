#include "holberton.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, k_decenas, h_unidades;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			k_decenas = ((i * j) / 10) + 48;
			h_unidades = ((i * j) % 10) + 48;
			if (j == 0)
			{
				_putchar(h_unidades);
			}
			else if (k_decenas == 48)
			{
				_putchar(32);
				_putchar(h_unidades);
			}
			else
			{
				_putchar(k_decenas);
				_putchar(h_unidades);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
