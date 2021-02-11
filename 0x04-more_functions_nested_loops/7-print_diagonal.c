#include "holberton.h"

/**
 * print_diagonal - print a diagonal line in the terminal.
 * @n: the number of times the character \ should be printed
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
