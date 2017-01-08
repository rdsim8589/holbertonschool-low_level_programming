#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t
 * @head: pointer to dlistint_t linkedlist
 *
 * Return: the sum of all the data (n) of a dlistint_t
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head != NULL && head->prev != NULL)
		head = head->prev;
	for (sum = 0; head->next != NULL; sum += head->n)
		head = head->next;
	return (sum);
}
