#include "holberton.h"

/**
 * puts2 - print a string to stdout.
 * @str: string to be printed in reverse.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int c = 0;
	int i;

	while (*(str + c) != '\0')
	{
		c++;
	}

	for (i = 0; i <= c - 1; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

