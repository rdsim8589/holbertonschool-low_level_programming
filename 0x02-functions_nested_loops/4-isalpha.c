#include "holberton.h"

/**
 * _isalpha - checks for lower case letter
 * @c: any int
 *
 * Description: checks an input to see a lower case character
 * Return: 1 if lower,or upper case and 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
