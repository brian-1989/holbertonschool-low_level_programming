#include <stdio.h>
#include "lists.h"
/**
 * print_listint -prints all the elements of a list.
 * @h: pointer to the  struct
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
			printf("%d\n", h->n);
		else
			printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
