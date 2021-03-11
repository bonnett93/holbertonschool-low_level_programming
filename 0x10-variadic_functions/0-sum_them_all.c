#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters after n.
 *
 * Return: Integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma = 0;
	va_list lista;

	if (n == 0)
		return (0);

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		suma += va_arg(lista, int);
	}
	va_end(lista);

	return (suma);
}
