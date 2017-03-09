#include "binary_trees.h"
/**
 * tree_height - returns the tree height + 1
 * @tree: pointer to the tree
 *
 * Return: the tree height + 1
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_tree, right_tree;

	if (tree == NULL)
		return (0);
	left_tree = tree_height(tree->left);
	right_tree = tree_height(tree->right);
	if (left_tree > right_tree)
		return (left_tree + 1);
	else
		return (right_tree + 1);
}

/**
 * binary_tree_height - wrapper for tree height
 * @tree: tree node
 *
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree_height(tree) - 1);
}
