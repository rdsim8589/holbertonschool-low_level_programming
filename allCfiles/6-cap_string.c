#include "holberton.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: a pointer of type char
 *
 * Return: char pointer
 */

char *cap_string(char *s)
{
	int i, j;
	char spec_array[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[0] -= ' ';
			}
			j = 0;
			while (spec_array[j] != '\0')
			{
				if (s[i - 1] == spec_array[j])
				{
					s[i] -= ' ';
				}
				j++;
			}
		}
		i++;
	}
	return (s);
}
