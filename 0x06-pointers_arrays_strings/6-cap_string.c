#include "holberton.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: the string.
 *
 * Return: string changed.
 */

char *cap_string(char *str)
{
	int i, j;
	char *sep = " \t\n,;.!?\"(){}}";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; sep[j]; j++)
		{
			if (str[i] == sep[j] && str[i + 1] != '\0')
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
				break;
			}
		}
	}
	return (str);
}
