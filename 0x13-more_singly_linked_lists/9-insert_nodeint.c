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
	unsigned int i = 0;
	listint_t *temp, *insertar;

	insertar = malloc(sizeof(listint_t));
	if (insertar == NULL)
		return (NULL);
	if (head == NULL || *head == NULL)
	{
		*head = insertar;
		insertar->n = n;
		insertar->next = NULL;
		return (insertar);
	}
	temp = *head;
	if (idx == 0)
	{
		insertar->n = n;
		insertar->next = *head;
		*head = insertar;
	}
	if (idx > 0)
	{
		while (temp != NULL)
		{
			if (i == idx - 1)
			{
				insertar->n = n;
				insertar->next = temp->next;
				temp->next = insertar;
			}
			temp = temp->next;
			i++;
		}
		return (insertar);
	}
	else
		return (NULL);
}
