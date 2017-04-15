#include "search_algos.h"
/**
 * interpolation_search - search for a value using interpolation search
 * @array: pointer to the front of the array
 * @size: size of the array
 * @value: value to find in the array
 *
 * Return: index where the value is found, or -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	if (pos >= size)
		printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
