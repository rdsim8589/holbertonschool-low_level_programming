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
 * binary_tree_levelorder -  prints the binary tree by level order
 * @tree: the node to the tree
 * @func: function pointer:
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_queue_t *queue;
	const binary_tree_t *node;

	if (tree == NULL || func == NULL)
		return;
	queue = NULL;
	enqueue(tree, &queue);
	while (queue != NULL)
	{
		node = dequeue(&queue);
		if (node == NULL)
			continue;
		func(node->n);
		enqueue(node->left, &queue);
		enqueue(node->right, &queue);
	}
}
