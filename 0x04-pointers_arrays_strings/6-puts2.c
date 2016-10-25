#include "holberton.h"

/**
 * puts2 - prints one character of 2 in a string
 * @str_ptr: a string
 */

void puts2(char *str_ptr)
{
	int n, m;

	m = 0;
	for (n = 0; str_ptr[n] != '\0'; n++)
	{
	}
	while (m <= n)
	{
		_putchar(str_ptr[m]);
		m = m + 2;
	}
	_putchar('\n');
}
