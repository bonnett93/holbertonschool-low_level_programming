#include "holberton.h"

/**
 * is_prime_number - Calculate if n is prime.
 * @n: positive int.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime_recursion(n, 2));
	}
}

/**
* _prime_recursion - Calculate if a number is prime
* @n: number to calculate if is prime
* @x: number to increment
*
* Return: integer
*/

int _prime_recursion(int n, int x)
{
	if (x == (n / 2) + 1)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (_prime_recursion(n, x + 1));
}
