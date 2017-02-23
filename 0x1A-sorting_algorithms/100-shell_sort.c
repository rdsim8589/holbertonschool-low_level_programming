#include "sort.h"
/**
 * shell_sort - shell sort
 * @array: the array
 * @size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;
	for (gap = 1; gap < size / 3; gap = (gap * 3) + 1)
		;
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i; j >= gap; j -= gap)
			{
				if (array[j] < array[j - gap])
					swap(array, j, j - gap);
				else
					break;
			}
		}
		print_array(array, size);
		gap /= 3;
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
