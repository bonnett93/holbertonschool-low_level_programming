#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to linkedlist head.
 * @index: index of the nth node.
 * Return: pointer to this node, NULL if doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (head->next != NULL)
		{
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}

	return (head);
}
