#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: The character to print
 * @s2:
 * @n:
 *
 * Return: pointer to a newly allocated space in memory,
 * On error, NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;
	for (j = 0; s2[j] && j < n; j++)
		len2++;

	ptr = malloc(sizeof(char) * len1 + len2 + 1);
	if (ptr == NULL)
	{
		return(NULL);
	}

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] && j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
