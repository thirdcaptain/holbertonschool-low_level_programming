#include "hash_tables.h"

/**
 * key_index - returns an index based on hash
 * @key: hash key
 * @size: size of array of hash table
 *
 * Return: index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	unsigned long int hash = 0;

	hash = hash_djb2((unsigned char *)key);
	index = hash % size;

	return (index);
}
