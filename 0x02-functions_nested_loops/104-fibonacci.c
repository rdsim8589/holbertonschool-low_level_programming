#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int n;
	long int fib1, fib2, ffib1, bfib1, ffib2, bfib2;

	fib1 = 1;
	fib2 = 2;
	for (n = 0; n < 49; n++)
	{
		if (n < 44)
		{
			printf("%lu, %lu\n", fib1, fib2);
			fib1 += fib2;
			fib2 += fib1;
			if (n == 43)
			{
			ffib1 = fib1 / 10000000000000000;
			bfib1 = fib1 % 10000000000000000;
			ffib2 = fib2 / 10000000000000000;
			bfib2 = fib2 % 10000000000000000;
			}

		}
		else
		{
			printf("%ld%ld, %ld%ld", ffib1, bfib1, ffib2, bfib2);
			bfib1 += bfib2;
			ffib1 = ffib1 + ffib2 + (bfib1 / 10000000000000000);
			bfib1 = bfib1 % 10000000000000000;
			bfib2 += bfib1;
			ffib2 = ffib1 + ffib2 + (bfib2 / 10000000000000000);
			bfib2 = bfib2 % 10000000000000000;

		}
		if (n != 48)
		{
			printf(", ");
		}

	}
	printf("\n");
	return (0);
}
