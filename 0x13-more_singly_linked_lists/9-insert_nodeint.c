#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add the node in the given index
 * @head: pointer pointing to a pointer pointing to the struct
 * @idx: Index to add the node
 * @n: number for add
 * Return: the new node inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, j;
	listint_t *temp, *insertar, *recorrer;

	insertar = malloc(sizeof(listint_t) * 1);
	if (insertar == NULL)
		return (NULL);
	temp = *head;
	recorrer = *head;
	for (j = 0 ; recorrer != NULL; j++)
		recorrer = recorrer->next;
	if (idx < j)
	{
		while (temp != NULL)
		{
		if (idx == 0)
		{
			insertar->n = n;
			insertar->next = *head;
			*head = insertar;
			break;
		}
		if (i == idx - 1)
		{
			insertar->n = n;
			insertar->next = temp->next;
			temp->next = insertar;
		}
		temp = temp->next;
		i++;
		}
	}
	else
		return NULL;
	return (insertar);
}
