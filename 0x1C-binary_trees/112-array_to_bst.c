#include "binary_trees.h"
/**
 * array_to_bst - create a bst from an array of ints
 * @array: an array of numbers
 * @size: size of the array
 *
 * Return: tree root or NULL otherwise
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *tree;

	if (array == NULL)
		return (NULL);
	tree = NULL;
	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);
	return (tree);
}
