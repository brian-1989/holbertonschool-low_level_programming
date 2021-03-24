#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - add the integers from the list
 * @head: pointer to the struct
 * Return: the total sum
 */
int sum_listint(listint_t *head)
{
	int i, suma = 0;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
