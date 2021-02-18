#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @dest: The destination strgin
 * @src: The string to concatenate with dest.
 *
 * Return: pointer to resulting strgin dest
 */

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int i;

	while (dest[c])
	{
		c++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[c] = src[i];
		c++;
	}
	dest[c] = src[i];

	return (dest);
}
