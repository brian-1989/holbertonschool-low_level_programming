#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 * @n: NUmero de parámetros
 * Return: suma
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, suma = 0;
	va_list parametros;

	if (n == 0)
		return (0);

	va_start(parametros, n);
	for (i = 0 ; i < n ; i++)
		suma += va_arg(parametros, int);
	va_end(parametros);
	return (suma);
}
