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
		printf("Name: (nil)");
	}
	if (d->age == '\0')
	{
		printf("Age: (nill)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
