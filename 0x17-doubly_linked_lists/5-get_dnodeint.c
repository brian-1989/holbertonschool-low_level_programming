#include "lists.h"

/**
 * get_dnodeint_at_index - function that return the number nth of a list
 * @head: pointer when start the list
 * @index: number nth
 * Return: the number nth of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, k = 0;
	dlistint_t *nth;

	nth = head;
	while (head != NULL)
		head = head->next, k++;
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
