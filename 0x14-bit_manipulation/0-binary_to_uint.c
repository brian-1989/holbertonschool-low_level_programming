#include "holberton.h"
/**
 * potencia - number to the power n.
 * @a: binary number.
 * @b: power n.
 * Return: mult.
 */
unsigned int potencia(int a, int b)
{
	int i, mult = 1;

	if (b == 0)
		mult = 1;
	for (i = 0; i < b; i++)
		mult *= a;
	return (mult);
}
/**
 *  binary_to_uint - convert binary number to decimal.
 * @b: pointer to binary number.
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, suma = 0, l, k, contador = 0;

	if (b == NULL)
		return ('\0');
	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		contador++;
	}
	l = contador - 1;
	for (j = 0 ; b[j] != '\0' ; j++)
	{
		k = potencia(2, l);
		suma += ((b[j] - '0') * k);
		l--;
	}
	return (suma);
}
