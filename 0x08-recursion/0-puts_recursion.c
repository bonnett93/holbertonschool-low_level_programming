#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: The string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
