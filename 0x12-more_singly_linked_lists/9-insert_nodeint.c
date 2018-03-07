#include "lists.h"

/**
 * list_count - get count of list
 * @head: head of list
 *
 * Return: count
 */

unsigned int list_count(listint_t *head)
{
	unsigned int num = 0;

	if (head == NULL)
		return (num);

	while (head != NULL)
	{
		num++;
		head = head->next;
	}
	return (num);
}

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
	unsigned int count = 0, i;
	listint_t *prev, *next, *node;

	if (head == NULL || (*head) == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	count = list_count(*head);
	if (idx > count)
		return (NULL);

	prev = *head;
	for (i = 1; i < idx; i++)
		prev = prev->next;
	next = *head;
	for (i = 1; i < (idx + 1); i++)
		next = next->next;
	if (idx == (count - 1))
	{
		prev->next = node;
		node->next = NULL;
	}
	prev->next = node;
	node->next = next;
	return (node);
}
