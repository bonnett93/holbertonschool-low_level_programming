#include "lists.h"

/**
 * insert_nodeint_at_index - sum all the data (n) of a listint_t linked list.
 *
 * @head: address to pointer to linkedlist head.
 * @idx: index of the list where the new node should be added.
 * @n: value of node.n.
 *
 * Return: Address of new node, or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *contador = *head;
	listint_t *new;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (contador != NULL)
	{
		contador = contador->next;
		i++;
	}
	if (i < idx)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
