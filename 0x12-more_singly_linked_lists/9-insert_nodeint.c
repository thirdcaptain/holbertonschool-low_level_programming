#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: head node
 * @idx: index to insert node
 * @n: value of n for node
 *
 * Return: address of new node, NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count, i;
	listint_t *prev, *next, *position, *node;

	if ((*head) == NULL && idx > 0)
		return (NULL);

/*initialize node*/
	node = malloc(sizeof(listint_t));
	node->n = n;
/*node at idx 0 if list does not exist*/
	if ((*head) == NULL && idx == 0)
	{
		node->next = NULL;
		return (node);
	}

	position = *head;
	while (position != NULL)
	{
		count++;
		position = position->next;
	}
	if (idx > count)
		return (NULL);

	prev = *head;
	for (i = 1; i < idx; i++)
	{
		prev = prev->next;
	}
	next = *head;
	for (i = 1; i < (idx + 1); i++)
	{
		next = next->next;
	}
	prev->next = node;
	node->next = next;
	return (node);
}
