#include "holberton.h"

/**
 * swap_int - swaps the int values in memory
 * @a: a pointer with the type int
 * @b: a pointer with the type int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
