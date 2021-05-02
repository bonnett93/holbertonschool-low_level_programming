#include "lists.h"

/**
 * free_dlistint - adds a new node at the end of a dlistint_t list.
 * @head: Pointer to dlistint_t list &head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
