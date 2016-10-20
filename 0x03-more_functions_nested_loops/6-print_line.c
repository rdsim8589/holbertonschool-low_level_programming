#include "holberton.h"

/**
 * print_line - draws a straights line in terminal
 * @n: an int
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for ( i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
