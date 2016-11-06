#include <stdio.h>

/**
 * main - prints all base 10 numbers
 *
 * Description: prints all base 10 numbers
 * using only putchar twice.
 * Return: 0
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
