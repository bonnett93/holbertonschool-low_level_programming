#include <unistd.h>

/**
 * *_memcpy - Copies memory area.
 * @dest: A pointer to the block of memory to copy in.
 * @src: A pointer to the block of memory to copy.
 * @n: Size of the memory block to copy.
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

