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
	dlistint_t *temp, *new_node, *travel, *after;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (h == NULL || *h == NULL)
	{
		*h = new_node;
		new_node->n = n;
		new_node->next = NULL;
		return (new_node);
	}
	temp = *h, travel = *h;
	for ( ; travel != NULL; j++)
		travel = travel->next;
	if (idx <= j)
	{
		while (temp != NULL)
		{
		if (idx == 0)
		{
			new_node->next = *h, *h = new_node;
			new_node->prev = NULL, new_node->n = n;
			temp = new_node->next, temp->prev = new_node;
			break;
		}
		if (i == idx - 1)
		{
			new_node->n = n, new_node->next = temp->next;
			new_node->prev = temp, temp->next = new_node;
			after = temp->next, after->prev = new_node;
			break;
		}
		temp = temp->next, i++;
		}
		return (new_node);
	}
	return (NULL);
}
