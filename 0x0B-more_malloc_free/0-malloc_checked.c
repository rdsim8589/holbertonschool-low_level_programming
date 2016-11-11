#include <stdlib.h>

/**
 * malloc_checked - writes a function that allocates memory with malloc
 * @b: size of data type * desired size
 *
 * Return: the void pointer that is set to malloc
 */

void *malloc_checked(unsigned int b)
{
	void *k = malloc(b);

	if (k == NULL)
	{
		exit(98);
	}
	return (k);
}
