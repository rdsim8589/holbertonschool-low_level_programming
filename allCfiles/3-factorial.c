#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: an int type of the number you want the factorial of
 *
 * Return: the factorial of a given number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
		return (-1);
	return (factorial(n - 1) * n);
}
