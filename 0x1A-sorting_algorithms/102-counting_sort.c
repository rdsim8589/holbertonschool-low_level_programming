#include "sort.h"
/**
 * counting_sort - counting sort
 * @array: the array
 * @size: the size the array
 */
void counting_sort(int *array, size_t size)
{
	size_t t_j;
	int max_val, i, running_count;
	int *hash_ary, *tmp_ary;

	if (array == NULL || size < 2)
		return;
	max_val = find_max_val(array, size);
	max_val++;

	hash_ary = malloc((max_val) * sizeof(int));
	if (hash_ary == NULL)
		return;
	tmp_ary = malloc(size * sizeof(int));
	if (tmp_ary == NULL)
	{
		free(hash_ary);
		return;
	}
	for (i = 0; i < max_val; i++)
		hash_ary[i] = 0;
	for (t_j = 0; t_j < size; t_j++)
		hash_ary[array[t_j]] += 1;

	running_count = 0;
	for (i = 0; i < max_val; i++)
	{
		running_count += hash_ary[i];
		hash_ary[i] = running_count;
	}
	print_array(hash_ary, max_val);
	for (t_j = 0; t_j < size; t_j++)
	{
		hash_ary[array[t_j]] -= 1;
		tmp_ary[hash_ary[array[t_j]]] = array[t_j];
	}
	swap_values(array, tmp_ary, size);
	free(hash_ary);
	free(tmp_ary);
}
/**
 * find_max_val - finds the max value of an array
 * @array: array of ints
 * @size: size of the array
 *
 * Return: the max value of the array of ints
 */
int find_max_val(int *array, size_t size)
{
	int max_val;
	size_t t_j;

	max_val = 0;
	for (t_j = 0; t_j < size; t_j++)
	{
		if (max_val < array[t_j])
			max_val = array[t_j];
	}
	return (max_val);
}
/**
 * swap_values - swaps all the values in array with tmp_ary
 * @array: array to have values to be replaced
 * @tmp_ary: values used to replace those in array
 * @size: size of the array
 */
void swap_values(int *array, int *tmp_ary, size_t size)
{
	size_t t_j;

	for (t_j = 0; t_j < size; t_j++)
		array[t_j] = tmp_ary[t_j];
}
