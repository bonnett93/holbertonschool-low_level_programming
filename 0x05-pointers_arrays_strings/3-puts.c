#include "holberton.h"

/**
 * _puts - print a string to stdout.
 * @str: string to be printed.
 *
 * Return: void.
 */

void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}

