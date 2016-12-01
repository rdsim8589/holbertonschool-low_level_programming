#include "lists.h"
/**
 * listint_len - returns the number of elements in linked listint_t list
 * @h: a pointer to the head node of the struct listint_t
 *
 * Return: the number of elements in linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t i;

	i = 0;
	current = h;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
