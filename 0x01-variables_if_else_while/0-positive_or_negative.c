#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the int, state if +, - ,0
 *
 * Description: randomly generates the number and declares if postive
 * ,negative, or zero
 * Return: the randomly generated number followed by a statement
 * "is positive", "is negative", or "is zero"
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
