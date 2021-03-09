#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Entry point
 * @d: puntero a al estructura dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == '\0')
	{
		printf("Age: nil\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("owner: nil\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
