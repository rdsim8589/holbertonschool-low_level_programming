#include "binary_trees.h"
/**
 * connect_node - inset node
 * @parent: parent node to connect
 * @child: child node to connect with
 * @n: number to insert
 * @side: side to insert the child to
 *
 * Return: the inserted node
 */
bst_t *connect_node(bst_t **parent, bst_t *child, int n, char side)
{
	bst_t *node;

	node = malloc(sizeof(bst_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*parent == NULL)
	{
		node->parent = NULL;
		node->left = NULL;
		node->right = NULL;
		*parent = node;
	}
	else
	{
		node->parent = *parent;
		if (side == 'L')
		{
			node->left = child;
			node->right = NULL;
			(*parent)->left = node;
		}
		else if (side == 'R')
		{
			node->left = NULL;
			node->right = child;
			(*parent)->right = node;
		}
	}
	return (node);
}
/**
 * bst_insert - interesting a node into bst
 * @tree: double pointer the tree node
 * @value: value to be inserted
 *
 * Return: address to the inserted node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp;
	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
		return (connect_node(tree, NULL, value, 'N'));
	while ((*tree)->parent != NULL)
		*tree = (*tree)->parent;
	tmp = *tree;
	while (1)
	{
		if (tmp->n == value)
			break;
		else if (tmp->n < value)
		{
			if (tmp->right == NULL)
				return (connect_node(&tmp, NULL, value, 'R'));
			tmp = tmp->right;
		}
		else if (tmp->n > value)
		{
			if (tmp->left == NULL)
				return (connect_node(&tmp, NULL, value, 'L'));
			tmp = tmp->left;
		}
	}
	return (NULL);
}
