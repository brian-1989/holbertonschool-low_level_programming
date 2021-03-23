#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint -free the list
 * @head: start node
 * Return: returns the length of the string
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
