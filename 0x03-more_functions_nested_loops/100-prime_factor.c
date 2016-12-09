#include <stdio.h>
#include <math.h>

/**
 * main - find the largest prime number that is the multiple of
 * 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int n, num;

	n = 612852475143;
	num = 2;

	while (num <= sqrt(n))
	{
		if (n % num == 0)
		{
			n /= num;
		}
		else
		{
			num++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
