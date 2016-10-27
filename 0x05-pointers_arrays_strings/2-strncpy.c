#include "holberton.h"

/**
 * _strncpy - create a copy of a string from str to dest
 * @dest: a string pointer
 * @src: a string pointer
 * @n: an int n
 *
 * Return: a pointer to the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	while (src[i] != '\0' && i < n && i < j)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
