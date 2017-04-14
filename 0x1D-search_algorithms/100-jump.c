#include "search_algos.h"
#include <math.h>
#include "0-linear.c"
/**
 * jump_search - Search value of a sorted array using jump search
 * @array: Pointer to the front of the array
 * @size: size of the array
 * @value: value to check
 *
 * Return: The index where the value is found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left, right, jump;
	int end, index;

	if (array == NULL)
		return (-1);
	left = end = 0;
	right = jump = sqrt(size);
	while (value >= array[right] && end == 0)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       left, array[left]);
		printf("Value checked array[%lu] = [%d]\n",
		       right, array[right]);
		left += jump;
		right += jump;
		if (right > size - 1)
		{
			right = size - 1;
			end = 1;
		}

	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, left + jump);
	index = linear_search(&array[left], right - left + 1, value);
	if (index == -1)
		return (-1);
	else
		return (left + index);
}
