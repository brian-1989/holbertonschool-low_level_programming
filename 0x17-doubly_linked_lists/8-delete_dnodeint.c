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
			_delete = *head, *head = _delete->next;
			free(_delete);
			break;
		}
		if (i == index - 1)
		{
			_delete = temp->next, after = _delete->next;
			temp->next = after;
			/* condicition when is the last node */
			if (after == NULL)
			{
			free(_delete);
			break;
			}
			after->prev = temp;
			free(_delete);
			break;
		}
		temp = temp->next, i++;
		}
		return (1);
	}
	else
		return (-1);
}
