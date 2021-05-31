#include "hash_tables.h"
/**
 * hash_table_print -  retrieves a value associated with a key.
 * @ht: The hash table you want to add or update the key/value to
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;
	int control = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			tmp = ht->array[i];
		while (tmp)
		{
			if (control != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			control = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
