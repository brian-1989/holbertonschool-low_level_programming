#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete the node start
 * @head: pointer pointing to a pointer pointing to the struction
 * Return: Return to the value of n
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *borrar;

	if (*head == NULL)
		return (0);
	borrar = *head;
	*head = (*head)->next;
	i = borrar->n;
	free(borrar);
	return (i);
}
