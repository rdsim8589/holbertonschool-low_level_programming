#include "lists.h"
/**
 * pop_listint - deletes the head node and return head nodes data
 * @head: a pointer to a pointer of the head of linked list
 *
 * Return: the int values stored at head
 */
int pop_listint(listint_t **head)
{
	int node_int;
	listint_t *hold;

	hold = *head;
	node_int = (*head)->n;
	*head = (*head)->next;
	free(hold);
	return (node_int);

}
