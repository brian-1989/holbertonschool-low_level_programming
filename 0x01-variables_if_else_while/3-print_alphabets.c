#include <stdio.h>
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
	for (m = 'A' ; m <= 'Z' ; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
