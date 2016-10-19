#include <stdio.h>

/**
 * main - print the sum of the Fibonacci numbers up to 50
 *
 * Return: 0
 */

int main(void)
{
	int n;
	long fib1, fib2;

	fib1 = 1;
	fib2 = 2;
	for (n = 0; n < 25; n++)
	{
		printf("%ld, %ld", fib1, fib2);
		if (n != 24)
		{
			printf(", ");
		}
		fib1 += fib2;
		fib2 += fib1;
	}
	printf("\n");
	return(0);
}
