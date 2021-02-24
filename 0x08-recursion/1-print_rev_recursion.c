#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	_putchar('\0');
	if (s[0] && s[1])
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(s[0]);
	}
	else
	{
		_putchar(s[0]);
	}
}
