#include <stdio.h>

/**
 * main -prints the reverse alphabet
 *
 * Return: zyxwvutsrqponmlkjihgfedcba
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
