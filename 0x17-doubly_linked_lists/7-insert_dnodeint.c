#include "lists.h"

/**
 * insert_dnodeint_at_index - function that add a node in the posiciton idx
 * @h: pointer when start the list
 * @idx: number where the new node is added
 * @n: number of element
 * Return: the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, j = 0;
	dlistint_t *temp, *new, *travel, *after;

	temp = *h, travel = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*h == NULL && idx == 0)
	{
		*h = new, new->n = n, new->prev = NULL, new->next = NULL;
		return (new);
	}
	for ( ; travel != NULL; j++)
		travel = travel->next;
	if (idx > j)
		return (NULL);
	while (temp != NULL)
	{
		if (idx == 0)
		{
			new->next = *h, *h = new;
			new->prev = NULL, new->n = n;
			temp = new->next, temp->prev = new;
			return (new);
		}
		if (i == idx - 1)
		{
			if (temp->next == NULL)
			{
				new->next = NULL, new->prev = temp, temp->next = new, new->n = n;
				return (new);
			}
			new->n = n, new->next = temp->next;
			new->prev = temp, temp->next = new;
			after = temp->next, after->prev = new;
			return (new);
		}
		temp = temp->next, i++;
	}
	return (NULL);
}
