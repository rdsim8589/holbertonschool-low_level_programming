#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of listint_t list
 * @head: pointer to the pointer to the head of a linked list listint_t
 * @n: an int to add to the node within the linked list
 *
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t * new;

	/* creates a node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	/* set head to the new node */
	*head  = new;
	return (new);
}
