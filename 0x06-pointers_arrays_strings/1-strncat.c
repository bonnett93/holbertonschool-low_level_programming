#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 * @dest: The destination strgin
 * @src: The string to concatenate with dest.
 * @n: bytes to concatenate
 * Return: pointer to resulting strgin dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int i;

	while (dest[c])
	{
		c++;
	}

	for (i = 0; i < n; i++)
	{
		dest[c] = src[i];
		c++;
	}
	return (dest);
}
