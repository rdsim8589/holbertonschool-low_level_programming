#include <stdlib.h>
/**
 * array_iterator - executes a function with parameters on each element of ary.
 * @array: a pointer to an array of type int
 * @size: the size of the array
 * @action: pointer to the function action, input int, output void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
