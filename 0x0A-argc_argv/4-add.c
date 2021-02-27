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
	int i, num, suma;

	suma = 0;
	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			/*else if (atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}*/
			else
			{
				num = atoi(argv[i]);
				suma += num;
			}
		}
		printf("%d\n", suma);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
