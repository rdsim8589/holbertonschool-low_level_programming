#include <stdio.h>

/**
 * main - sum the num < 1024 that are multiples of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0)
		{
			sum += n;
		}
		else if (n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
