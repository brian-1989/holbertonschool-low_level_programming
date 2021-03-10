#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Entry point
 * @name: nombre
 * @f: Puntero a las funciones
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && f != NULL)
		f(name);
}
