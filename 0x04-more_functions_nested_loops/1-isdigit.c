#include "holberton.h"

/**
 * _isdigit - test if a carcater is a number.
 * @c: The caracter to be tested.
 * Return: When success 1, else 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
