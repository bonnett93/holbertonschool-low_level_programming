#include <stdlib.h>
#include"lists.h"
/**
 * free_list - Frees a list.
 *
 * @head: Pointer to list head.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		if (tmp->str != NULL)
			free(tmp->str);
		free(tmp);
	}
}
