#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array followed by a new line
 * @a_ptr: an int that will be a pointer
 * @n: int of elements an array
 */

void print_array(int *a_ptr, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a_ptr[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
