#ifndef LIST_GUARD
#define LIST_GUARD
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/**
 * struct list_check - singly linked list
 * @ptr: a pointer
 * @next: points to the next node
 *
 * Description: a singly linked list node structure to
 * store the address of another linked list's nodes
 */
typedef struct list_check_s
{
	void *ptr;
	struct list_check_s *next;
} list_check_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index
(listint_t **head, unsigned int index, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);
/* prototypes for file 101-print_listint_safe.c */
list_check_t *add_nodeint_end_2(list_check_t **head, void* ptr);
void free_listint3(list_check_t *head);
#endif
