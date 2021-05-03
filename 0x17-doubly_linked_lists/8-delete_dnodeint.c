#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: Pointer to dlistint_t list &head.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	while (counter < index)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		counter++;
	}
	if (index == 0)
	{
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
