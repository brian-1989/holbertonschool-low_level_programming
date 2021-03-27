#include "holberton.h"
/**
 * flip_bits - his function counts the bits.
 * @n: decimal number that we must match.
 * @m: decimal number that is going to match.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, y_xor, k_and; /* Se declara las variables */

	y_xor = (n ^ m); /* Se calcula la compuerta xor entre n y m*/
	for (i = 0 ; i < y_xor ; i++) /* Ciclo para contar los bits */
	{
		k_and = y_xor & (y_xor - 1);/*Se calcula la compuerta para llevar y_xor a 0*/
		y_xor = k_and;/* se igual para almacenar el dato de la compuerta and*/
	}
	return (i); /* se retorna en numero de bits */
}
