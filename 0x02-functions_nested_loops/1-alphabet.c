#include "holberton.h"
/**
 * print_alphabet- writes the alphabet
 * Return:void.
 */
void print_alphabet(void)
{
	int c = 97;

	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
