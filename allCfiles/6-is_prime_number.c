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
 * helper_prime - checks if n is prime number
 * @n: an int type
 * @check: an int type checking if check divides into n
 * @limit: an int type that is the upper limit
 * Return: 1 if prime and 0 if not prime
 */
int helper_prime(int n, int check, int limit)
{
	if (check < limit)
	{
		if (n % check == 0)
		{
			return (0);
		}
		else
		{
			return (helper_prime(n, check + 1, limit));
		}
	}
	return (1);
}

/**
 * is_prime_number - checks if n is prime number
 * @n: an int type
 *
 * Return: 1 if prime and 0 if not prime
 */
int is_prime_number(int n)
{
	int limit, prime_switch;

	limit = sqrt_helper(n, 1, n);
	if (n < 2)
	{
		return (0);
	}
	prime_switch = helper_prime(n, 2, limit);
	return (prime_switch);
}
