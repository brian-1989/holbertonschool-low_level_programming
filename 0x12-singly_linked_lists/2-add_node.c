#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _len - Receive a string
 * @s: string
 * Return: returns the length of the string
 */
int _len(const char *s)
{
	int i, c;

	c = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
	}
	return (c);
}
/**
 * add_node - crate another node in the head.
 * @head: start node
 * @str: the string that comes from the Main
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t) * 1);
	if (new_node == NULL)
		return (NULL);
	len = _len(str);
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
