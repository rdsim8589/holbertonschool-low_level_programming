#include <stdlib.h>

/**
 * _realloc - reallocates memory using malloc and free.
 * @ptr: a pointer to a void that is create by malloc
 * @old_size: the size of the old allocated memory
 * @new_size: the size of the new allocated memory
 *
 * Return: a pointer to a void with the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ary;
	char *temp_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ary = malloc(new_size);
		if (new_ary == NULL)
			return (NULL);
		free(ptr);
		return (new_ary);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	new_ary = malloc(new_size);
	temp_ptr = ptr;
	if (new_ary == NULL)
		return (NULL);
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			new_ary[i] = temp_ptr[i];
	}
	else if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
			new_ary[i] = temp_ptr[i];
	}
	free(ptr);
	return (new_ary);
}
