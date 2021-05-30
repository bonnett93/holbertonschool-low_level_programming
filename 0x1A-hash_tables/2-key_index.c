#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @size: The size of the array
 * @key: the key
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
