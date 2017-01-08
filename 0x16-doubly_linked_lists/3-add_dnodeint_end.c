#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the add_dnodeint list
 * @head: the head of the linked list
 * @n: the int value to be stored in the new node
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	current = *head;
	node->n = n;
	node->prev = current;
	node->next = NULL;
	if (*head != NULL)
		while (current->next != NULL)
			current = current->next;
	else
		return (*head = node);
	node->prev = current;
	current->next = node;
	return (node);
}
