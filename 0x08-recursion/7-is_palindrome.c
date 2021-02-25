#include "holberton.h"

/**
 * is_palindrome - Calculate if a string is palidrome.
 * @s: The string.
 *
 * Return: 1 if n is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int c = counter(s);

	c--;
	if (s[0] == s[c])
	{
		s++;
		return (comp_chr(s, c));
	}
	else
	{
		return (0);
	}
}

/**
* comp_chr - Compare if caracteres of string are equals.
* @s: the string.
* @c: reference to compare with s[0[.
*
* Return: integer
*/
int comp_chr(char *s, int c)
{
	c -= 2;
	if (c >= 0)
	{
		if (s[0] == s[c])
		{
			s++;
			return (comp_chr(s, c));
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * counter - Count the length of string.
 * @s: The string.
 *
 * Return: Integer, the length of s.
*/

int counter(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		return (1 + counter(s));
	}
	return (0);
}
