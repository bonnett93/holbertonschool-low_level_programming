#include "holberton.h"

/**
 * print_rev - print a string to stdout in reverse.
 * @s: string to be printed in reverse.
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int c = 0;
	int i;

	while (*(s + c) != '\0')
	{
		c++;
	}
	for (i = c; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

