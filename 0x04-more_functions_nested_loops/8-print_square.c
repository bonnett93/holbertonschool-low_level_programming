#include "holberton.h"

/**
 * print_square - print a square using # caracter.
 * @size: the size of the square, each # = 1.
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
