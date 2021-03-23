#include "lists.h"

/**
 * listint_len - return the number of elements in a list.
 *
 * @h: pointer to linkedlist head.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t number_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		number_nodes++;
	}
	return (number_nodes);
}
