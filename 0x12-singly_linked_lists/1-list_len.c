#include <stdlib.h>
#include "lists.h"
/**
 * list_len -prints all the elements of a list.
 * @h: pointer to the  struct
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
