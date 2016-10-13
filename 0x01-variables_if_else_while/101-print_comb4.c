#include <stdio.h>
/**
 * main - prints num 000-999 with , and " " between no duplicates.
 *
 * Return: 0
 */

int main(void)
{
	int num_100;
	int num_10;
	int num_0;

	num_100 = '0';
	num_10 = '0';
	num_0 = '0';
	while (num_100 <= '9')
	{
		while (num_10 <= '9')
		{
			while (num_0 <= '9')
			{
				if (num_0 > num_10 && num_10 > num_100)
				{
					putchar(num_100);
					putchar(num_10);
					putchar(num_0);
					if (num_100 != '7' || num_10 != '8' || num_0 != '9')
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
		num_10 = '0';
		num_100++;
	}
	putchar('\n');
	return (0);
}
