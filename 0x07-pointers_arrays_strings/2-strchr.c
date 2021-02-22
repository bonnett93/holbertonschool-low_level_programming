#include <unistd.h>

/**
 * *_strchr - Locates a char in a string.
 * @s: The string to looking for in.
 * @c: The character to looking for.
 *
 * Return: A pointer to the first ocurrence of c in s.
 * NULL if the caracter is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
