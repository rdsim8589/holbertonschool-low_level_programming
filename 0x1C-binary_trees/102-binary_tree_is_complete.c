#include "binary_trees.h"
/**
 * enqueue - push the tree node into the node of the queueu
 * @tree: pointer to the node to be saved
 * @queue: pointer to the head of the queue
 */
void enqueue(const binary_tree_t *tree, binary_queue_t **queue)
{
	binary_queue_t *tmp_queue, *search;

	tmp_queue = malloc(sizeof(binary_queue_t));
	if (tmp_queue == NULL)
		return;
	tmp_queue->next = NULL;
	tmp_queue->node = tree;

	if (*queue == NULL)
	{
		*queue = tmp_queue;
	}
	else
	{
		search = *queue;
		while (search->next != NULL)
			search = search->next;
		search->next = tmp_queue;
	}
}
/**
 * dequeue - pop the first node of the queue and return tree node
 * @queue: pointer to the head of the queue
 *
 * Return: pointer to the binary tree node
 */
const binary_tree_t *dequeue(binary_queue_t **queue)
{
	binary_queue_t *queue_holder;
	const binary_tree_t *node_holder;

	queue_holder = *queue;
	node_holder = queue_holder->node;
	*queue = queue_holder->next;
	free(queue_holder);
	return (node_holder);
}
/**
 * check_queue - checks if the return of queue->node == NULL
 * @queue: double pointer to the queue
 *
 * Return: 1 if queue->node == NULL, 0 otherwise
 */
int check_queue(binary_queue_t **queue)
{
	const binary_tree_t *checker;
	int queue_check;

	queue_check = 1;
	while (*queue != NULL)
	{
		checker = dequeue(queue);
		if (checker != NULL)
			queue_check = 0;
	}
	return (queue_check);
}
/**
 * binary_tree_is_complete - determines if a tree is complete
 * @tree: pointer to the tree
 *
 * Return: 1 is if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_queue_t *queue;
	const binary_tree_t *node;
	int value;

	if (tree == NULL)
		return (0);
	queue = NULL;
	enqueue(tree, &queue);
	while (queue != NULL)
	{
		node = dequeue(&queue);
		if (node == NULL)
		{
			value = check_queue(&queue);
			if (value == 0)
				return (0);
			break;
		}
		enqueue(node->left, &queue);
		enqueue(node->right, &queue);
	}
	return (1);
}
