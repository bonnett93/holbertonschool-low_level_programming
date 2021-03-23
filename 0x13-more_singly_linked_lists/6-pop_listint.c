#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 * @head: address of pointer to linkedlist head.
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp = *head;

	if (head == NULL)
		return (0);

	data = tmp->n;
	free(tmp);

	*head = tmp->next;

	return (data);
}
