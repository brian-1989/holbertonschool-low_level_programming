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
	int n;
	int digito;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digito = n % 10;
	if (digito < 6 && digito != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digito);
	}
	else if (digito == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digito);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digito);
	}
	return (0);
}
