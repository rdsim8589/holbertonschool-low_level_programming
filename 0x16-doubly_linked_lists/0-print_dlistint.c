#include "lists.h"
/**
 * print_dlistint - prints all elements of the dlistint_t list
 * @h: pointer to the dlistint_t list
 *
 * Return:a pointer
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
