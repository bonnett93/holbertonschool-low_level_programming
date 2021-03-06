#include <unistd.h>

/**
 * *_memset - fills memory with a constant byte.
 * @s: A pointer to the block of memory.
 * @b: Constant byte to fill with.
 * @n: Size of the memory block to fill.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

