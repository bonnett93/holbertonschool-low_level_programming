#include "holberton.h"

/**
 * string_toupper - change lowercase letters to uppercase.
 * @str: the string.
 *
 * Return: string changed.
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
