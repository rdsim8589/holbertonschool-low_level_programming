#ifndef TREE
#define TREE
#include <stdio.h>
#include <stdlib.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

struct binary_lvl_val_s
{
	int n;
	struct binary_lvl_val_s *next;
};
typedef struct binary_lvl_val_s binary_lvl_val_t;

/**
 * struct binary_level_s - Binary tree level
 *
 * @n: the level of the binary tree
 * @right: the pointer to the previous level
 * @left: the pointer to the next level
 */
struct binary_level_s
{
	int level;
	struct binary_level_s *right;
	struct binary_level_s *left;
	struct binary_lvl_val_s *lvl_val_head;
};
typedef struct binary_level_s binary_level_t;

/**
 * binary_queue_s - node to hold a tree node
 * @next: pointer to the next node
 * @node: pointer to the tree node
 */
struct binary_queue_s
{
	struct binary_queue_s *next;
	const binary_tree_t *node;
};
typedef struct binary_queue_s binary_queue_t;
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *node);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);
int binary_tree_is_avl(const binary_tree_t *tree);
avl_t *avl_insert(avl_t **tree, int value);
avl_t *array_to_avl(int *array, size_t size);
avl_t *avl_remove(avl_t *root, int value);
avl_t *sorted_array_to_avl(int *array, size_t size);
int binary_tree_is_heap(const binary_tree_t *tree);
heap_t *heap_insert(heap_t **root, int value);
heap_t *arraytoheap(int *array, size_t size);
int heap_extract(heap_t **root);
int *heap_to_sorted_array(heap_t *heap, size_t *size);
/* binary tree print */
void binary_tree_print(const binary_tree_t *tree);
/* binary_level_fun.c */
void binary_level_free(binary_level_t *level_head);
binary_level_t *binary_tree_level_recur(
	const binary_tree_t *tree, binary_level_t *level_head, int lvl);
void print_tree_levels(binary_level_t *level_head, void (*func)(int));
void binary_level_free(binary_level_t *level_head);
void *binary_tree_val_push(
	binary_level_t *level_head, int level, int tree_node_val);
void prepend_lvl_val(binary_level_t *head, int tree_node_val);
#endif
