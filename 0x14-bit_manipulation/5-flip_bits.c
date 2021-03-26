#include "holberton.h"
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: one number.
 * @m: another number.
 * Return: number of bits1 to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int contador = 0;

	n = n ^ m;

	while (n)
	{
		contador += n & 1;
		n = n >> 1;
	}

	return (contador);
}
