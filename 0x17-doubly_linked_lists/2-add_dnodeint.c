#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to dlistint_t list &head.
 * @n: element of the node.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->prev = NULL;
	if (*head != NULL)
		new->prev = (*head)->prev;
	new->next = *head;
	*head = new;

	return (new);
}
