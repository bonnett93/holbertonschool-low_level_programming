#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table;

	table = malloc(size * 8);
	if (table == NULL)
		return NULL;

	return table;
}
