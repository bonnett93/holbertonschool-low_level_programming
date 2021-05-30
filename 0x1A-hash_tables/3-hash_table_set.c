#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key
 * @value: Is the value associated with the key.
 * Return: 1if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp;
	int control = 0;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	control = add(&ht->array[index], key, value);
	return (control);
}

/**
 * add_node - adds an element to linkedlist.
 * @head: Pointer to linkedlist head
 * @key: The key
 * @value: Is the value associated with the key.
 * Return: 1 if succeeded, 0 otherwise.
 */
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
		return (0);
	new->next = *head;
	*head = new;
	return (1);
}
