#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: The character to print
 *
 * Return: Void.
 * On error, exit(98) is returned, and errno is set appropriately.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
