#include "binary_trees.h"
/**
 * is_bst_wrapper - wrapper for binary_tree_is_bst
 * @tree: the root of the tree
 * @min: the lower bound
 * @max: the higher bound
 *
 * Return: return 1 if valid bst, 0 otherwise
 */
int is_bst_wrapper(const binary_tree_t *tree, int min, int max)
{
	int left, right;

	if (tree == NULL)
		return (1);
	if (tree->n > max || tree->n < min)
		return (0);
	left = is_bst_wrapper(tree->left, min, tree->n - 1);
	right = is_bst_wrapper(tree->right, tree->n + 1, max);
	if (!left || !right)
		return (0);
	return (1);
}

/**
 * binary_tree_is_bst - checks if binary tree is valid
 * The left subtree of a node contains only nodes with values less than the
 * node’s value.
 * The right subtree of a node contains only nodes with values greater than
 * the node’s value.
 * The left and right subtree each must also be a binary search tree
 * There must be no duplicate values
 * @tree: pointer to the root of the tree
 *
 * Return: 1 if tree is bst valid, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_wrapper(tree, INT_MIN, INT_MAX));
}
