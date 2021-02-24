#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum ot 2 diagonals.
 * @a: pointer to matrix start.
 * @size: the size of matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, dig1, dig2;

	dig1 = 0, dig2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		dig1 += a[i];
	}
	i -= size * 2;
	for (; i >= 0; i -= size - 1)
	{
		dig2 += a[i];
	}
	printf("%d, ", dig1);
	printf("%d\n", dig2);
}
