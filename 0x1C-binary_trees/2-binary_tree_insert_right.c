#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node to the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to be stored in the node
 *
 * Return: node that was created or the NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	else
	{
		node->right = NULL;
	}
	node->left = NULL;
	node->n = value;
	node->parent = parent;
	parent->right = node;
	return (node);
}
