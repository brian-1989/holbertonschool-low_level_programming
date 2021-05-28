#include "hash_tables.h"

/**
 *free_list - function that free a linked list.
 *@head: pointer at beginning of the linked list.
 */
void free_list(hash_node_t *head)
{
	hash_node_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = aux;
	}
}

/**
 *hash_table_delete - function that deletes a hash table.
 *@ht: pointer at hast table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		temp = ht->array[i];
		free_list(temp);
		i++;
	}
	free(ht->array);
	free(ht);
}
