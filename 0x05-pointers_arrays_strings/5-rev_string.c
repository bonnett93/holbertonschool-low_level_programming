#include "holberton.h"

/**
 * print_rev - print a string to stdout in reverse.
 * @s: string to be printed in reverse.
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
	for (i = 0; i < (c + 1) / 2; i++)
	{
		z = *(s + i);
		*(s + i) = *(s + c - 1);
		*(s + c - 1) = z;
		c--;
	}
}

