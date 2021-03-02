#include <stdlib.h>

/**
 * *create_array - creates an array of chars.
 * @size: Size of array
 * @c: Char to initialize the array
 *
 * Return: Ponter to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size <= 0)
		return (0);

	ptr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
