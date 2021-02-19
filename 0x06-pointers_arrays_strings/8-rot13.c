#include "holberton.h"

/**
 * rot13 - Encode a string into rot13.
 * @str: the string.
 *
 * Return: string changed.
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{

		if ((str[i] >= 'A' && str[i] <= 'M')
			|| (str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z')
			|| (str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] = str[i] - 13;
		}
	}
	return (str);
}
