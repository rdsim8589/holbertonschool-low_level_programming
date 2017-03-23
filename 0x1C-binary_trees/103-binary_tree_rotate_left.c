#include "binary_trees.h"
/**
 * binary_tree_rotate_left- rotate the tree node left
 * @tree: pointer to the root node to rotate left
 *
 * Return: to the new root node or NULL otherwise
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp_node;

	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (tree);
	tmp_node = tree->right;
	tree->right = tmp_node->left;
	if (tree->right != NULL)
		tree->right->parent = tree;
	tmp_node->parent = NULL;
	tree->parent = tmp_node;
	tmp_node->left = tree;
	return (tmp_node);
}
