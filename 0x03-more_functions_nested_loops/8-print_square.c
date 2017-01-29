#include "holberton.h"

/**
 * print_square - print a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size == 0)
			_putchar('\n');
}
