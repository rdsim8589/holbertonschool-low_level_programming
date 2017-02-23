#include "sort.h"
/**
 * insertion_sort_list - apply insertion sort
 * @list: linked list of listint_t list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *scan, *tmp;

	if (list == NULL || *list == NULL)
		return;
	scan = (*list)->next;
	while (scan != NULL)
	{
		if (scan->n < scan->prev->n)
		{
			tmp = scan->next;
			check_back(scan, list);
			scan = tmp;
		}
		else
			scan = scan->next;
	}
}

/**
 * check_back - check the previous nodes before scan if they need to be swaped
 * @scan: current node to check
 * @list: double pointer to move to the the head of the linked list
 */
void check_back(listint_t *scan, listint_t **list)
{
	listint_t *prev_scan;

	while (scan->prev != NULL)
	{
		prev_scan = scan->prev;
		if (scan->n < prev_scan->n)
			swap_prev(prev_scan, scan, list);
		else
			break;
	}
}
/**
 * swap_prev - swap the nodes
 * @prev_node: the node before node
 * @node: the node to check
 * @list: the head of the linked list to be reset before print
 */
void swap_prev(listint_t *prev_node, listint_t *node, listint_t **list)
{
	if (prev_node->prev != NULL)
		prev_node->prev->next = node;
	if (node->next != NULL)
		node->next->prev = prev_node;
	node->prev = prev_node->prev;
	prev_node->next = node->next;
	node->next = prev_node;
	prev_node->prev = node;

	while ((*list)->prev != NULL)
		*list = (*list)->prev;
	print_list(*list);
}
