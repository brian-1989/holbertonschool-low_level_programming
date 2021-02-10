#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 *
 *@n: los valores
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i, k, h;

	if (n == 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d\n", i);
		}
	}
	else if (n < 98)
	{
		for (k = n ; k <= 98 ; k++)
		{
			if (k == 98)
			{
				printf("%d\n", k);
				break;
			}
			printf("%d, ", k);
		}
	}
	else if (n > 98)
	{
		for (h = n ; h >= 98 ; h--)
		{
			if (h == 98)
			{
				printf("%d\n", h);
				break;
			}
			printf("%d, ", h);
		}
	}
}
