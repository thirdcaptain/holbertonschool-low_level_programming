#include "list.h"

/**
 * add_dnodeint - add node at beginning of list
 * @head: head of list
 * @n: value of n in node
 *
 * Return: address of new element, NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
