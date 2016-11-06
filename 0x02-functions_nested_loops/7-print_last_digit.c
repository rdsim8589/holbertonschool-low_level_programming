#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: an int
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	char last;

	last = n % 10;
	if (n < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
