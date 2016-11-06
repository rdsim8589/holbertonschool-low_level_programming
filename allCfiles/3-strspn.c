#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to a string type
 * @accept: a pointer to a string type
 *
 * Return: the number of bytes in s which consist only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	char flag;

	i = 0;
	while (s[i] != '\0')
	{
		flag = '0';
		j = 0;
		while (accept[j] != '\0' && flag == '0')
		{
			if (s[i] == accept[j])
			{
				flag = '1';
				i++;
			}
			j++;
		}
		if (flag == '0')
		{
			return (i);
		}
	}
	return (i);
}
