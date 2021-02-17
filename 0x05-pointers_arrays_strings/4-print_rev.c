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

	while (*(s + c) != '\0')
	{
		c++;
	}
	for (; c >= 0; c--)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}

