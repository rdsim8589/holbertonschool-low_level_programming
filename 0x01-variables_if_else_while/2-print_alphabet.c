#include <stdio.h>

/**
 * main - prints the lower case alphabets
 *
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
