#include "holberton.h"

/**
 * _islower - checks for lower case letter
 * @c: any int
 *
 * Description: checks an input to see a lower case character
 * Return: 1 if lower and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
