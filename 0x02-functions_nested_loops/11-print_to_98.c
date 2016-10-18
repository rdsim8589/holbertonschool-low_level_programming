#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print the numbers from n to 98
 * @n: an int
 *
 * Description: if n < 98, starts from the n increasing. If n > 98 starts
 * from n decending
 */

void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 99; j--)
		{
			printf("%d, ", j);
		}
	}
	printf("98\n");
}
