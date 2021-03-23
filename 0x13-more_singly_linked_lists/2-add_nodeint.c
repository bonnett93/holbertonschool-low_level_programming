#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of a list.
 *
 * @head: address of pointer to linkedlist head.
 * @n: value of element "n" of the new node.
 * Return: addres of the new element or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
