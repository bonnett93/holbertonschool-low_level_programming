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
	int ad = 0;

	while (de < 58)
	{
		int uni = 48 + ad;

		while (uni < 58)
		{
			if (de != uni)
			{
				putchar(de);
				putchar(uni);
				if (de != 56 || uni != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
			uni++;
		}
		ad++;
		de++;
	}
	putchar(10);
	return (0);
}
