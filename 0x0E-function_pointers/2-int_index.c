#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: pointer to an array of ints
 * @size: number of elements in the array
 * @cmp: a pointer to the function cmp
 *
 * Return: i of 1st element which cmp doesn't return 0
 * if size <= 0 return -1. if no elements match return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
