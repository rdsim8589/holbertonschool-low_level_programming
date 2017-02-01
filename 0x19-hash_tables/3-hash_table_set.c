#include "hash_tables.h"
/**
 * hash_table_set
 * @ht: pointer to the has table
 * @key: hash key
 * @value: hash value associated with the key
 *
 * Return: 1 if success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *scan_idx;
	unsigned long int index;

	if ((node = malloc(sizeof(hash_node_t))) == NULL)
		return(0);
	node->key = (char*) key;
	node->value = (char*) value;
	node->next = NULL;

	index = key_index((const unsigned char*) key, ht->size);
	scan_idx = ht->array[index];
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		while (scan_idx->next != NULL)
			scan_idx = scan_idx->next;
		scan_idx->next = node;
	}
	return (1);
}
