#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the times to print table.
 * If n is greater than 15 or less than 0 the not print anything
 * Return: void.
 */
void print_times_table(int n)
{
	int f, c;

	if (n >= 0 && n <= 15)
	{
		for (f = 0; f < (n + 1); f++)
		{
			for (c = 0; c < (n + 1); c++)
			{
				if ((f * c) < 10 && c > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((f * c) + 48);
				}
				else if ((f * c) == 0)
				{
					_putchar((f * c) + 48);
				}
				else if ((f * c) < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((f * c) / 10) + 48);
					_putchar(((f * c) % 10) + 48);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((f * c) / 100) + 48);
					_putchar((((f * c) / 10) % 10) + 48);
					_putchar(((f * c) % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
