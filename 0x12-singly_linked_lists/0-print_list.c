#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list- (const list_t *h)
 *
 * @h: Pointer to list header.
 * Return: Size of linked list
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;

	if (h == 0)
		return (0);

	while (h != NULL)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		elements++;
		h = h->next;
	}
	return (elements);
}


