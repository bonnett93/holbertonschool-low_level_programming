#include "holberton.h"

/**
 * _strcpy -  function that copies the string pointed to by src.
 * @dest: variable destiantion
 * @src: variable to be copied
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
