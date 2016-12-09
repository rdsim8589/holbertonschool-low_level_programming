#include "holberton.h"

/**
 * _isupper - checks if the character is upper case
 * @c: an int
 *
 * Return: 1 if c if upper case
 * 0 if not upper case
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
