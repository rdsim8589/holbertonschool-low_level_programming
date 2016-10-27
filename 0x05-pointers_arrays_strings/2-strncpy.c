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
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = src['\0'];
	}
	return (dest);
}
