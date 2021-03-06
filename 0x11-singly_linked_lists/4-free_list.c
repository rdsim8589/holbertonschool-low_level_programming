#include "lists.h"
/**
 * free_list - free a list_t
 * @head: a pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
