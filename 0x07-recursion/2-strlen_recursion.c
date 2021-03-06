#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: a pointer to a string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int str_len;

	str_len = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else if (*s != '\0')
	{
		str_len = 1 + _strlen_recursion(s + 1);
	}
	return (str_len);
}
