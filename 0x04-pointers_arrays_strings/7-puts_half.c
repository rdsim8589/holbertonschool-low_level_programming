#include "holberton.h"

/**
 * puts_half - print second half of the string
 * @str_ptr: a string
 */

void puts_half(char *str_ptr)
{
	int n, m;

	for (n = 0; str_ptr[n] != '\0'; n++)
	{
	}
	if (n % 2 == 0)
	{
		for (m = (n / 2); m <= n - 1; m++)
		{
			_putchar(str_ptr[m]);
		}
	}
	else
	{
		for (m = ((n - 1) / 2); m <= n - 1; m++)
		{
			_putchar(str_ptr[m]);
		}
	}
	_putchar('\n');
}
