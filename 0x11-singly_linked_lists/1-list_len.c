#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: list to determine number of elements
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t size;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
