#include "holberton.h"

/**
 * print_sign - prints a sign based on num input
 * @n: any int
 *
 * Description: prints '+' if n>0, prints '0' if n=0, and prints '-' if
 * n<0.
 * Return: 1 if n>0, 0 if n=0, and -1 if n<0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
