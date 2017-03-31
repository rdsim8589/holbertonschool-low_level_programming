#include "binary_trees.h"
#include "111-bst_insert.c"
/**
 * balance_avl - balance a node and two nodes below it
 * @node: pointer to the tree to rotate
 * Return: pointer to the new root node
 */
avl_t *balance_avl(avl_t *node)
{

	if (!node->right && !node->left)
		return (node);
	if (!node->right)
	{
		if (!node->left->left)
			node->left = binary_tree_rotate_left((binary_tree_t *) node->left);
		if (node->left->left)
		{
			return ((avl_t *)binary_tree_rotate_right((binary_tree_t *) node));
		}
	}
	else if (!node->left)
	{
		if (!node->right->right)
			node->right = binary_tree_rotate_right((binary_tree_t *) node->right);
		if (node->right->right)
		{
			return ((avl_t *)binary_tree_rotate_left((binary_tree_t *) node));
		}
	}
	return (node);
}
/**
 * avl_insert - insert a node into avl_tree
 * This will insert into avl and rebalance the tree
 * @tree: double pointer to the root of the tree
 * @value: value to insert into a node
 *
 * Return: the new root of the tree
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *node, *tmp_node, *tmp_parent;

	if (tree == NULL)
		return (NULL);
	tmp_node = node = (avl_t *)bst_insert((bst_t **) tree, value);
	while (tmp_node->parent != NULL)
	{
		tmp_parent = tmp_node->parent;
		if (tmp_parent->right == tmp_node)
		{
			tmp_node = balance_avl(tmp_node);
			tmp_node->parent = tmp_parent;
			tmp_parent->right = tmp_node;
		}
		else if (tmp_parent->left == tmp_node)
		{
			tmp_node = balance_avl(tmp_node);
			tmp_node->parent = tmp_parent;
			tmp_parent->left = tmp_node;
		}
		if (tmp_node->parent == NULL)
			break;
		tmp_node = tmp_node->parent;
	}
	*tree = tmp_node;
	return (node);
}
