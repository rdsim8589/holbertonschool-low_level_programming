#ifndef SORT
#define SORT
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Singly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 * @prev: The Pointer the prev element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
/* helper to check previous entries of list */
void check_back(listint_t *scan, listint_t **list);

void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
/* the actual quick sort */
void rl_quick_sort(int *array, int start, int end, size_t size);
int ary_divider(int *array, int start, int end, size_t size);

void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
/* helper functions for counting sort */
int find_max_val(int *array, size_t size);
void swap_values(int *array, int *tmp_ary, size_t size);

void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
/*void sort_deck(deck_node_t **deck);*/

/* printing function */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_print(int *array, size_t idx_1, size_t idx_2, size_t size);
listint_t *create_listint(const int *array, size_t size);
/* swap for arrays */
void swap(int *array, size_t idx_1, size_t idx_2);
/* swap previous node */
void swap_prev(listint_t *prev_node, listint_t *node, listint_t **list);
#endif
