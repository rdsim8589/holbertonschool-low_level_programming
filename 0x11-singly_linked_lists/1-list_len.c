#include "lists.h"

/**
 * list_len - return the number of elements in linked list_t list
 * @h: a const that is a pointer to list_h
 *
 * Return: the number of elements in the linked list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t i;

	i = 0;
	while (current->next != NULL)
	{
		current = current->next;
		i++;
	}
	return(i + 1);

}
