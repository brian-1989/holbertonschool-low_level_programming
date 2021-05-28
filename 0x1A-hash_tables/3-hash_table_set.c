#include "hash_tables.h"

/**
 *add_node - function that create a new node at beginning.
 *@head: pointer at beginning of the linked list.
 *@key: is the key.
 *@value: is the value associated with the key.
 *Return: new node.
 */
hash_node_t *add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t) * 1);
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->key = strdup(key);
	if (value == NULL)
		new_node->value = NULL;
	else
		new_node->value = strdup(value);
	new_node->next = head;
	head = new_node;
	return (new_node);
}

/**
 *hash_table_set - function that that adds an element to the hash table.
 *@ht: pointer at hast table.
 *@key: is the key.
 *@value: is the value associated with the key.
 *Return: 1, if it succeeded and 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0, index = 0;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	while (i < ht->size)
	{
		if (index == i)
		{
			new_node = add_node(ht->array[i], key, value);
			ht->array[i] = new_node;
			return (1);
		}
		i++;
	}
	return (0);
}
