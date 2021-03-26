#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to convert.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp = n, i = 0, mask = 1;

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
	printf("i: %lu\n", i);

	while (i > 0)
	{
		_putchar(((n & (mask << i)) >> i) + '0');
		/**printf("ul: %lu\n", mask << i);*/
		i--;
	}

	_putchar(((n & mask << i) >> i) + '0');
}
