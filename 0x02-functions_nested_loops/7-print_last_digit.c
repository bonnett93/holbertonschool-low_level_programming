#include "holberton.h"
/**
 * print_last_digit- prints the last digit of a number n.
 * @n: The number to tested
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
	_putchar(((n * -1) % 10) + 48);
	return ((n * -1) % 10);
}
