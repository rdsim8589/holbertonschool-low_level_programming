#include "holberton.h"

/**
 * _strstr - find the first occurance of the substring of needle
 * @haystack: a pointer to the string being scanned
 * @needle: a pointer t the string to be serached within haystack
 *
 * Return: a pointer of the first occurence in which needle appears in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;

	i = j = start = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			start = i;
		}
		if (haystack[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return (haystack + start);
			}
			j++;
		}
		else if (haystack[i] == needle[0])
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (0);
}
