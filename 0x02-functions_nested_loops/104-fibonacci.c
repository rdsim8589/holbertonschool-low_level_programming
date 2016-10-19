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
	for (n = 0; n < 48; n++)
	{
		if (n < 44)
		{
			printf("%lu, %lu", fib1, fib2);
			fib1 += fib2;
			fib2 += fib1;
			if (n == 43)
			{
			ffib1 = fib1 / 1000000000000000;
			bfib1 = fib1 % 1000000000000000;
			ffib2 = fib2 / 1000000000000000;
			bfib2 = fib2 % 1000000000000000;
			printf(", %ld0%ld, %ld0%ld", ffib1, bfib1, ffib2, bfib2);
			}

		}
		else
		{
			bfib1 += bfib2;
			ffib1 = ffib1 + ffib2 + (bfib1 / 1000000000000000);
			bfib1 = bfib1 % 1000000000000000;
			bfib2 += bfib1;
			ffib2 = ffib1 + ffib2 + (bfib2 / 1000000000000000);
			bfib2 = bfib2 % 1000000000000000;
			printf("%ld%ld, %ld%ld", ffib1, bfib1, ffib2, bfib2);
		}
		if (n != 47)
			printf(", ");

	}
	printf("\n");
	return (0);
}
