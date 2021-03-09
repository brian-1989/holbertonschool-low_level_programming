#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Entry point
 * @d: puntero a al estructura dog
 * @name: Primer elemento
 * @age: Segundo elemento
 * @owner: Tercer elemento
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
