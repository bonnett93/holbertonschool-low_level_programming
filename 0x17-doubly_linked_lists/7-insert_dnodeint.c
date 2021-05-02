#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to dlistint_t list &head.
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: element of the node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int counter = 0;

	if (h == NULL || (*h == NULL && idx > 0))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	tmp = *h;
	while (counter < idx)
	{
		tmp = tmp->next;
		if (tmp == NULL && idx != counter + 1)
		{
			free(new);
			return (NULL);
		}
		counter++;
	}
	new->next = tmp;
	new->prev = tmp->prev;
	if (idx == 0)
		*h = new;
	else
		tmp->prev->next = new;
	tmp->prev = new;
	return (0);
}
