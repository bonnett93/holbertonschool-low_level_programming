#include "holberton.h"

/**
 * _strncpy - copies a string.
 * @dest: The destination string.
 * @src: The string to copy in dest.
 * @n: number of bytes to copy.
 *
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
