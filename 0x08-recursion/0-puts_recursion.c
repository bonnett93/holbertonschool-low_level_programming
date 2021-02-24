#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: The string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	s++;
	if (s[0])
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
