#include <stdio.h>
/**
 * main- prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 1 if correct.
*/
int main(void)
{
	int m = 1;
	int n = 2;
	unsigned long int i, x;

	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		x = m + n;
		if (i < 47)
		{
			printf("%lu, ", x);
		}
		else
		{
			printf("%lu\n", x);
		}
		m = n;
		n = x;
	}
	return (0);
}
