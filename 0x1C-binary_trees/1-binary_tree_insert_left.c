#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: pointer to the head node
 * @value: value to be stored in the node
 *
 * Return: pointer to the node or Null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	else
	{
		node->left = NULL;
	}
	node->right = NULL;
	node->n = value;
	node->parent = parent;
	parent->left = node;
	return (node);
}
