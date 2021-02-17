#include "holberton.h"

/**
 * rev_string - reverse a string.
 * @s: string to be reversed.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int c = 0;
	int i;
	char z;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i <= c - 1; i++)
	{
		z = *(s + i);
		*(s + i) = *(s + c - 1);
		*(s + c - 1) = z;
		c--;
	}
}

