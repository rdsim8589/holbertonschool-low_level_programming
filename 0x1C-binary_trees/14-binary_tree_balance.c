#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor
 * tree: pointer to the node
 *
 * Return: the balance factor or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);
	right = (int) tree_height(tree->right);
	left = (int) tree_height(tree->left);
	return (left - right);
}
