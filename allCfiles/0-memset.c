#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer of char type
 * @b: the constant byte
 * @n: amount of constant bytes that are to be filled with b
 *
 * Return: The pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
