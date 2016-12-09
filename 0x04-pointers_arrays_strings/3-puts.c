#include "holberton.h"

/**
 * _puts - fronts the a string followed by a new line
 * @str_ptr: a string of type char
 */

void _puts(char *str_ptr)
{
	int n;

	for (n = 0; str_ptr[n] != '\0'; n++)
		_putchar(str_ptr[n]);
	_putchar('\n');
}
