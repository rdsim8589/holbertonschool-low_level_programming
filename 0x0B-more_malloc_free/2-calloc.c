#include <stdlib.h>

/**
 * _calloc - allocates memory from an array using malloc
 * @nmemb: number of members
 * @size: the size of the type
 *
 * Return: a void type created through malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *char_ary;
	int ary_size, i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ary_size = nmemb * size;
	array = malloc(ary_size);

	if (array == NULL)
		return (NULL);

	char_ary = array;
	for (i = 0; i < ary_size; i++)
	{
		char_ary[i] = 0;
	}
	return (array);
}
