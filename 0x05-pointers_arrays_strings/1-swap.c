#include "holberton.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: One of the integers to be swap.
 * @b: The other integer to be swap.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}

