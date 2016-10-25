#include "holberton.h"

/**
 * print_rev - prints the reverse of the line
 * @s_ptr: a string that is a pointer of type char
 */

void print_rev(char *s_ptr)
{
	int n, m;


	for (n = 1; *(s_ptr + n) != '\0'; n++)
	{
	}
	for (m = n; m >= 0; m--)
	{
		_putchar(*(s_ptr + m));
	}
	_putchar('\n');
}
