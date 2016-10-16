#include <stdio.h>

/**
 * main-prints all the hexadecimal number
 *
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';
	char num = '0';


	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
