#include "holberton.h"

/**
 * factorial - returns the factorial of a number.
 * @n: The given number.
 *
 * Return: the factorial of n when succes,
 * -1 when error because n < 0.
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (factorial(n - 1) * n);
	}
	else
	{
		return (-1);
	}
}
