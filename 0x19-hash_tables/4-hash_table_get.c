#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table
 * @key: key to retrieve value for
 *
 * Return: value associated with key, NULL if key not found
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
		return (ht->array[index]->value);
	else
		return (NULL);
}
