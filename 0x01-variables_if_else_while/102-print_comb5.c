#include <stdio.h>
/**
 * main - prints num 00 00 to 98 99 with , and " " between no duplicates.
 *
 * decription: the 1st two digits can't be the same as the last two digits
 * Return: 0
 */

int main(void)
{
	int a;
	int b;
	int num_11;
	int num_12;
	int num_21;
	int num_22;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				num_11 = a / 10;
				num_12 = a % 10;
				num_21 = b / 10;
				num_22 = b % 10;
				putchar(num_11 + '0');
				putchar(num_12 + '0');
				putchar(' ');
				putchar(num_21 + '0');
				putchar(num_22 + '0');
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
