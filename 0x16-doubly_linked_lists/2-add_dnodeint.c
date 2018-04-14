#include "lists.h"

/**
 * add_dnodeint - add a new node to beginning of a dlistint_t list
 * @head: head of list
 * @n: value of n in list node
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
