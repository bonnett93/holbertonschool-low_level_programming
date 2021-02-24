#include "holberton.h"

/**
 * _pow_recursion - returns x raised to the power of y.
 * @x: a number int.
 * @y: a number positive int
 *
 * Return: the value of x^y,
 * -1 when error because y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y -= 1;
		return (_pow_recursion(x, y) * x);
	}
}
