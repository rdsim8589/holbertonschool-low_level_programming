#include "lists.h"
/**
 *add_dnodeint - adds a node at the beginning of dlistint_t list
 * @head: head of dlistint_t list
 * @n: value of n
 *
 * Return: the head of dlistint_t list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (*head != NULL)
	{
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
		(*head)->prev = node;
	}
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (*head);
}
