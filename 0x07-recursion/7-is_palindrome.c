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

/**
 * helper_pal - returns 1 if a string is a palindrome and 0 if not.
 * @s: a pointer a string type
 * @start: starting index
 * @end: ending index
 *
 * Return:  returns 1 if a string is a palindrome and 0 if not.
 */

int helper_pal(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (helper_pal(s, start + 1, end - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: a pointer a string type
 *
 * Return:  returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int pal_check;

	if (s == '\0')
	{
		return (1);
	}
	pal_check = helper_pal(s, 0, _strlen_recursion(s) - 1);
	return (pal_check);
}
