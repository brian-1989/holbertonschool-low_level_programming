#include "lists.h"

/**
 * free_dlistint - function that free the node of a list
 * @head: pointer when start the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
