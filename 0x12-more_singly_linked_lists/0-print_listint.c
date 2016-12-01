#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: a pointer to head node of struct listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t i;

	current = h;
	i = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
