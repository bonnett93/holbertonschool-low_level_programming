#include "holberton.h"
/**
 * print_alphabet_x10- writes the alphabet characters 10 times
 * Return:void.
 */
void print_alphabet_x10(void)
{
	int c;
	int a;

	for (a = 0; a < 10; a++)
	{
		c = 97;

		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
