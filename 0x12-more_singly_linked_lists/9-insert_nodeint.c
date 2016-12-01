#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node after the given index
 * @head: a pointer to a pointer to the start of the linked list
 * @index: the index in which a new node is inserted after the index
 * @n: an int value to place within the node
 *
 * Return: the address of the new node or
 * NULL if it fails, or unable to add a new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0u;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	current = *head;
	while (i < index - 1)
	{
		if (current != NULL)
		{
			current = current->next;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
