#include "3-calc.h"
/**
 * main - Entreda de los argumentos a las funciones
 * @argc: Numeros de elementos
 * @argv: Arrays de caracteres
 */
int main(int argc, char **argv)
{
	int (*p1)(int a, int b);/*Declaración de puntero de función*/
	int calc, num1, num2;
	char *operador;/*Declaración del puntero*/

	if (argc > 5)/*Condición que me limita los elementos de argc*/
	{
		printf("Error\n");
		exit(98);
	}
	operador = argv[2];/*Este puntero tendra el valor del signo*/
	p1 = get_op_func(operador);/*Llamar función para evaluar el signo*/
	num1 = atoi(argv[1]);/*Conveetir el elemento argv[1] en entero*/
	num2 = atoi(argv[3]);/*Conveetir el elemento argv[2] en entero*/
	if (num2 == 0)/*Condición que sirve para la división y modulo*/
	{
		printf("Error\n");
		exit(99);
	}
	calc = p1(num1, num2);/*La función obtenida en p1*/
	printf("%d\n", calc);/*Imprimir el valor de la operación*/
	return calc;
}
