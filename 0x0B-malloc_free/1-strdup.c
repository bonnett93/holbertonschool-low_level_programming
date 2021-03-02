#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Size of array
 *
 * Return: Ponter to array
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len = 2;

	if (str == 0)
		return (0);

	for (i = 0; str[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * len);
	if (ptr == 0)
		return (0);

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
