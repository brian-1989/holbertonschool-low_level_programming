#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint -free the list
 * @head: start node
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
