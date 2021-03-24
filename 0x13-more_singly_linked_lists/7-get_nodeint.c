#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a list
 * @head: pointer to the struct
 * @index: number of the nth
 * Return: return the nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, k = 0;
	listint_t *nth;

	nth = head;
	while (head != NULL)
	{
		head = head->next;
		k++;
	}
	if (index > k)
		return (NULL);
	for (i = 0 ; nth != NULL; i++)
	{
		if (i == index)
		{
			nth->n = nth->n;
			break;
		}
		nth = nth->next;
	}
	return (nth);
}
