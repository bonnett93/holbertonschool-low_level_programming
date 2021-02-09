#include <stdio.h>
/**
 * main- computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 * Return: 1 if correct.
*/
int main(void)
{
	int i;
	int r = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			r = r + i;
		}
	}
	printf("%d\n", r);
	return (0);
}
