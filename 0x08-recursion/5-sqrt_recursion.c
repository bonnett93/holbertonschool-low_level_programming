#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of n.
 * @n: positive int.
 *
 * Return: the value of x^(1/2),
 * -1 when error because y < 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_increment(n, 1));
}

/**
* _sqrt_increment - give the sqrt of n
* @n: number to calculate the sqrt
* @x: number to increment
*
* Return: integer
*/

int _sqrt_increment(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (_sqrt_increment(n, x + 1));
}
