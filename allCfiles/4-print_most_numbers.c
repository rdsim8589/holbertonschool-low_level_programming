#include "holberton.h"

/**
 * print_most_numbers - prints the num from 0-9 not 2 and 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9 ; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
