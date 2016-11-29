#include "lists.h"
/**
 * add_node_end - add a node at the end of a list_t list
 * @head: a pointer to the pointer of a struct to the list_t
 * @str: a str to be place within a node
 *
 * Return: a pointer to a head of the list_t list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _str_len(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (*head);
}

/**
 * _str_len - find the len of the string
 * @str: the string to find the len of
 *
 * Return: the string len
 */
size_t _str_len(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
