#include "holberton.h"

/**
 * print_line - print a line in the terminal.
 * @n: the number of times the character _ should be printed
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
