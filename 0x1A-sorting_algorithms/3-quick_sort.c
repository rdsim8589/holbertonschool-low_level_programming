#include "sort.h"
/**
 * quick_sort - quick sort method
 * @array: an array of ints
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	rl_quick_sort(array, 0, size-1, size);
}
/**
 * rl_quick_sort: recursive call that calls and sorts small
 * partitions of the array
 * @array: an array of ints
 * @start: the first index of the array
 * @end: the last index of the array
 */
void rl_quick_sort(int *array, size_t start, size_t end, size_t size)
{
	int i;
	if ((end - start) > 2)
	{
		i = ary_divivder(array, start, end, size);
		rl_quick_sort(array, start, i, size);
		rl_quick_sort(array, i+1, end, size);
	}
}
/**
 * ary_divivder - divides the array into number
 * less than and greater then the pivot
 * @array: the array of ints
 * @start: the start of the array section
 * @end: the end of the array sections
 */
size_t ary_divivder(int *array, size_t start, size_t end, size_t size)
{
	size_t i, j;
	int pivot;

	i = start;
	j = end - 1;
	pivot = array[j];
	while (1)
	{
		printf("start: %lu, i: %lu, j:%lu, end: %lu\n", start, i, j, end);
		while (array[i] < pivot && i <= end)
		{
			i++;
		}
		while (array[j] > pivot && j >= start)
		{
			j--;
		}
		if (i < j)
		{
			swap(array, i, j);
			print_array(array, size);
		}
		else
		{
			return (j);
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
