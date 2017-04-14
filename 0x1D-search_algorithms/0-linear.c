#include "search_algos.h"
/**
 * linear_search - search for a value in an array of ints using Linear serach
 * @array: Pointer to the first element of the array
 * @size: size of the array
 * @value: value to serach for
 *
 * Return: first index the value is found, or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
