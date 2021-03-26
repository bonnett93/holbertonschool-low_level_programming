#include "holberton.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number.
 * @index: the index, starting from 0 of the bit you want to set to 1.
 * Return: 1 if success or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int i = 0, tmp = *n;

	while (tmp != 0)
	{
		i++;
		tmp = tmp >> 1;
	}

	*n = *n | (1 << index);
	return (1);
}