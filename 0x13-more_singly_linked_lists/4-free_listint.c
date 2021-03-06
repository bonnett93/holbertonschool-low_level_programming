#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 *
 * @head: pointer to linkedlist head.
 * Return: void.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
