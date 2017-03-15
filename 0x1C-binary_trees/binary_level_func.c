#include "binary_trees.h"
/**
 * binary_level_free - free binary_level linked list and it's sub linked list
 * @level_head: pointer to a node in level linked list
 */
void binary_level_free(binary_level_t *level_head)
{
	binary_lvl_val_t *lvl_val_node, *lvl_val_tmp;
	binary_level_t *level_tmp;

	if (level_head == NULL)
		return;
	while (level_head->left != NULL)
		level_head = level_head->left;
	while (level_head != NULL)
	{
		lvl_val_node = level_head->lvl_val_head;
		while (lvl_val_node != NULL)
		{
			lvl_val_tmp = lvl_val_node;
			lvl_val_node = lvl_val_node->next;
			free(lvl_val_tmp);
		}
		level_tmp = level_head;
		level_head = level_head->right;
		free(level_tmp);
	}
	exit(0);

}
/**
 * binary_tree_val_push - pushes the tree node value into the correct level
 * @level_head: pointer to the node of level link list
 * @level: the level of the node in the binary tree
 * @tree_node_val: the value of the tree node to insert
 *
 * Return: the head of the link list (trying to make list link list
 * more efficent by returning the level_node that had a value inserted
 */
void *binary_tree_val_push(
	binary_level_t *level_head, int level, int tree_node_val)
{
	binary_level_t *level_node;

	while (level_head->left != NULL)
	{
		level_head = level_head->left;
	}
	while (level_head->right != NULL || level_head->level == level)
	{
		if (level_head->level == level)
		{
			prepend_lvl_val(level_head, tree_node_val);
			return (level_head);
		}
		level_head = level_head->right;
	}
	level_node = malloc(sizeof(binary_level_t));
	if (level_node == NULL)
		binary_level_free(level_head);
	level_node->right = NULL;
	level_node->left = level_head;
	level_node->level = level;
	level_node->lvl_val_head = NULL;
	prepend_lvl_val(level_node, tree_node_val);
	level_head->right = level_node;
	return (level_head);
}
/**
 * prepend_lvl_val - adds a value to the front of the lvl value linked list
 * @head: pointer to a node to insert in the level linked list
 * @tree_node_val: value to insert into the level linked list
 */
void prepend_lvl_val(binary_level_t *head, int tree_node_val)
{
	binary_lvl_val_t *lvl_val_node;

	if (head == NULL)
		return;
	lvl_val_node = malloc(sizeof(binary_lvl_val_t));
	if (lvl_val_node == NULL)
		binary_level_free(head);
	if (head->lvl_val_head == NULL)
	{
		lvl_val_node->next = NULL;
		lvl_val_node->n = tree_node_val;
		head->lvl_val_head = lvl_val_node;
	}
	else
	{
		lvl_val_node->next = head->lvl_val_head;
		lvl_val_node->n = tree_node_val;
		head->lvl_val_head = lvl_val_node;
	}
}
