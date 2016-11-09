#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: the size of the array
 * @c: the character to be placed in that memory.
 *
 * Return: a pointer of the the malloc creates place in memory
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';
	return (array);
}
