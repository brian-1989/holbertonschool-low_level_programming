#include "hash_tables.h"

/**
 *hash_table_print - function that prints a hash table.
 *@ht: pointer at hast table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *str1 = "", *str2 = ", ";
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s", str1);
			printf("'%s': '%s'", temp->key, temp->value);
			str1 = str2;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
