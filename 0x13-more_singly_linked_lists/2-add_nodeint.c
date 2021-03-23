#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - create another node in the head.
 * @head: start node
 * @n: the number that comes from the Main
 * Return: to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t) * 1);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
