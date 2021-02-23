#include <unistd.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The string to looking for in.
 * @accept: The character to looking for.
 *
 * Return: pinter to the byte in s that matches first.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (s+i);
			}
		}
	}
	return (NULL);
}
