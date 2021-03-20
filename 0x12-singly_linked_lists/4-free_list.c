#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list -free the list
 * @head: start node
 * Return: returns the length of the string
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
