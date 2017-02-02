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
	hash_node_t *node, *scan_idx, *scanner_idx;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return(0);

	index = key_index((const unsigned char *) key, ht->size);
	scanner_idx = ht->array[index];
	while (scanner_idx != NULL)
	{
		if (scanner_idx->key == key)
		{
			scanner_idx->value = (char *) value;
			return (1);
		}
		scanner_idx = scanner_idx->next;
	}
	scan_idx = (ht->array[index]);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *) key;
	node->value = (char *) value;
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = scan_idx;
		ht->array[index] = node;
	}
	return (1);
}
