#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 * Return: Pointer to new table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * 8);
	if (table->array == NULL)
		return (NULL);

	return (table);
}
