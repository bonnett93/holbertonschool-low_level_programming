#include "hash_tables.h"
/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table you want to add or update the key/value to
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL, *delete = NULL;

	if (ht == NULL || ht->array == NULL)
		return;

	(void)tmp;
	(void)delete;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				delete = tmp;
				tmp = tmp->next;
				free(delete->key);
				free(delete->value);
				free(delete);
			}
		}
	}
	free(ht->array);
	free(ht);
}
