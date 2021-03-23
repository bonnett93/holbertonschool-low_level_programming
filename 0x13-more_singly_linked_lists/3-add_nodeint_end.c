#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of a list.
 *
 * @h: address of pointer to linkedlist head.
 * @n: value of element "n" of the new node.
 * Return: addres of the new element or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	if (head == NULL)
		return(0);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	return (new);
}
