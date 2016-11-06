#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: a pointer to destination string
 * @src: a pointer to the string that you want to copy into memory
 * @n: the number of bytes to be copied
 *
 * Return: the pointer dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
