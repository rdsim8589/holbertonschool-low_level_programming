#include "lists.h"
/**
 * get_dnodeint_at_index -  get the node at a given index
 * @head: the head of linked list
 * @index:the node index to return
 *
 * Return: returns the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	while (head != NULL && head->prev != NULL)
		head = head->prev;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
