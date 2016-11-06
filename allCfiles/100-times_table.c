#include "holberton.h"

/**
 * print_times_table - prints a times table with size n
 * @n: an int
 */

void print_times_table(int n)
{
	int i, j, multi;

	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multi = i * j;
				if (multi >= 100)
				{
					_putchar(multi / 100 + '0');
					_putchar((multi / 10) % 10 + '0');
					_putchar(multi % 10 + '0');
				}
				else if (multi >= 10)
				{
					_putchar(' ');
					_putchar(multi / 10 + '0');
					_putchar(multi % 10 + '0');
				}
				else if (j == 0)
				{
					_putchar(multi + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(multi + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
