#include "sort.h"

/**
 * swap - moves linked list node
 * @position: node after node to place node
 * @node: the node to relocate
 */

void swap(listint_t *position, listint_t *node)
{
/*	printf("position->n:%d node->%d\n", position->n, node->n); */
	/*node removal*/
	if (node->next == NULL)
	{
		node->prev->next = NULL;
	}
	if (node->prev == NULL)
	{
		node->next->prev = NULL;
	}
	if (node->next != NULL && node->prev != NULL)
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	/*node insertion*/
	if (position->prev == NULL)
	{
		node->prev = NULL;
		position->prev = node;
		node->next = position;
		position = node;
		return;
	}
	position->prev->next = node;
	node->prev = position->prev;
	node->next = position;
	position->prev = node;
}


/**
 * insertion_sort_list - sorts linked list
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cursor_f, *cursor_b, *temp;
	int value = 0, count = 0;

	if (list == NULL || *list == NULL)
		return;

	cursor_f = *list;
	while (cursor_f != NULL)
	{
		count++;
		cursor_f = cursor_f->next;
	}
	if (count < 2)
		return;

	cursor_f = *list;
	while (cursor_f != NULL)
	{
		value = cursor_f->n;
		cursor_b = cursor_f;
		temp = cursor_f;
		while (cursor_b != NULL)
		{
			if (value < cursor_b->n)
			{
				if (cursor_b->prev == NULL)
				{
					swap(cursor_b, temp);
					*list = temp;
				}
				else
					swap(cursor_b, temp);

				print_list(*list);
			}
			cursor_b = cursor_b->prev;
		}
		cursor_f = cursor_f->next;
	}
}
