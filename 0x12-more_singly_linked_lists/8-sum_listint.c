#include "lists.h"

/**
 * sum_listint - sums data n of a listint_t list
 * @head: head of list
 *
 * Return: sum of data n, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
