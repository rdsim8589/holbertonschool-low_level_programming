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

	if (key == NULL || ht == NULL)
		return (0);

	node = chk_ht_node(key, value);
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


/**
 * chk_ht_node - creates dups of key and value
 * @key: The hash key
 * @val: The hash value
 *
 * Return: the pointer to the hash_node_t
 */
hash_node_t *chk_ht_node(const char *key, const char *val)
{
	hash_node_t *node;
	char *val_cpy, *key_cpy;

	val_cpy = strdup(val);
	if (val_cpy == NULL)
		return (0);
	key_cpy = strdup(key);
	if (key_cpy == NULL)
	{
		free(val_cpy);
		return (NULL);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(key_cpy);
		free(val_cpy);
		return (NULL);
	}
	node->key = key_cpy;
	node->value = val_cpy;
	node->next = NULL;
	return (node);
}
