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
	int ultimoDigito;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ultimoDigito = n % 10;
	if (ultimoDigito < 6 && ultimoDigito != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultimoDigito);
	}
	else if (ultimoDigito == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ultimoDigito);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ultimoDigito);
	}
	return (0);
}
