#include "holberton.h"
/**
 * _abs- computes the absolute value of an integer.
 * @n: The number to tested
 * Return: 1 if the character c falls into the tested class,
 * and a zero value if not..
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
