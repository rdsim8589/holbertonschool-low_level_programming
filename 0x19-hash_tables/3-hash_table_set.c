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
	hash_node_t *node, *scanner_idx;
	unsigned long int index;
	char *value_cpy;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_cpy);
		return (0);
	}
	node->key = (char *) key;
	node->value = value_cpy;
	node->next = NULL;
	index = key_index((const unsigned char *) key, ht->size);
	scanner_idx = ht->array[index];
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	while (scanner_idx != NULL)
	{
		if (strcmp(scanner_idx->key, key) == 0)
		{
			scanner_idx->value = (char *) value;
			free(node);
			return (1);
		}
		scanner_idx = scanner_idx->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
