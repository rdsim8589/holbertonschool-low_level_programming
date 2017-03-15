#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int full;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_insert_left(root->right, 3438);
	binary_tree_insert_left(root->left->left, 24);
	binary_tree_insert_left(root->left->right, 2093);
	binary_tree_insert_right(root->left->right, 293);
	binary_tree_insert_right(root->left->left, 3);
	root->left->left = binary_tree_node(root->left, 10);
	binary_tree_print(root);

	full = binary_tree_is_full(root);
	printf("Is %d full: %d\n", root->n, full);
	full = binary_tree_is_full(root->left);
	printf("Is %d full: %d\n", root->left->n, full);
	full = binary_tree_is_full(root->right);
	printf("Is %d full: %d\n", root->right->n, full);
	return (0);
}
