#include <stdlib.h>

/**
 * array_range - array of integers within the range
 * @min: a number of min
 * @max: a number of max
 *
 * Return: a pointer to an int type with the use of malloc
 */

int *array_range(int min, int max)
{
	int *array;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min + 1;

	array = malloc(diff * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < diff; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
