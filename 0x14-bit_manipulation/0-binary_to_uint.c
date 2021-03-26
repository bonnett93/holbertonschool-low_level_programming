#include "holberton.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: The converted number, 0 if fail.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0, p = 1;

	if (b == NULL || b[0] == '\0')
		return (0);

	while (b[i])
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		i++;
	}

	i--;
	decimal += b[i] - 48;
	i--;

	while (i >= 0)
	{
		decimal += (b[i] - 48) * (1 << p);
		p++;
		i--;
	}

	return (decimal);
}
