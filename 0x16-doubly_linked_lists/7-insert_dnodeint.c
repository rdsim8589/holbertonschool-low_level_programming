#include "lists.h"
/**
 * insert_dnodeint_at_idx - insert a node at a given linked list
 * @head: a double pointer to the head of the linked list
 * @idx: index to add node
 * @n: value to be stored within the node
 *
 * Return: the address of the node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *current, *node;
	unsigned int i;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (*head == NULL)
	{
		node->prev = node->next = NULL;
		*head = node;
		return (node);
	}

	current = *head;
	while (current->prev !=  NULL)
		current = current->prev;

	for (i = 0; i != idx - 1; i++)
	{
		if (current == NULL)
		{
			free(node);
			return (NULL);
		}
		current = current->next;
	}
	node->next = current->next;
	node->prev = current;
	node->next->prev = current->next = node;
	return (node);
}
