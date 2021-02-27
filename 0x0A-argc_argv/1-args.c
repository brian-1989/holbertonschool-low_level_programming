#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		(void)argv;
	}
	printf("%d\n", i - 1);
	return (0);
}
