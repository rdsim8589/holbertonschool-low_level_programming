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
		else if (s[i + 1] == c)
		{
			return (s + i + 1);
		}
		i++;
	}
	return (s + i + 1);
}
