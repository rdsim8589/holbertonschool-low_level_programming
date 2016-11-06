#include "holberton.h"

/**
 * _isdigit - checks if the int is a number between 0 and 9
 * @c: an int
 *
 * Return: 1 if c if is a digit between 0 and 9
 * 0 if not a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
