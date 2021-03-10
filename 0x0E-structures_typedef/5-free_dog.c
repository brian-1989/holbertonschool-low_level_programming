#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Entry point
 * @d: Puntero a estructura dog
 * Return: NULL
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
