#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - determines if Binary tree is perfect
 * @tree: pointer to a tree node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int eval_right_height, eval_left_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		eval_right_height = binary_tree_is_perfect(tree->right);
		eval_left_height = binary_tree_is_perfect(tree->left);
	}
	else
	{
		return (0);
	}
	if (eval_right_height == 1 && eval_left_height == 1)
		return (1);
	else
		return (0);
}
