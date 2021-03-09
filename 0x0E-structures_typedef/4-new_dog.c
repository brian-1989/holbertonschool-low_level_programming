#include "dog.h"
#include <stdlib.h>
/**
 * copiar_cadena - Entry point
 * @src: origen
 * @dest: destino
 * Return: Dest
 */
char *copiar_cadena(char *dest, char *src)/*Copiar string origen al destino*/
{
	int i, j, contador; /* Declaración de variables */

	contador = 0;
	for (i = 0 ; src[i] != '\0' ; i++)/*Ciclo para contar caracteres del origen*/
	{
		contador++;
	}
	for (j = 0 ; j < contador ; j++)
	{
		dest[j] = src[j];/*Asignación de la cadena origen, a la argumento dest*/
	}
	dest[j] = '\0';/*Asignación del valor nulo, a la ulima posición*/
	return (dest);
}
/**
 * longitud - Entry point
 * @s: string
 * Return: c
 */
int longitud(char *s)/*Longitud de un string*/
{
	int i, c;/*Declaración de variables*/

	c = 0;
	for (i = 0 ; s[i] != '\0' ; i++)/*Ciclo para contar los caracteres*/
	{
		c++;/*Suma caracter por caracter*/
	}
	return (c);
}
/**
 * new_dog - Entry point
 * @name: nombre
 * @age: edad
 * @owner: propietario
 * Return: big_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int contador_name, contador_owner;/*Declración de variable*/
	dog_t *big_dog;/*Declaración del punterp*/

	big_dog = malloc(sizeof(dog_t));/*Generar espacio en heap para la estructura*/
	if (big_dog == NULL)/*Cuando los valores de la estructura, sean NULL*/
		return (NULL);
	contador_name = longitud(name);/*longitud del string name*/
	contador_owner = longitud(owner);/*longitud del string owner*/
	big_dog->name = malloc(sizeof(char) * contador_name + 1);/*Memoria de name*/
	if (big_dog->name == NULL)/*Cuando se encuentro valor nulo*/
	{
		free(big_dog);/*Liberar memoria*/
		return (NULL);
	}
	big_dog->owner = malloc(sizeof(char) * contador_owner + 1);/*Memoria owner*/
	if (big_dog->owner == NULL)/*Cuando se encuentro valor nulo*/
	{
		free(big_dog->name);/*Liberar memoria name*/
		free(big_dog);/*Liberar memoria*/
		return (NULL);
	}
	big_dog->name = copiar_cadena(big_dog->name, name);/*copiar al puntero name*/
	big_dog->owner = copiar_cadena(big_dog->owner, owner);/*copiar puntero owner*/
	big_dog->age = age;
	return (big_dog);/*Retornar al puntero*/
}
