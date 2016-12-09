#include "holberton.h"

/**
 * *_strcpy - copies the string that is pointed at src_ptr to dest_ptr
 * @dest_ptr: a char type of that is a copy of src_ptr's char
 * @src_ptr: a char type of a string
 *
 * Return: dest_ptr
 */


char *_strcpy(char *dest_ptr, char *src_ptr)
{
	int n, m;

	for (n = 0; src_ptr[n] != '/0'; n++)
		;
	for (m = 0; m <= n; m++)
	{
		dest_ptr[m] = src_ptr[m];
	}
	return (dest_ptr);
}
