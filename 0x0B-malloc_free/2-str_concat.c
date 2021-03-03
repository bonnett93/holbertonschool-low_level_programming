#include <stdlib.h>

/**
 * *str_concat - Concatenate 2 strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: Ponter to array
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int len = 1;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (i = 0; s2[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * len);
	if (ptr == 0)
		return (0);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j]; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
