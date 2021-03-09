#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Entry point
 * @d: puntero a al estructura dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	if (d->name == NULL)
	{
		printf("Name: (nill)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == '\0')
	{
		printf("Age: (nill)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("owner: (nill)\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
