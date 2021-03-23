#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list.
 *
 * @head: pointer to linkedlist head.
 * Return: The sum of al (n) data, 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}


