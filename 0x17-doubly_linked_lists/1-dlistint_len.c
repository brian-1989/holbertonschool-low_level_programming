#include "lists.h"

/**
 * dlistint_len - function that return the number of nodes
 * @h: Pointer at the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
		h = h->next, i++;
	return (i);
}
