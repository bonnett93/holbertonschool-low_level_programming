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

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *a);
		a++;
	}

	printf("%d\n", *a);
}

