#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: The caracter to tested
 * Return: 1 if the character c falls into the tested class,
 * and a zero value if not..
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
