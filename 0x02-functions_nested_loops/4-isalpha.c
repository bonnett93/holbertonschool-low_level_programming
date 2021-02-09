#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The caracter to tested
 * Return: 1 if the character c falls into the tested class,
 * and a zero value if not..
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
