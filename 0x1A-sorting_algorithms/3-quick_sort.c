#include "sort.h"
/**
 * quick_sort - quick sort method
 * @array: an array of ints
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	rl_quick_sort(array, 0, (int) size - 1, size);
}

/**
 * rl_quick_sort- recursive call that calls and sorts small
 * partitions of the array
 * @array: an array of ints
 * @start: the first index of the array
 * @end: the last index of the array
 * @size: the size of the array
 */
void rl_quick_sort(int *array, int start, int end, size_t size)
{
	int i;
	if (start < end)
	{
		i = ary_divider(array, start, end, size);
		rl_quick_sort(array, start, i - 1, size);
		rl_quick_sort(array, i, end, size);
	}
}
/**
 * ary_divider- divides the array into number
 * less than and greater then the pivot
 * @array: the array of ints
 * @start: the start of the array section
 * @end: the end of the array sections
 * @size: the size of the array
 *
 * Return: index to divide the array
 */
int ary_divider(int *array, int start, int end, size_t size)
{
	int i, j;
	int pivot;

	i = start - 1;
	j = end + 1;
	pivot = array[end];
	while (1)
	{
		do{
			i++;
		}
		while (array[i] < pivot);

		do{
			j--;
		}
		while (array[j] > pivot);
		if (i >= j)
		{
			return (i);
		}
		else
		{
			swap(array, i, j);
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
