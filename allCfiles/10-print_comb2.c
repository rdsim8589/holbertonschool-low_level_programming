#include <stdio.h>

/**
 * main - prints num 00-99 with , and " " between
 *
 * Return: 0
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
			putchar(num_10);
			putchar(num_0);
			if (num_0 == '9' && num_10 == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			num_0++;
		}
		num_0 = '0';
		num_10++;
	}
	putchar('\n');
	return (0);
}
