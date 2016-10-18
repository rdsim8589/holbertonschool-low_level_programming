#include "holberton.h"

/**
 * times_table - print the 9's times table
 */

void times_table(void)
{
	char num[] = "0123456789";
	int i;
	int j;
	int multi;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multi = (num[i] - '0') * (num[j] - '0');
			if (multi >= 10)
			{
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
				_putchar(multi + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
