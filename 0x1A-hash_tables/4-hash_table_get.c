#include "hash_tables.h"

/**
 *hash_table_get - function that retrieves a value associated with a key.
 *@ht: pointer at hast table.
 *@key: is the key.
 *Return: str associated with the element or NULL, if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0, i = 0;
	char *str = NULL;
	hash_node_t *temp = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	while (i < ht->size)
	{
		if (index == i)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if ((strcmp(key, temp->key)) == 0)
				{
					str = temp->value;
					return (str);
				}
				temp = temp->next;
			}
		}
		i++;
	}
	return (NULL);
}
