#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the has table
 * @key: hash key
 * @value: hash value associated with the key
 *
 * Return: 1 if success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, **scan_idx;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return(0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *) key;
	node->value = (char *) value;
	node->next = NULL;

	index = key_index((const unsigned char *) key, ht->size);
	scan_idx = &(ht->array[index]);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = *scan_idx;
		*scan_idx = node;
	}
	return (1);
}
