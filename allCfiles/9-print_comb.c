#include <stdio.h>

/**
 * main - separate base 10 number by , and space
 *
 * Return: 0 
 */

int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
