#include "holberton.h"
/**
 * print_binary - print out the binary representation of a number
 * @n: a number to be converted to Binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		recursive_print_binary(n, 1);
}

/**
 * recursive_print_binary - print out the binary representation of a number
 * @n: number to be converted to Binary
 */

void recursive_print_binary(unsigned long int n, unsigned long int multiple_two)
{
	if (multiple_two <= n)
	{
		recursive_print_binary(n, multiple_two << 1);
		if ((n & multiple_two) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
