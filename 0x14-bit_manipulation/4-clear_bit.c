#include "holberton.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number.
 * @index: the index, starting from 0 of the bit you want to set to 0.
 * Return: 1 if success or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return (1);
}
