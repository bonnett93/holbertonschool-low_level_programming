#include <unistd.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string to looking for in.
 * @accept: The character to looking for.
 *
 * Return: Athe number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, b;
	unsigned int c = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				b = 0;
				c++;
				break;
			}
			else
			{
				b = 1;
			}
		}
		if (b == 1)
		{
			break;
		}
	}

	return (c);
}
