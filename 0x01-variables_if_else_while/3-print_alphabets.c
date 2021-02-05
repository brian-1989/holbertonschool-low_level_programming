#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(toupper(i));
	}
	putchar('\n');
	return (0);
}
