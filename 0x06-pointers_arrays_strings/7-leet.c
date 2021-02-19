#include "holberton.h"

/**
 * leet - Endoce a string into 1337.
 * @str: the string.
 *
 * Return: string changed.
 */

char *leet(char *str)
{
	int i, j;
	char *lett = "aAeEoOtTlL";
	char *numb = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; lett[j]; j++)
		{
			if (str[i] == lett[j])
			{
				str[i] = numb[j];
				break;
			}
		}
	}
	return (str);
}
