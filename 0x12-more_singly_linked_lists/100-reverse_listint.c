#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the the pointer of the start of the linked list
 *
 * Return: the first node of the reversed linked list, or NULL if fails
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_hold_1, *node_hold_2;

	if (*head == NULL || **head == NULL || head == NULL)
		return (NULL);
	node_hold_1 = (*head)->next;
	node_hold_2 = (*head)->next->next;
	(*head)->next = NULL;
	while (1)
	{
		node_hold_1->next = *head;
		*head = node_hold_1;
		node_hold_1 = node_hold_2;
		if (node_hold_1 == NULL)
			return (*head);
		node_hold_2 = node_hold_2->next;
	}
}
