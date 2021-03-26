#include "holberton.h"
#include <stdlib.h>

/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to convert.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp = n, i = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	while (tmp)
	{
		tmp = tmp >> 1;
		i++;
	}

	i--;
	while (i > 0)
	{
		_putchar(((n & 1 << i) >> i) + '0');
		i--;
	}

	_putchar(((n & 1 << i) >> i) + '0');
}
