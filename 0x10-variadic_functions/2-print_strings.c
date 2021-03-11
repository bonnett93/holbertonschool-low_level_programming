#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;
	char *x;

	if (n == 0)
		return;

	va_start(lista, n);
	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(lista, char *);
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	x = va_arg(lista, char *);
	printf("%s\n", (x != NULL) ? x : "(nil)");
	va_end(lista);
}
