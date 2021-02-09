#include "holberton.h"
/**
 * print_sign - checks for alphabetic character
 * @n: The number to tested
 * Return: 1 if the character c falls into the tested class,
 * and a zero value if not..
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
