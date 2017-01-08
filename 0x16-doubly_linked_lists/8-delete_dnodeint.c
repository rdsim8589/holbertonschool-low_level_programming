#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a given index of dlistint_t list
 * @head: pointer to the dlistint_t list
 * @index: index of node to delete
 *
 * Return: 1 if success and -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);
	current = *head;
	while (current->prev != NULL)
		current = current->prev;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current->prev == NULL && current->next == NULL)
	{
		*head = NULL;
		free(current);
		return (1);
	}
	else if (current->next == NULL)
	{
		current->prev->next = NULL;
	}
	else if (current->prev == NULL)
	{
		*head = current->next;
		(*head)->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
