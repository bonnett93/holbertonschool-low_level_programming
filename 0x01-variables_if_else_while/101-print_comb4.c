#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int a;
	int s = 48;

	for (a = 0; a < 999; a++)
	{
		if ((a % 10) > ((a / 10) % 10) &&  ((a / 10) % 10) > a / 100)
		{
			putchar(a / 100 + s);
			putchar(((a / 10) % 10) + s);
			putchar(a % 10 + s);

			if (a < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
