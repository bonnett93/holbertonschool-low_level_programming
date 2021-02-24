#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (s[0] && s[1])
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(s[0]);
	}
	else if (s[0] != '\0')
	{
		_putchar(s[0]);
	}
}
