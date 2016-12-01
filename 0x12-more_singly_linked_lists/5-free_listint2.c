#include "lists.h"
/**
 * free_listint2 - free a listint_t list and set head to NULL
 * @head: a pointer to a pointer of the head of the linkedin list
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
	*head = NULL;
}
