#include "holberton.h"

/**
 * leet - encodes a tring in l337
 * @s: string
 *
 * Return: a pointer to char type
 */

char *leet(char *s)
{
	char key[] = "aAeEoOtTlL";
	char keyvalue[] = "4433007711";
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (key[j] != '\0')
		{
			if (key[j] == s[i])
			{
				s[i] = keyvalue[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
