#include "holberton.h"

/**
 * _strlen - return the length of a string
 * @s_ptr: is a pointer of the type char
 *
 * Return: the length of the string
 */

int _strlen(char *s_ptr)
{
	int n;

	for (n = 0; *(s_ptr + n) != '\0'; n++)
	{
	}
	return (n);
}
