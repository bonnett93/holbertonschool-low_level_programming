#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string
 *
 * Return: int, length of s.
 */
int _strlen_recursion(char *s)
{
	if (!s[0])
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
