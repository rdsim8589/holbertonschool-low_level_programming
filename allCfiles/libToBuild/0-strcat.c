#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: a string pointer
 * @src: a string pointer
 *
 * Return: pointer to the resultsing string dest
 */

char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	m = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}
	n++;
	m++;
	dest[n] = src[m];
	return (dest);
}
