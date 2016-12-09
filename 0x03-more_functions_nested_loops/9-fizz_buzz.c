#include <stdio.h>

/**
 * main - print num 1 - 100; num%3 print Fizz; num%5 print Buzz;
 * num%15 print FizzBuzz
 *
 * Return: 0 if true
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n == 100)
			printf("Buzz");
		else if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	putchar('\n');
	return (0);
}
