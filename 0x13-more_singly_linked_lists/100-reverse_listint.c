#include "lists.h"

/**
 * reverse_listint - Adds new node at the beginning of a list.
 *
 * @head: Address of pointer to list head.
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	tmp = (*head)->next;
	(*head)->next = NULL;

	while (tmp->next != NULL)
	{
		next = tmp->next;
		tmp->next = *head;
		*head = tmp;
		tmp = next;
	}

	tmp->next = *head;
	*head = tmp;
	return (*head);
}
