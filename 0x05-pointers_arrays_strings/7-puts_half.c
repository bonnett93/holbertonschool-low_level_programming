#include "holberton.h"

/**
 * puts_half - print a string to stdout.
 * @str: string to be printed in reverse.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int c = 0;
	int i;

	while (*(str + c) != '\0')
	{
		c++;
	}

	for (i = (c + 1) / 2; i < c; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

