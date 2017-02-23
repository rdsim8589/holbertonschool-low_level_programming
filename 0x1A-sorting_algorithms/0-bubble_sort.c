#include "sort.h"
/**
 * bubble_sort - sorts a list of ints in ascending order with bubble sort
 * @array: an array of ints
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, tmp_size, swapped;

	if (array == NULL || size <= 1)
		return;
	i = 0;
	tmp_size = size;
	swapped = 0;
	while (i < tmp_size)
	{
		if ((array + i) == NULL)
			return;
		if (array[i] > array[i + 1])
		{
			swap(array, i, i + 1);
			print_array(array, size);
			swapped = 1;
		}
		if (i + 1 == tmp_size - 1)
		{
			if (swapped == 0)
				return;
			i = 0;
			tmp_size -= 1;
			swapped = 0;
		}
		else
		{
			i++;
		}
	}
}
/**
 * swap - swaping the value of array at idx_1 and idx_2
 * @array: the array of ints
 * @idx_1: the first index
 * @idx_2: the seconds index
 *
 */
void swap(int *array, size_t idx_1, size_t idx_2)
{
	int tmp;

	tmp = array[idx_1];
	array[idx_1] = array[idx_2];
	array[idx_2] = tmp;
}
