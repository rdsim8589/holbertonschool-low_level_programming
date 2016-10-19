#include <stdio.h>

/**
 * main - print the sum of the Fibonacci numbers up to 4,000,000
 *
 * return: 0
 */

int main(void)
{
	int n;
	unsigned long fib1, fib2, sum;

	fib1 = 1;
	fib2 = 2;
	for (n = 0; n < 2000000; n++)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		fib1 += fib2;
		fib2 += fib1;
	}
	printf("\n");
	return (0);
}
