#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letra = 123;
	int i;

	for (i = 97 ; i < letra ; i++)
		{
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
		{
			putchar(i);
		}
		}
	putchar('\n');
	return (0);
}
