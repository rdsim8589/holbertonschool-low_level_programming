#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at the given index
 * @head: the pointer to the pointer of the start of the linked list
 * @index: the index in which the node is to be deleted
 *
 * Return: 1 if it succeeds, or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp_hold;
	unsigned int i;

	i = 0u;
	current  = *head;

	if (index == 0)
	{
		if (current == NULL)
			return (-1);
		tmp_hold = current->next;
		free(current);
		*head = tmp_hold;
		return (1);
	}
	/* looping to node before you delete */
	while (i < index - 1)
	{
		if (current != NULL)
			current = current->next;
		else
			return (-1);
		i++;
	}

	if (current == NULL)
		return (-1);
	if (current->next != NULL)
	{
		/* links the two nodes and remove the node in between */
		tmp_hold = current->next;
		current->next = (current->next)->next;
		free(tmp_hold);
	}
	else
	{
		return (-1);
	}
	return (1);
}
