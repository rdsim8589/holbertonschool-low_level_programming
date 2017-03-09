#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaves in a tree
 * @tree: tree
 * return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	return (left_leaves + right_leaves);
}
