#include "dog.h"
#include <stdlib.h>
/**
 * copiar_cadena - Entry point
 * @src: origen
 * @dest: destino
 * Return: Dest
 */
char *copiar_cadena(char *dest, char *src)
{
	int i, j, contador;

	contador = 0;
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		contador++;
	}
	for (j = 0 ; j < contador ; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
/**
 * longitud - Entry point
 * @s: string
 * Return: c
 */
int longitud(char *s)
{
	int i, c;

	c = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
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
	unsigned int contador_name, contador_owner;
	dog_t *big_dog;

	big_dog = malloc(sizeof(dog_t));
	if (big_dog == NULL)
		return (NULL);
	contador_name = longitud(name);
	contador_owner = longitud(owner);
	big_dog->name = malloc(sizeof(char) * contador_name + 1);
	if (big_dog->name == NULL)
	{
		free(big_dog);
		return (NULL);
	}
	big_dog->owner = malloc(sizeof(char) * contador_owner + 1);
	if (big_dog->owner == NULL)
	{
		free(big_dog->name);
		free(big_dog);
		return (NULL);
	}
	big_dog->name = copiar_cadena(big_dog->name, name);
	big_dog->owner = copiar_cadena(big_dog->owner, owner);
	big_dog->age = age;
	return (big_dog);
}
