#include "binary_trees.h"
#include "110-binary_tree_is_bst.c"
/**
 * binary_tree_height - finds the tree's height
 * @tree: tree node
 *
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * if_bst_balance - if the height of the tree differs by one at most one
 * @tree: pointer to the tree
 *
 * Return: 1 tree differs by at most one, 0 otherwise
 */
int if_bst_balance(const binary_tree_t *tree)
{
	int h_left, h_right, diff_left, diff_right;

	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if ((h_left - h_right) >= -1 && (h_left - h_right) <= 1)
	{
		diff_left = if_bst_balance(tree->left);
		diff_right = if_bst_balance(tree->right);
		return (diff_left && diff_right);
	}
	return (0);
}

/**
 * binary_tree_is_avl - just if avl tree
 * @tree: pointer to the root node
 *
 * Return: 1 if avl tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	return (if_bst_balance(tree) && binary_tree_is_bst(tree));
}
