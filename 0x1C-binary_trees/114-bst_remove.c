#include "binary_trees.h"
#include "113-bst_search.c"
/**
 * connect_parent - connects parent of rm_mode to the connect node
 * does not work if rm_node is the root node
 * @rm_node: node to remove
 * @connect: node to connect to the parent of rm_node
 */
void connect_parent(bst_t *rm_node, bst_t *connect)
{
	if (rm_node->parent == NULL)
		return;
	if (rm_node->parent->right == rm_node)
		rm_node->parent->right = connect;
	else if (rm_node->parent->left == rm_node)
		rm_node->parent->left = connect;
	if (connect != NULL)
		connect->parent = rm_node->parent;
	free(rm_node);
}
/**
 * replace_root - swap the value of rm_node with connect node
 * free connect node
 * @rm_node: node to remove
 * @connect: node of value to replace
 */
void replace_root(bst_t *rm_node, bst_t *connect)
{
	if (connect == NULL)
		return;
	rm_node->n = connect->n;
	if (connect->left != NULL && connect->left->parent == connect)
	{
		rm_node->left =  connect->left;
		rm_node->right = NULL;
		connect->left->parent = rm_node;
	}
	else if (connect->right != NULL && connect->right->parent == connect)
	{
		rm_node->right =  connect->right;
		rm_node->left = NULL;
		connect->right->parent = rm_node;
	}
	free(connect);
}
/**
 * bst_remove - remove a node from a bst
 * @root: the binary tree
 * @value: value to check for
 *
 * Return: the root node of the tree or NULL otherwise
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *rm_node, *rp_node;
	void (*fun)(bst_t *, bst_t *);

	if (root == NULL)
		return (NULL);
	rm_node = bst_search((const bst_t *) root, value);
	if (rm_node->parent == NULL)
		fun = &replace_root;
	else
		fun = &connect_parent;

	if (rm_node == NULL)
		return (NULL);
	if (rm_node->right == NULL && rm_node->left == NULL)
		(*fun)(rm_node, NULL);
	else if (rm_node->right == NULL)
		(*fun)(rm_node, rm_node->left);
	else if (rm_node->left == NULL)
		(*fun)(rm_node, rm_node->right);
	else
	{
		rp_node = rm_node;
		rp_node = rp_node->right;
		while (rp_node->left != NULL)
			rp_node = rp_node->left;
		rm_node->n = rp_node->n;
		connect_parent(rp_node, NULL);
	}
	return (root);
}
