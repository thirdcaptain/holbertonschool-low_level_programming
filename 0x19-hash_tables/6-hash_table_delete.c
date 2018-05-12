#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *cursor;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			cursor = ht->array[i];
			while (cursor != NULL)
			{
				temp = cursor->next;
				free(cursor->key);
				free(cursor->value);
				free(cursor);
				cursor = temp;
			}
		}

	}
	if (ht->array)
		free(ht->array);
	if (ht)
		free(ht);
}
