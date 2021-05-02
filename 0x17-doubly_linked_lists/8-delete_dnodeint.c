#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delete a node in a certain position
 * @head: pointer when start the list
 * @index: number to delete the node
 * Return: 1, if the node was deleted and -1, if no was
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, j = 0;
	dlistint_t *temp, *_delete, *travel, *after;

	temp = *head, travel = *head;
	if (!*head)
		return (-1);
	/* Cycle to travel the list */
	for ( ; travel != NULL; j++)
		travel = travel->next;
	if (index < j)
	{
		while (temp != NULL)
		{
		/* condicition to the first node */
		if (index == 0)
		{
			*head = (*head)->next;
			if (*head == NULL)
				return (1);
			(*head)->prev = NULL;
			return (1);
		}
		if (i == index - 1)
		{
			_delete = temp->next, after = _delete->next;
			temp->next = after;
			/* condicition when is the last node */
			if (after == NULL)
			{
			free(_delete);
			return (1);
			}
			after->prev = temp;
			free(_delete);
			return (1);
		}
		temp = temp->next, i++;
		}
	}
	return (-1);
}
