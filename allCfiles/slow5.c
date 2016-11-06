#include "holberton.h"

/**
 * sqrt_helper - returns the natural sqrt num
 * @n: int type of the number to check the sqrt
 * @check: int type of lower limt
 *
 * Return: -1 if not a sqrt, sqrt value if sqrt
 */
int sqrt_helper(int n, int check)
{
	if (check * check == n)
	{
		return (check);
	}
	if (check * check < n)
	{
		return (sqrt_helper(n, check + 1));
	}
	return (-1);

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
	value = sqrt_helper(n, 1);
	return (value);
}
