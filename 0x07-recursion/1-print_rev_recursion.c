#include "holberton.h"

/**
 * _print_rev_recursion - prints a string, in reverse.
 * @s: a pointer to a string
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
