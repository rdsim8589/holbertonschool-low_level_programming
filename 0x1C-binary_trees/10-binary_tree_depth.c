#include "binary_trees.h"
/**
 * binary_tree_depth - gets the depth of the node
 * @node: the node to check
 *
 * Return: the depth of a node, or 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL)
		return (0);
	for (depth = 0; node->parent != NULL; depth++)
		node = node->parent;
	return (depth);
}
