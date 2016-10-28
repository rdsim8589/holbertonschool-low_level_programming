#include "holberton.h"
#include <stdio.h>
/**
 * leet - encodes a tring in l337
 * @s: string
 *
 * Return: a pointer to char type
 */

char *rot13(char *s)
{
	char key[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char kvalue[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j, check;

	i = 0;
	while (s[i] != '\0')
	{
		check = 0;
		j = 0;
		while (key[j] != '\0')
		{
			if (key[j] == s[i] && check != 1)
			{
				s[i] = kvalue[j];
				check = 1;
			}
			j++;
		}
		i++;
	}
	return (s);
}
