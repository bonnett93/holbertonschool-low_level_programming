#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void.
 */
void times_table(void)
{
	int f;
	int c;
	int m;

	for (f = 0; f < 10; f++)
	{
		for (c = 0; c < 10; c++)
		{
			m = f * c;

			if (m < 10 && c > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + 48);
			}
			else if (m == 0)
			{
				_putchar(m + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
