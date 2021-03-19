#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Adds new node at the end of a list.
 *
 * @head: Pointer to list head.
 * @str: The string to copy in str element of the node.
 * Return: The address of the new element or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;
	unsigned int len_str = 0;

	if (head == 0)
		return (0);

	while (tmp != NULL)
	{
		if (tmp->next != NULL)
			tmp = tmp->next;
		else
			break;
	}

	new = malloc(sizeof(list_t));
	if (new == 0)
		return (0);

	new->str = strdup(str);
	if (new->str == 0)
	{
		free(new);
		return (0);
	}
	while (str[len_str])
		len_str++;
	new->len = len_str;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp->next = new;
	return (new);
}
