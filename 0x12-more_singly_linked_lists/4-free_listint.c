#include "lists.h"

/**
 * free_listint - frees listint_t list
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}