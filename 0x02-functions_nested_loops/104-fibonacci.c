#include <stdio.h>

/**
 * main - print the sum of the Fibonacci numbers up to 50
 *
 * Return: 0
 */

int main(void)
{
	int n;
	unsigned long fib1, fib2, ffib1, bfib1, ffib2, bfib2;

	fib1 = 1;
	fib2 = 2;
	for (n = 0; n < 49; n++)
	{
		if (fib2 < 4294967295)
		{
			printf("%lu, %lu", fib1, fib2);
			fib1 += fib2;
			fib2 += fib1;
		}
		else
		{
			ffib1 = fib1 / 1000000000;
			bfib1 = fib1 % 1000000000;
			ffib2 = fib1 / 1000000000;
			bfib2 = fib1 % 1000000000;
			printf("%lu%lu, %lu%lu", ffib1, bfib1, ffib2, bfib2);
			fib1 += fib2;
			fib2 += fib1;
		}
		if (n != 48)
		{
			printf(", ");
		}

	}
	printf("\n");
	return (0);
}
