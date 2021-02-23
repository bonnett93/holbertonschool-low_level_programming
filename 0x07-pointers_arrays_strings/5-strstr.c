/**
 *_strstr - searches a string for any of a set of bytes.
 * @haystack: This is the main C string to be scanned.
 * @needle: the small string to be searched with-in haystack string.
 *
 * Return: pinter to the byte in s that matches first.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, b;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i + j])
			{
				b = 1;
			}
			else
			{
				b = 0;
				break;
			}
		}
		if (b == 1)
		{
			break;
		}
	}
	if (b == 1)
	{
		return (haystack + i);
	}
	return ('\0');
}
