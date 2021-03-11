#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: The way arguments are separated.
 * @n: Amount of variatic arguments.
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;

	if (n == 0 || separator == NULL)
		return;

	va_start(lista, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(lista, int), separator);
	}
	printf("%d\n", va_arg(lista, int));
	va_end(lista);
}
