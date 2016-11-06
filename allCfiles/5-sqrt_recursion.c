#include "holberton.h"

/**
 * sqrt_helper - returns the natural sqrt num
 * @n: int type of the number to check the sqrt
 * @upper: int type of upper bound
 * @lower: int type of lower bound
 *
 * Return: -1 if not a sqrt, sqrt value if sqrt
 */
int sqrt_helper(int n, int lower, int upper)
{
	long check;

	check = ((lower + upper) / 2);
	if ((check * check) == n)
	{
		return (check);
	}
	if (upper < lower)
	{
		return (-1);
	}
	if (check * check < n)
	{
		return (sqrt_helper(n, check + 1, upper));
	}
	return (sqrt_helper(n, lower, check - 1));
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

	if (n < 0 || n == 2 || n == 3)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
		return (1);
	value = sqrt_helper(n, 0, n);
	return (value);
}
