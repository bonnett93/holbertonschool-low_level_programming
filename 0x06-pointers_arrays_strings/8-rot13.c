#include "holberton.h"

/**
 * rot13 - Encode a string into rot13.
 * @str: the string.
 *
 * Return: string changed.
 */

char *rot13(char *str)
{
	int i, j;
	char *lett = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int numb[] = {110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
			97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
			78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
			65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77};

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
