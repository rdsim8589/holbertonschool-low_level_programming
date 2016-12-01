#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of a linked list
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
