#include "lists.h"

/**
 * add_dnodeint - function that adds an Node at the beginning of the list
 * @head: pointer when start the list
 * @n: number
 * Return: the new node add
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n, new_node->prev = NULL, new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
		temp = *head, new_node->next = *head,
		temp->prev = new_node, *head = new_node;
	return (new_node);
}
