#include "lists.h"

/**
 * print_list - prints out all the elements of list_t
 * @h: a const pointer to the struct list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t i;

	current = h;
	i = 0;
	while (current->next != NULL)
	{
		printf("[%lu] %s\n",current->len ,current->str);
		current = current->next;
		i++;
	}
	printf("[%lu] %s\n",current-> len ,current->str);
	i++;
	return(i);
}
