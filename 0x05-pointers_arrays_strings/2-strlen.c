#include "holberton.h"

/**
 * _strlen - Return the length of a string.
 * @s: Pointer of a string value.
 *
 * Return: int, length of string *s.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		c++;
	}
	return (c);
}

