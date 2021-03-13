#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Entry point
 * @separator: Caracter para separar los argumentos
 * @n: Numero de parámetros
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *cadena;
	va_list parametros;

	va_start(parametros, n);
	for (i = 0; i < n; i++)
	{
		cadena = va_arg(parametros, char *);
		if (cadena != NULL)
		{
			printf("%s", cadena);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(parametros);
	printf("\n");
}
