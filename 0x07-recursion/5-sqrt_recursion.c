#include "holberton.h"
#include <stdio.h>

/**
 * sqrt_helper - returns the natural sqrt num
 * @n: int type of the number to check the sqrt
 * @up: int type of upper limit
 * @low: int type of lower limt
 *
 * Return: -1 if not a sqrt, sqrt value if sqrt
 */
int sqrt_helper(int n, int low, int up)
{
	int check;

	check = ((low + up) / 2);
	if ((check * check) == n)
	{
		return (check);
	}
	if (up < low)
	{
		return (-1);
	}
	if (check * check < n)
	{
		return (sqrt_helper(n, check + 1, up));
	}
	return (sqrt_helper(n, low, check - 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: an int type where you want to find the sq root
 *
 * Return: the sq root if n has one, or -1 if no sq root
 */
int _sqrt_recursion(int n)
{
	int value;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 2 || n == 3)
	{
		return (-1);
	}
	value = sqrt_helper(n, 3, n);
	return (value);
}
