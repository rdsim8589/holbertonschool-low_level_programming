#include "holberton.h"

/**
 * string_toupper - changes all lower case letters to upper case
 * @s: the pointer for the string s
 *
 * Return: a char type pointer
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= ' ';
		}
		i++;
	}
	return (s);
}
