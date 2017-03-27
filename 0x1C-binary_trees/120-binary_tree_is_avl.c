#include "binary_trees.h"
#include "110-binary_tree_is_bst.c"
#include "9-binary_tree_height.c"
/**
 * height_diff_by_one - if the height of the tree differs by one
 * @tree: pointer to the tree
 *
 * Return: 1 tree differs by at most one, 0 otherwise
 */
int height_diff_by_one(const binary_tree_t *tree)
{
	int h_left, h_right, diff_left, diff_right;

	if (tree == NULL)
		return (1);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if ((h_left - h_right) >= -1 && (h_left - h_right) <= 1)
	{
		diff_left = height_diff_by_one(tree->left);
		diff_right = height_diff_by_one(tree->right);
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
	return (height_diff_by_one(tree) && binary_tree_is_bst(tree));
}
