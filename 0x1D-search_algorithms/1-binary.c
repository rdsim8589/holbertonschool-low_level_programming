#include "search_algos.h"
/**
 * binary_search_recursion - recursive search through the binary search
 * @array: pointer to the front of the array
 * @front: fron
 * @end:
 * @value:
 */
int binary_search_recursion(int *array, size_t front, size_t end, int value)
{
	size_t index, tmp_front;

	if (front > end)
		return (-1);

	printf("Searching in array: ");
	for (tmp_front = front; tmp_front < end; tmp_front++)
		printf("%d, ", array[tmp_front]);
	printf("%d\n", array[tmp_front]);

	index = (front + end) / 2;
	if (array[index] == value)
		return (index);
	if (array[index] > value)
		return binary_search_recursion(array, front, index, value);
	if (array[index] < value)
		return binary_search_recursion(array, index + 1, end, value);
	return (-2);
}
/**
 * binary_search - search through a sorted array with binary search
 * @array: pointer to the front of the array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index where the value is found or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_recursion(array, 0, size - 1, value));
}
