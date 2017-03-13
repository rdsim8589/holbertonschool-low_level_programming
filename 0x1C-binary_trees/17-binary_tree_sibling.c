#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of the node
 * @node: pointer to node to find the sibling of
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	if (node->parent->left == node)
		return (node->parent->right);
	return (NULL);
}
