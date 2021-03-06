#include "holberton.h"

/**
 * *_strncat - concatenates two strings up to n bytes
 * @dest: a string pointer
 * @src: a string pointer
 * @n: an int n
 *
 * Return: a pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0; /*index for dest*/
	j = 0; /*index for src*/
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	i++;
	j++;
	dest[i] = src[j];
	return (dest);
}
