#include "hash_tables.h"

/**
 * hash_table_create - this function that create a hash table.
 *@size: size of hash table
 * Return: a pointer to the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *c = NULL;

	c = malloc(sizeof(hash_table_t));
	if (c == NULL)
		return (NULL);
	c->size = size;
	c->array = malloc(sizeof(hash_node_t *) * size);
	while (i < size)
		c->array[i] = NULL, i++;
	return (c);
}
