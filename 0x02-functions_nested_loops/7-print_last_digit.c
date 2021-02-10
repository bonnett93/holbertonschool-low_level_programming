#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit- prints the last digit of a number n.
 * @n: The number to tested
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
	{
		r = n % 10 * -1;
	}
	_putchar(r + 48);
	return (r);
}
