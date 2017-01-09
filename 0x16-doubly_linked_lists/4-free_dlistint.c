#include "lists.h"
/**
 * free_dlistint - free a linked list
 * @head: the head to dilistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node;

	while (head != NULL && head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
}
