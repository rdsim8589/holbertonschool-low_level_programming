#include "binary_trees.h"
/**
 * binary_tree_is_full: Checks if a binary tree is full
 * @tree: pointer the node of a tree
 *
 * Return: 1 if full and 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int has_childs_right, has_childs_left;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL && tree->left == NULL)
		return (0);
	if (tree->right == NULL && tree->left != NULL)
		return (0);
	if (tree->right == NULL && tree-> left == NULL)
		return (1);
	has_childs_right = binary_tree_is_full(tree->right);
	has_childs_left = binary_tree_is_full(tree->left);
	if (has_childs_left == 0 || has_childs_right == 0)
		return (0);
	else
		return (1);
}
