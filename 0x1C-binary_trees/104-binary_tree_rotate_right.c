#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotate tree to the right
 * @tree: pointer to the root to rotate
 *
 * Return: pointer to the new root or NULL otherwise
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp_node;

	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (tree);
	tmp_node = tree->left;
	tree->left = tmp_node->right;
	if (tree->left != NULL)
		tree->left->parent = tree;
	tmp_node->parent = NULL;
	tree->parent = tmp_node;
	tmp_node->right = tree;
	return (tmp_node);
}
