#include "lists.h"				\
/**
 * dlistint_len - returns the number of elements in the dislistint_t list
 * @h: head of the dislistint_t list
 *
 * Return: the number of elements in the dislistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	while (h != NULL && h->prev != NULL)
		h = h->prev;
	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
