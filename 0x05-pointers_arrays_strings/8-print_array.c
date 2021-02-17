#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print a string to stdout.
 * @a: string to be printed in reverse.
 * @n: the number of elements of the array to be printed.
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}

		printf("%d\n", a[i]);
	}
	else
	{
		printf("\n");
	}
}

