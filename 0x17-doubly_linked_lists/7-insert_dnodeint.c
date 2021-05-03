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
	while (counter < idx && tmp->next != NULL)
	{
		tmp = tmp->next;
		counter++;
	}
	if (counter + 1 < idx)
	{
		free(new);
		return (NULL);
	}
	nodes(&new, tmp, h, counter, idx);
	return (new);
}

/**
 * nodes - put each value in correct node.
 * @new: New node.
 * @tmp: temporary node.
 * @h: head to dlinkedin list
 * @c: Counter.
 * @i: index.
 */
void nodes(dlistint_t **new, dlistint_t *tmp, dlistint_t **h, int c, int i)
{
	if (c + 1 == i)
	{
		tmp->next = *new;
		(*new)->prev = tmp;
	}
	else
	{
		if (i == 0)
			*h = *new;
		(*new)->next = tmp;
		(*new)->prev = tmp->prev;
		tmp->prev = *new;
		if (i > 0)
			(*new)->prev->next = *new;
	}
}
