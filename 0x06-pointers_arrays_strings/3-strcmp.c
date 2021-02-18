#include "holberton.h"

/**
 * _strcmp - compare two strings.
 * @s1: First string to compare.
 * @s2: Second strgin to compare.
 *
 * Return: Integer, sustraccion s1 - s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int suma = 0;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			suma = s1[i] - s2[i];
			break;
		}

	}
	return (suma);
}
