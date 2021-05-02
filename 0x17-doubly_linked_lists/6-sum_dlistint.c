#include "lists.h"

/**
 * sum_dlistint - function that sum all the elements of the list
 * @head: pointer when start the list
 * Return: the sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0, suma = 0;

	if (head == NULL)
		return (0);
	for ( ; head != NULL; i++)
		suma += head->n, head = head->next;
	return (suma);
}
