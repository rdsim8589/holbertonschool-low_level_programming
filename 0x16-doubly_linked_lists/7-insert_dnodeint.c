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
		return (*head = node);
	}
	current = *head;
	while (current->prev !=  NULL)
		current = current->prev;
	if (idx == 0)
	{
		node->next = current;
		node->prev = current->prev;
		current->prev = node;
		*head = node;
		return (node);
	}
	for (i = 0; i < idx - 1; i++)
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
	current->next = node;
	if (current->next != NULL)
		node->next->prev;
	return (node);
}
