#include <stdio.h>
/**
 * main - prints num 00-99 with , and " " between no duplicates.
 *
 * Return:01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19,
 * 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56,
 * 57, 58, 59, 67, 68, 69, 78, 79, 89
 */

int main(void)
{
	int num_10;
	int num_0;

	num_10 = '0';
	num_0 = '0';
	while (num_10 <= '9')
	{
		while (num_0 <= '9')
		{
			if (num_0 > num_10)
			{
				putchar(num_10);
				putchar(num_0);
				if (num_10 != '8' || num_0 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			num_0++;
		}
		num_0 = '0';
		num_10++;
	}
	putchar('\n');
	return (0);
}
