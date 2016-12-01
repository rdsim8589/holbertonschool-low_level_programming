#include "lists.h"
/**
 * sum_listint - return the sum of all the data (n) of listint_t linked list
 * @head: a pointer to the start of the linked list
 *
 * Return: the sum of the data (n) of each node, or 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int node_sum;

	node_sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		node_sum += head->n;
		head = head->next;
	}
	return (node_sum);
}
