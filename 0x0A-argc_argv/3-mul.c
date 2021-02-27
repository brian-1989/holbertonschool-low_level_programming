#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j, num_1, num_2, total;

	j = 1;
	if (argc == 3)
	{
		num_1 = atoi(argv[j]);
		j++;
		num_2 = atoi(argv[j]);
		total = num_1 * num_2;
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
