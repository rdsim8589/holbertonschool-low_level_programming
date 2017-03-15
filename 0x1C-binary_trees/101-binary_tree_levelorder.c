#include "binary_trees.h"
#include "binary_level_func.c"
/**
 * binary_tree_levelorder -  prints the binary tree by level order
 * @tree: the node to the tree
 * @func: function pointer
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_level_t *level_head;

	if (tree == NULL || func == NULL)
		return;
	level_head = malloc(sizeof(binary_level_t));
	if (level_head == NULL)
		binary_level_free(level_head);
	level_head->right = NULL;
	level_head->left = NULL;
	level_head->level = 0;
	level_head->lvl_val_head = NULL;
	level_head = binary_tree_level_recur(tree, level_head, 0);
	print_tree_levels(level_head, func);
	binary_level_free(level_head);
}
/**
 * binary_tree_level_recur - recursive search through a binary tree
 * @tree: pointer to a node in a tree
 * @level_head: pointer to a node in level linked list
 * @lvl: current level of the tree node
 *
 * Return: the a pointer to the level linked list
 */
binary_level_t *binary_tree_level_recur(
	const binary_tree_t *tree, binary_level_t *level_head, int lvl)
{
	if (tree == NULL || level_head == NULL)
		return (NULL);
	binary_tree_val_push(level_head, lvl, tree->n);
	binary_tree_level_recur(tree->right, level_head, lvl + 1);
	binary_tree_level_recur(tree->left, level_head, lvl + 1);
	return (level_head);

}
/**
 * print_tree_levels - prints all the trees by level
 * @level_head: pointer level linked list
 * @func: pointer to a function
 */
void print_tree_levels(binary_level_t *level_head, void (*func)(int))
{
	binary_lvl_val_t *lvl_val_head;

	while (level_head->left != NULL)
		level_head = level_head->left;
	while (level_head != NULL)
	{
		lvl_val_head = level_head->lvl_val_head;
		while (lvl_val_head != NULL)
		{
			func(lvl_val_head->n);
			lvl_val_head = lvl_val_head->next;
		}
		level_head = level_head->right;
	}

}
