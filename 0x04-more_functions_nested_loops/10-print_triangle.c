#include "holberton.h"

/**
 * print_triangle - print a triangle using # caracter.
 * @size: the size of the triangle, each # = 1.
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j, s;

	for (i = 1; i <= size; i++)
	{
		for (s = 1; s <= (size - i); s++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
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
