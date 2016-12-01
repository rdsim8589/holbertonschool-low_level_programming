#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the linked list
 * @head: a pointer to a pointer to the head of struct listint_t
 * @n: an int value to fill in the node
 *
 * Return: the address of the new node, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	/* creating a node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
