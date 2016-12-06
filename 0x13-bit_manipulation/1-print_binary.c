#include "holberton.h"
/**
 * print_binary - print out the binary representation of a number
 * @n: a number to be converted to Binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	if (n > 1)
	{
		print_binary(n >> 1);
		if ((n & 1) != 0)
			_putchar('1');
		else
			_putchar('0');
	}

}
