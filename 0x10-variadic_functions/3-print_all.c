#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int encontro = 0, i = 0;
	char *str;

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(ap, format);
	while (format[i] && format != NULL)
	{
		encontro = 0;
		switch (format[i])
		{
		case 's':
			encontro = 1;
			str = va_arg(ap, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			encontro = 1;
			break;
		case 'c':
			printf("%c", (char) va_arg(ap, int));
			encontro = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			encontro = 1;
			break;
		}
		if (encontro == 1 && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
}
