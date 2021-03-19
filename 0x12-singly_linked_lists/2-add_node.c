#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - Adds new node at the beginning of a list.
 *
 * @head: Pointer to list header.
 * @str: The string to copy in str element of the node.
 * Return: The address of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len_str = 0;

	if (head == 0)
		return (0);


	new = malloc(sizeof(list_t));
	if (new == 0)
	{
		free(new);
		return (0);
	}

	new->str = strdup(str);
	if (new->str == 0)
	{
		free(new);
		return (0);
	}

	while (str[len_str])
		len_str++;

	new->len = len_str;
	new->next = *head;

	*head = new;
	return (new);
}
