#include "search_algos.h"
#include <math.h>
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
	size_t left, right, jump, i;
	int end;

	if (array == NULL)
		return (-1);
	right = left = end = 0;
	jump = sqrt(size);
	while (array[right] < value && end == 0)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       right, array[right]);
		left = right;
		right += jump;
		if (right > size - 1)
		{
			right = size - 1;
			end = 1;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, left + jump);
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value ==  array[i])
			return (i);
	}
	return (-1);
}
