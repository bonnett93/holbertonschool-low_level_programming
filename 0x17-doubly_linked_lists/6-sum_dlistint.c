#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to dlistint_t list head.
 * Return: if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sumatory = 0;

	while (head != NULL)
	{
		sumatory += head->n;
		head = head->next;
	}

	return (sumatory);
}
