#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: address of pointer to linkedlist head.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL || *head == NULL)
		return;

	while (tmp != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}

	*head = NULL;
}
