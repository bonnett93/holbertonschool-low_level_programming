#include <stdio.h>
/**
 * main- finds and prints in fibonacci
 * the sum of the even-valued terms,
 * starting with 1 and 2, followed by a new line.
 * Return: 1 if correct.
*/
int main(void)
{
	int i;
	long int m = 1;
	long int n = 2;
	unsigned long int x, r;

	r = 2;
	for (i = 0; i < 31; i++)
	{
		x = m + n;
		if (x % 2 == 0)
		{
			r = r + x;
		}
		m = n;
		n = x;
	}
	printf("%lu\n", r);
	return (0);
}
