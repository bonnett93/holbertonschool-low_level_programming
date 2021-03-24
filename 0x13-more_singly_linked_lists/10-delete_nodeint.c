#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node af a given position.
 *
 * @head: address to pointer to linkedlist head.
 * @index: index of the list where the node should be delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *anterior = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		return (1);
	}

	while (i < index)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		i++;
	}

	for (i = 0; i < index - 1; i++)
		anterior = anterior->next;

	anterior->next = tmp->next;
	free(tmp);

	return (1);
}
