#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int total = 0, count = 0;
	hash_node_t *cursor;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		cursor = ht->array[i];
		while (cursor != NULL)
		{
			total++;
			cursor = cursor->next;
		}
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cursor = ht->array[i];
		while (cursor != NULL)
		{
			count++;
			if (count != total)
			{
				printf("'%s': '%s', ", cursor->key,
				       cursor->value);
			}
			else
			{
				printf("'%s': '%s'", cursor->key,
				       cursor->value);
			}
			cursor = cursor->next;
		}
	}
	printf("}\n");
}
