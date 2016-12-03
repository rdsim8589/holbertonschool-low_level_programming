#include "lists.h"
/**
 * print_listint_safe - prints a linked list, only touch each node once
 * @head: a const pointer to the first node
 *
 * Return: the number of nodes in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	list_check_t *head_2, *current_2;
	size_t i;

	i = 0u;
	head_2 = NULL;
	current_2 = head_2;
	while (head != NULL)
	{
		while (current_2 != NULL)
		{
			if (head == current_2->ptr)
			{
				free_listint3(head_2);
				printf("-> [%p] %d\n",
				       (void *)head, head->n);
				return (i);
			}
			current_2 = current_2->next;
		}

		printf("[%p] %d\n", (void *)head, head->n);
		if (add_nodeint_end_2(&head_2, (void *)head) == NULL)
		{
			free_listint3(head_2);
			exit(98);
		}
		head = head->next;
		current_2 = head_2;
		i++;
	}
	return (i);
}
/**
 * free_listint3 - frees a listint_t list
 * @head: a pointer to the head of a linked list
 */
void free_listint3(list_check_t *head)
{
	list_check_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
/**
 * add_nodeint_end_2 - add a node at the end of the linked list
 * @head: a pointer to a pointer to the head of struct listint_t
 * @ptr: a pointer a node in the main linkedlist
 *
 * Return: the address of the new node, or NULL if failed
 */
list_check_t *add_nodeint_end_2(list_check_t **head, void *ptr)
{
	list_check_t *new, *current;

	/* creating a node */
	new = malloc(sizeof(list_check_t));
	if (new == NULL)
		return (NULL);
	new->ptr = ptr;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
