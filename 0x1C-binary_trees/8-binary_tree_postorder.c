#include "binary_trees.h"
/**
 * binary_tree_postorder - post-order traversal of a binary tree
 * @tree: the pointer to the node of the tree
 * @func: function pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
