#include "sort.h"
/**
 * quick_sort - Will sort an array with ints
 * @array: an array of ints
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}

/**
 * sort - The actual quick sort recursive call
 * @array: the array of ints
 * @low: the lower bound of the array
 * @high: the higher bound of the array
 */
void sort(int *array, size_t low, size_t high, size_t size)
{
	size_t j;

	if (low >= high)
		return;
	j = quick_array_divider(array, low, high, size);
	sort(array, low, j, size);
	printf("i'm stuck in the first call\n");
	sort(array, j + 1, high, size);
	printf("i'm stuck in the second call\n");
}


/**
 * quick_array_divider - Will divide the array into lower and higher numbers
 * @array: the array of ints
 * @size: the size of the array
 *
 * Return: the pivot indecating that all the numbers are less than it
 */
size_t quick_array_divider(int* array, size_t low, size_t high, size_t size)
{
	size_t i, j;
	i = low;
	j = high;

	while (1)
	{
		printf("i: %ld, j: %ld\n", i, j);
		while(array[i] < array[low])
		{
			if (i == high)
				break;
			i++;
		}
		while(array[j] > array[low])
		{
			if (j == low)
				break;
			j--;
		}
		if (i >= j)
			break;
		swap_print(array, i, j, size);
	}
	swap_print(array, j, high, size);
	return (j);



}

/**
 * swap_print - swaping the value of array at idx_1 and idx_2
 * @array: the array of ints
 * @idx_1: the first index
 * @idx_2: the seconds index
 *
 */
void swap_print(int *array, size_t idx_1, size_t idx_2, size_t size)
{
	int tmp;

	tmp = array[idx_1];
	array[idx_1] = array[idx_2];
	array[idx_2] = tmp;
	print_array(array, size);
}
