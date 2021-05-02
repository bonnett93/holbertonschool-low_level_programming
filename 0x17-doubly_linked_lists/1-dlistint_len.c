#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list.
 * @h: Pointer to dlistint_t list head.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while(h != NULL)
	{
		h =  h->next;
		count++;
	}

	return (count);
}
