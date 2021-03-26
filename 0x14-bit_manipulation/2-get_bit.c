#include "holberton.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, tmp = n;

	while (tmp != 0)
	{
		i++;
		tmp = tmp >> 1;
	}
	if (index >= i)
		return (-1);

	return ((n & (1 << (index))) >> (index));
}
