#include "holberton.h"

/**
 * _strcmp - frunctions that compares two strings
 * @s1: a char type string pointer
 * @s2: a char type string pointer
 *
 * Return: an int stating the difference in acsii value
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	i = 0;
	for (j = 0; s1[j] != '\0'; j++)
	{
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (j > k)
	{
		return (s1[k]);
	}
	else
	{
		return (-1 * s2[j]);
	}

	return (0);
}
