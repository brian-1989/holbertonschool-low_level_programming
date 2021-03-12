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

	if (separator != NULL)
	{
		va_start(parametros, n);
		for (i = 0 ; i < n ; i++)
		{
			num = va_arg(parametros, int);
			if (i == n - 1)
			{
				printf("%d\n", num);
				break;
			}
			printf("%d%s", num, separator);
		}
		va_end(parametros);
	}
}
