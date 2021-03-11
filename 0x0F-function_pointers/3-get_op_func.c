#include "3-calc.h"
/**
 * get_op_func - Entry point
 * @s: signo a comparar
 * Return: exit (99)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {/*Inicializando los punteros de opt_t*/
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;/*Inicializando i*/

	while (ops[i].f != NULL)/*Condición cuando la función diferent de null*/
	{
		if (strcmp(s, ops[i].op) == 0)/*Condición para enontrar igualdad*/
		{
			return (ops[i].f);/*Retornar la función si hay esa igualdad*/
		}
		i++;
	}
	printf("Error\n");/*Si no hay coincidencia, imprimir error*/
	exit(99);
}
