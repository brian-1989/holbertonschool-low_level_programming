#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Entry point
 * @separator: Caracter para separar los argumentos
 * @n: Numero de parámetros
 * Return: suma
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list parametros;

	va_start(parametros, n);
	for (i = 0 ; i < n ; i++)
	{
		num = va_arg(parametros, int);
		if (separator != NULL && i > n - 1)
			printf("%d%s", num, separator);
		else
			printf("%d", num);
	}
	printf("\n");
	va_end(parametros);
}
