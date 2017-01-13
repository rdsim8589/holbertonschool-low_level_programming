#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - copy the contents of one string into the dest
 * @dest: the str to copy to
 * @src: the str to be copied
 * @n: the number of byte to be copied
 *
 * Return: the dest string
 */

char *_strcpy(char *dest, char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (;i < n; i++)
		dest[i] = '\0';
	return (dest);
}


