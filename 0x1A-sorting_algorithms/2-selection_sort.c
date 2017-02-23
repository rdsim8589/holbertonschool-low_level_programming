#include "sort.h"
/**
 * selection_sort - sorts a list of ints with selection sort algorithm
 * @array: an array of ints
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t current_idx, compare_idx, min_idx;

	if (array == NULL)
		return;
	for (current_idx = 0; current_idx < size; current_idx++)
	{
		min_idx = compare_idx = current_idx;
		while (compare_idx < size)
		{
			if (array[min_idx] > array[compare_idx])
				min_idx = compare_idx;
			compare_idx++;
		}
		if (min_idx != current_idx)
		{
			swap(array, min_idx, current_idx);
			print_array(array, size);
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
