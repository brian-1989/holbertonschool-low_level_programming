#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char m;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	for (m = 'a' ; m <= 'z' ; m++)
	{
		putchar(toupper(m));
	}
	putchar('\n');
	return (0);
}
