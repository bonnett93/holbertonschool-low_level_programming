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
	int de = 48;

	while (de < 58)
	{
		int uni = 48;

		while (uni < 58)
		{
			putchar(de);
			putchar(uni);
			if (de != 57 || uni != 57)
			{
				putchar(44);
				putchar(32);
			}
			uni++;
		}

		de++;
	}
	putchar(10);
	return (0);
}
