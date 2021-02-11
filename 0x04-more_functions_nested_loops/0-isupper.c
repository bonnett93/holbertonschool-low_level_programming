#include "holberton.h"

/**
 * _isupper - test if a carcater is a upper letter.
 * @c: The caracter to be tested.
 * Return: When success 1, else 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
