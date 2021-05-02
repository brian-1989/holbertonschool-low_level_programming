#include "lists.h"

/**
 * add_dnodeint_end - function that adds an Node at the end of the list
 * @head: pointer when start the list
 * @n: number
 * Return: the new node add
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* statements of the pointer to the structure */
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n, new_node->prev = NULL, new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		/* Cycle to travel the list */
		while (temp->next != NULL)
			temp = temp->next;
		/* Process to connect the new node to the list */
		new_node->prev = temp, temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
