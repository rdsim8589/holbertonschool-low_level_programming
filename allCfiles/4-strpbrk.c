#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: a pointer to a string
 * @c: a character of type c
 *
 * Return: a pointer to the first instance of c
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i + 1] == c)
		{
			return (s + i + 1);
		}
		i++;
	}
	return (0);
}


/**
 * _strpbrk - searches a string for any of a set bytes
 * @s: a pointer to the string
 * @accept: a pointer to the string containing characters match
 *
 * Return: a pointer to the first instance a char in accept matches s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_strchr(accept, s[i]) != '\0')
		{
			return (s + i);
		}
	}
	return ('\0');
}
