#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node in the given index
 * @head: pointer pointing to a pointer pointing to the struct
 * @index: Index to eliminate the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, j;
	listint_t *temp, *borrar, *recorrer;

	temp = *head;
	recorrer = *head;
	for (j = 0; recorrer != NULL; j++)
		recorrer = recorrer->next;
	if (index < j)
	{
		while (temp != NULL)
		{
			if (index == 0)
			{
				borrar = *head;
				*head = temp->next;
				free(borrar);
				break;
			}
			if (i == index - 1)
			{
				borrar = temp->next;
				temp->next = borrar->next;
				free(borrar);
				break;
			}
			temp = temp->next;
			i++;
		}
		return (1);
	}
	else
		return (-1);
}
