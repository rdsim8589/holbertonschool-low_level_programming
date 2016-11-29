#include "lists.h"
/**
 * add_node - add a new node at the beginning of list_t list
 * @head: a pointer to a pointer of the struct list_t
 * @str: const pointer to a string
 *
 * Return: a pointer to the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _str_len(str);
	new_node->next = *head;
	*head = new_node;
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
