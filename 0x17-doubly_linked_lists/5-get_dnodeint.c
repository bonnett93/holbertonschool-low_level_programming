#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to dlistint_t list head.
 * @index: index of the node, starting from 0
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (counter < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		counter++;
	}
	return (head);
}
