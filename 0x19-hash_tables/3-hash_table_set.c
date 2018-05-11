#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to use to generate index
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node;
	hash_node_t *cursor;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	if (strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	cursor = ht->array[index];
	while (cursor != NULL)
	{
		if (strcmp(cursor->key, key) == 0)
		{
			free(cursor->value);
			cursor->value = strdup(value);
			return (1);
		}
		cursor = cursor->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->key == NULL)
	{
		free(node);
		free(node->key);
		return (0);
	}
	node->next = NULL;

	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
	}
	ht->array[index] = node;
	return (1);
}
