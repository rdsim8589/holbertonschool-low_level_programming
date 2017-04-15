#include "search_algos.h"
#include "1-binary.c"
/**
 * exponential_search - search array using exponential search
 * @array: pointer to the front of the array
 * @size: size of the array
 * @value: value to find in the array
 *
 * Return: index where the value is found, or -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t front, end;
	int index;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	front = 1;
	while (front < size && array[front] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", front, array[front]);
		front = front * 2;
	}
	if (front > size - 1)
		end = size - 1;
	else
		end = front;
	front /= 2;
	printf("Value found between indexes [%lu] and [%lu]\n", front, end);
	index = binary_search_recursion(&array[front], 0, end - front, value);
	if (index != -1)
		return (index + front);
	return (-1);
}
