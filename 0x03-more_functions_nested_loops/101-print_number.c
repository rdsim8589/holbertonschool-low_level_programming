#include "holberton.h"

/**
 * num_len - length of the number
 * @n: some number
 *
 * Return: the length of the number
 */
int num_len(int n)
{
	int num_len;

	num_len = 1;
	while (n >= 10)
	{
		n /= 10;
		num_len++;
	}
	return (num_len);
}

/**
 * print_number - print an integered
 * @n: some int
 *
 * Return: 0
 */

void print_number(int n)
{
	int ten_power;

	ten_power = 1;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (num_len(ten_power) < num_len(n))
	{
		ten_power *= 10;
	}
	while (ten_power > 1)
	{
		_putchar((n / ten_power) % 10 + '0');
		ten_power /= 10;
	}
	_putchar(n % 10 + '0');
}
