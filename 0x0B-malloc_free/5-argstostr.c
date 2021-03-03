#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: Pointer to arguments texts array
 *
 * Return: char.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, l;
	int tc = 0;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			tc++;
	}


	str = malloc(sizeof(char) * tc + ac + 1);
	if (str == 0)
		return (0);

	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[l] = av[i][j];
			l++;
		}
		str[l] = '\n';
		l++;
	}

	return (str);
}
