#include "lists.h"

/**
 * print_dlistint - function to print all the elements of a list
 * @h: Pointer at the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
		printf("%d\n", h->n), h = h->next, i++;
	return (i);
}
