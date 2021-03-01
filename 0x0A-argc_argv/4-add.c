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
	int i, j, num, suma;

	suma = 0;
	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] != '\0' ; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			suma += num;
		}
		printf("%d\n", suma);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
