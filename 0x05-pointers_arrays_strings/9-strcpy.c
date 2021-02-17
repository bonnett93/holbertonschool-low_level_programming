#include "holberton.h"

/**
 * *_strcpy - print a string to stdout.
 * @dest: The array pointer to copy the string.
 * @src: The sting to be copied.
 *
 * Return: The string to copy.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int c = 0;
	char *prt = dest;

	while (src[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		*(dest + i) = src[i];
	}

	return (prt);
}
