#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - last digit of the num and state if >5, <6, 0
 *
 * Description: randomly generates the number and declares if
 * the value%10 is >5, =0, or <6
(* section header: Section description)*
 * Return: the string declaring the last digit of number and the num
 * with if it is greater than 5 , is 0, or is less than 6 and not 0
 */

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5  0\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
