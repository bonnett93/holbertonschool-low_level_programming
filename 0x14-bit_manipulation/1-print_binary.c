#include "holberton.h"
#include <stdlib.h>

/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to convert.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(48);
		return;
	}

	while (n > 0)
	{
		_putchar((n & 1) + '0');
		n = n >> 1;
	}
}
