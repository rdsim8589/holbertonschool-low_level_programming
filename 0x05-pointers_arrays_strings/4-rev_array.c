#include "holberton.h"

/**
 * reverse_array - reverse the contends of an array of ints
 * @a: a pointer a to an int array
 * @n: the numer of elements of the array
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int holder, i;

	i = 0;
	while (i < n / 2)
	{
		holder = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = holder;
		i++;
	}
}
