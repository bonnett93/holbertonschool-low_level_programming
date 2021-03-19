#include "lists.h"
#include <stdlib.h>

/**
 * list_len - return number of elements in a linked list.
 *
 * @h: Pointer to list header.
 * Return: Size of linked list
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
