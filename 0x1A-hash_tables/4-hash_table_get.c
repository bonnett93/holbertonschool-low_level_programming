#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key you are looking for
 * Return: The value of key, NULL if key doesn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key[0] == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
