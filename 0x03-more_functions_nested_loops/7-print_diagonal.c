#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: an int representing the len of the diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
			if (j == i)
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
