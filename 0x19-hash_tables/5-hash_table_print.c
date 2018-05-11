#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int total = 0, count = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			total++;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			count++;
			if (count != total)
			{
				printf("'%s': '%s', ", ht->array[i]->key,
				       ht->array[i]->value);
			}
			else
			{
				printf("'%s': '%s'", ht->array[i]->key,
				       ht->array[i]->value);
			}
		}
	}
	printf("}\n");
}
