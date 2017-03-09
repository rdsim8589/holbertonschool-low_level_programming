#include "binary_trees.h"
/**
 * binary_tree_nodes - count the number of nodes with at least one child
 * @tree: the tree
 *
 * Return: the number nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	left_leaves = right_leaves = 0;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_leaves = binary_tree_nodes(tree->left);
	right_leaves = binary_tree_nodes(tree->right);
	return (left_leaves + right_leaves + 1);
}
