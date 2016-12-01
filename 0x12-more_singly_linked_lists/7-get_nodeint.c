#include "lists.h"
/**
 * get_nodeint_at_index - return the n-th node of the linked list
 * @head:a pointer to the first node of type struct listint_t
 * @index: the index of the node whose's output you want to return
 *
 * Return: the pointer to the node @ index, or the NULL if node note found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0u;
	while (i < index)
	{
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
		i++;
	}
	return (head);
}
