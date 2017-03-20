#include "binary_trees.h"
/**
 * find_node - find if a node exist in the tree
 * @search: the tree to search through
 * @find: the node to check in the tree
 *
 * Return: 1 if found, 0 otherwise
 */
int find_node(binary_tree_t *search, const binary_tree_t *find)
{
	int right, left;

	if (search == NULL || find == NULL)
		return (0);
	if (search == find)
		return (1);
	left = find_node(search->left, find);
	right = find_node(search->right, find);
	if (left == 1 || right == 1)
		return (1);
	return (0);
}
/**
 * binary_trees_ancestor - find the lowest common ancestor
 * @first: tree node 1
 * @second: tree node 2
 *
 * Return: the lowest common ancestors
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	int found;
	binary_tree_t *search;

	if (first == NULL || second == NULL)
		return (NULL);
	search = (binary_tree_t *) first;
	found = find_node(search, second);
	while (search != NULL)
	{
		if (found == 1)
			return (search);
		if (found == 0)
		{
			if (search->parent == second)
				return (search->parent);
			if (search->parent->left == search)
			{
				search = search->parent;
				found = find_node(search->right, second);
			}
		}
	}
	return (NULL);
}
