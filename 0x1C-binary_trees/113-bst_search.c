#include "binary_trees.h"
/**
 * bst_search - search through the bst for a value
 * @tree: root of the binary tree
 * @value: value to search for
 *
 * Return: the node of where the value is, NULL otherwise
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	while (tree->parent != NULL)
		tree = tree->parent;
	while (1)
	{
		if (tree == NULL)
			break;
		if (tree->n == value)
			return ((bst_t *)tree);
		else if (value > tree->n)
			tree = tree->right;
		else if (value < tree->n)
			tree = tree->left;
	}
	return (NULL);
}
